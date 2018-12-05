#include "common/network/listener_impl.h"

#include <sys/un.h>

#include "envoy/common/exception.h"

#include "common/common/assert.h"
#include "common/common/empty_string.h"
#include "common/common/fmt.h"
#include "common/event/dispatcher_impl.h"
#include "common/event/file_event_impl.h"
#include "common/network/address_impl.h"

#include "event2/listener.h"

extern "C" {
extern uint8_t is_host_listener(evconnlistener* lev);
}

namespace Envoy {
namespace Network {

Address::InstanceConstSharedPtr ListenerImpl::getLocalAddress(int64_t fd) {
  return Address::addressFromFd(fd);
}


void ListenerImpl::listenCallback(evconnlistener* lev, evutil_socket_t fd, sockaddr* remote_addr,
                                  int remote_addr_len, void* arg) {
  ListenerImpl* listener = static_cast<ListenerImpl*>(arg);

  int64_t use_fd = fd;

  if (is_host_listener(lev)) {
      use_fd &= 0xFFFFFFFF;
  } else {
      // Mark socket as a FastPath socket
      SET_FP_SOCKET(use_fd);
  }

  // Get the local address from the new socket if the listener is listening on IP ANY
  // (e.g., 0.0.0.0 for IPv4) (local_address_ is nullptr in this case).
  const Address::InstanceConstSharedPtr& local_address =
      listener->local_address_ ? listener->local_address_ : listener->getLocalAddress(use_fd);
  // The accept() call that filled in remote_addr doesn't fill in more than the sa_family field
  // for Unix domain sockets; apparently there isn't a mechanism in the kernel to get the
  // sockaddr_un associated with the client socket when starting from the server socket.
  // We work around this by using our own name for the socket in this case.
  // Pass the 'v6only' parameter as true if the local_address is an IPv6 address. This has no effect
  // if the socket is a v4 socket, but for v6 sockets this will create an IPv4 remote address if an
  // IPv4 local_address was created from an IPv6 mapped IPv4 address.
  const Address::InstanceConstSharedPtr& remote_address =
      (remote_addr->sa_family == AF_UNIX)
          ? Address::peerAddressFromFd(use_fd)
          : Address::addressFromSockAddr(*reinterpret_cast<const sockaddr_storage*>(remote_addr),
                                         remote_addr_len,
                                         local_address->ip()->version() == Address::IpVersion::v6);
  //evutil_make_socket_nonblocking(fd);
  listener->cb_.onAccept(std::make_unique<AcceptedSocketImpl>(use_fd, local_address, remote_address),
                         listener->hand_off_restored_destination_connections_);
}

ListenerImpl::ListenerImpl(Event::DispatcherImpl& dispatcher, Socket& socket, ListenerCallbacks& cb,
                           bool bind_to_port, bool hand_off_restored_destination_connections)
    : local_address_(nullptr), cb_(cb),
      hand_off_restored_destination_connections_(hand_off_restored_destination_connections),
      listener_(nullptr) {
          const auto ip = socket.localAddress()->ip();

          // Only use the listen socket's local address for new connections if it is not the all hosts
          // address (e.g., 0.0.0.0 for IPv4).
          if (!(ip && ip->isAnyAddress())) {
              local_address_ = socket.localAddress();
          }

          if (bind_to_port) {

              int64_t use_fd = socket.fd();

              Envoy::Network::Address::SocketProvider provider =
               (IS_FP_SOCKET(use_fd)) ?
                  provider = Envoy::Network::Address::SocketProvider::Fp :
                  provider = Envoy::Network::Address::SocketProvider::Host;

              use_fd &= 0xFFFFFFFF;

              if (provider == Envoy::Network::Address::SocketProvider::Host) {
                  listener_.reset(
                          evconnlistener_new_host(&dispatcher.base_host(), listenCallback, this, 0, -1, use_fd));
              } else if (provider == Envoy::Network::Address::SocketProvider::Fp) {
                  listener_.reset(
                          evconnlistener_new(&dispatcher.base(), listenCallback, this, 0, -1, use_fd));
              }

              if (!listener_) {
                  throw CreateListenerException(
                          fmt::format("cannot listen on socket: {}", socket.localAddress()->asString()));
              }

              
            // TODO: Revisit
            //if (!Network::Socket::applyOptions(socket.options(), socket, Socket::SocketState::Listening)) {
            //  throw CreateListenerException(fmt::format(
            //      "cannot set post-listen socket option on socket: {}", socket.localAddress()->asString()));
            //}

              evconnlistener_set_error_cb(listener_.get(), errorCallback);
          }
      }

void ListenerImpl::errorCallback(evconnlistener*, void*) {
  // We should never get an error callback. This can happen if we run out of FDs or memory. In those
  // cases just crash.
  //PANIC(fmt::format("listener accept failure: {}", strerror(errno)));
}

} // namespace Network
} // namespace Envoy