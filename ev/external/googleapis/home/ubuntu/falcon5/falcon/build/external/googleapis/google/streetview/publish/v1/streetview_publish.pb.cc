// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/streetview/publish/v1/streetview_publish.proto

#include "google/streetview/publish/v1/streetview_publish.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace google {
namespace streetview {
namespace publish {
namespace v1 {
}  // namespace v1
}  // namespace publish
}  // namespace streetview
}  // namespace google
namespace protobuf_google_2fstreetview_2fpublish_2fv1_2fstreetview_5fpublish_2eproto {
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/streetview/publish/v1/streetview_publish.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n5google/streetview/publish/v1/streetvie"
      "w_publish.proto\022\034google.streetview.publi"
      "sh.v1\032\034google/api/annotations.proto\032\033goo"
      "gle/protobuf/empty.proto\032,google/streetv"
      "iew/publish/v1/resources.proto\032.google/s"
      "treetview/publish/v1/rpcmessages.proto2\213"
      "\n\n\030StreetViewPublishService\022p\n\013StartUplo"
      "ad\022\026.google.protobuf.Empty\032\'.google.stre"
      "etview.publish.v1.UploadRef\" \202\323\344\223\002\032\"\025/v1"
      "/photo:startUpload:\001*\022~\n\013CreatePhoto\0220.g"
      "oogle.streetview.publish.v1.CreatePhotoR"
      "equest\032#.google.streetview.publish.v1.Ph"
      "oto\"\030\202\323\344\223\002\022\"\t/v1/photo:\005photo\022|\n\010GetPhot"
      "o\022-.google.streetview.publish.v1.GetPhot"
      "oRequest\032#.google.streetview.publish.v1."
      "Photo\"\034\202\323\344\223\002\026\022\024/v1/photo/{photo_id}\022\230\001\n\016"
      "BatchGetPhotos\0223.google.streetview.publi"
      "sh.v1.BatchGetPhotosRequest\0324.google.str"
      "eetview.publish.v1.BatchGetPhotosRespons"
      "e\"\033\202\323\344\223\002\025\022\023/v1/photos:batchGet\022\203\001\n\nListP"
      "hotos\022/.google.streetview.publish.v1.Lis"
      "tPhotosRequest\0320.google.streetview.publi"
      "sh.v1.ListPhotosResponse\"\022\202\323\344\223\002\014\022\n/v1/ph"
      "otos\022\222\001\n\013UpdatePhoto\0220.google.streetview"
      ".publish.v1.UpdatePhotoRequest\032#.google."
      "streetview.publish.v1.Photo\",\202\323\344\223\002&\032\035/v1"
      "/photo/{photo.photo_id.id}:\005photo\022\247\001\n\021Ba"
      "tchUpdatePhotos\0226.google.streetview.publ"
      "ish.v1.BatchUpdatePhotosRequest\0327.google"
      ".streetview.publish.v1.BatchUpdatePhotos"
      "Response\"!\202\323\344\223\002\033\"\026/v1/photos:batchUpdate"
      ":\001*\022u\n\013DeletePhoto\0220.google.streetview.p"
      "ublish.v1.DeletePhotoRequest\032\026.google.pr"
      "otobuf.Empty\"\034\202\323\344\223\002\026*\024/v1/photo/{photo_i"
      "d}\022\247\001\n\021BatchDeletePhotos\0226.google.street"
      "view.publish.v1.BatchDeletePhotosRequest"
      "\0327.google.streetview.publish.v1.BatchDel"
      "etePhotosResponse\"!\202\323\344\223\002\033\"\026/v1/photos:ba"
      "tchDelete:\001*B\202\001\n(com.google.geo.ugc.stre"
      "etview.publish.v1B\021StreetViewPublishZCgo"
      "ogle.golang.org/genproto/googleapis/stre"
      "etview/publish/v1;publishb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1673);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/streetview/publish/v1/streetview_publish.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fempty_2eproto::AddDescriptors();
  ::protobuf_google_2fstreetview_2fpublish_2fv1_2fresources_2eproto::AddDescriptors();
  ::protobuf_google_2fstreetview_2fpublish_2fv1_2frpcmessages_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fstreetview_2fpublish_2fv1_2fstreetview_5fpublish_2eproto
namespace google {
namespace streetview {
namespace publish {
namespace v1 {

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace publish
}  // namespace streetview
}  // namespace google

// @@protoc_insertion_point(global_scope)
