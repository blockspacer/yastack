add_subdirectory(external/grpc)
add_subdirectory(external/googletest)
add_subdirectory(external/cctz)
add_subdirectory(external/spdlog)
add_subdirectory(external/backward-cpp)
add_subdirectory(external/abseil-cpp)
#add_subdirectory(external/data-plane-api)
add_subdirectory(external/libcircllhist)
add_subdirectory(external/yaml-cpp)
add_subdirectory(external/opentracing-cpp)
add_subdirectory(external/opentracing-cpp/mocktracer)
add_subdirectory(external/rapidjson)
add_subdirectory(external/http-parser)
add_subdirectory(external/grpc-httpjson-transcoding)
add_subdirectory(external/nghttp2-1.30.0)
add_subdirectory(external/luajit-2.0)
#add_subdirectory(external/boringssl)
add_subdirectory(external/libevent)
add_subdirectory(external/tclap)
add_subdirectory(external/xxHash)
add_subdirectory(external/googleapis)
add_subdirectory(external/lightstep-tracer-cpp)
add_subdirectory(external/libprotobuf_mutator)
add_subdirectory(external/jwt_verify_lib)
add_subdirectory(external/fmt-4.1.0)
#add_subdirectory(external/c-ares)

#Envoy code
# __HAS_FF__ signifies has Freebsd-Function/Fastpath
add_definitions(-D__HAS_FF__)
add_definitions(-DENVOY_HANDLE_SIGNALS)

add_subdirectory(source/common/common)
add_subdirectory(source/common/access_log)
add_subdirectory(source/common/thread_local)
add_subdirectory(source/common/api)
add_subdirectory(source/common/json)
add_subdirectory(source/common/compressor)
add_subdirectory(source/common/decompressor)
add_subdirectory(source/common/singleton)
add_subdirectory(source/common/protobuf)
add_subdirectory(source/common/html)
#add_subdirectory(source/common/filter)
#add_subdirectory(source/common/dynamo)
add_subdirectory(source/common/router)
add_subdirectory(source/common/memory)
#add_subdirectory(source/common/ext_authz)
#add_subdirectory(source/common/redis)
add_subdirectory(source/common/request_info)
add_subdirectory(source/common/upstream)
add_subdirectory(source/common/config)
add_subdirectory(source/common/runtime)
add_subdirectory(source/common/profiler)
add_subdirectory(source/common/stats)
add_subdirectory(source/common/grpc/)
add_subdirectory(source/common/http)
#add_subdirectory(source/common/mongo)
#add_subdirectory(source/common/lua)
add_subdirectory(source/common/ratelimit)
add_subdirectory(source/common/tracing)
add_subdirectory(source/common/ssl)
add_subdirectory(source/common/buffer)
add_subdirectory(source/common/network)
add_subdirectory(source/common/event)
add_subdirectory(source/common/filesystem)
add_subdirectory(source/server)
add_subdirectory(source/extensions)
add_subdirectory(source/common/tcp)
add_subdirectory(source/common/tcp_proxy)
add_subdirectory(source/server/config_validation)
add_subdirectory(source/server/http)
add_subdirectory(source/common/secret)
add_subdirectory(source/exe)

# Testing
#add_subdirectory(test/test_common)
add_subdirectory(test)
