// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/range.proto

#include "google/genomics/v1/range.pb.h"

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
namespace genomics {
namespace v1 {
class RangeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Range>
      _instance;
} _Range_default_instance_;
}  // namespace v1
}  // namespace genomics
}  // namespace google
namespace protobuf_google_2fgenomics_2fv1_2frange_2eproto {
void InitDefaultsRangeImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::google::genomics::v1::_Range_default_instance_;
    new (ptr) ::google::genomics::v1::Range();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::genomics::v1::Range::InitAsDefaultInstance();
}

void InitDefaultsRange() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRangeImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::genomics::v1::Range, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::genomics::v1::Range, reference_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::genomics::v1::Range, start_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::genomics::v1::Range, end_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::genomics::v1::Range)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::genomics::v1::_Range_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/genomics/v1/range.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036google/genomics/v1/range.proto\022\022google"
      ".genomics.v1\032\034google/api/annotations.pro"
      "to\";\n\005Range\022\026\n\016reference_name\030\001 \001(\t\022\r\n\005s"
      "tart\030\002 \001(\003\022\013\n\003end\030\003 \001(\003Be\n\026com.google.ge"
      "nomics.v1B\nRangeProtoP\001Z:google.golang.o"
      "rg/genproto/googleapis/genomics/v1;genom"
      "ics\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 254);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/genomics/v1/range.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fgenomics_2fv1_2frange_2eproto
namespace google {
namespace genomics {
namespace v1 {

// ===================================================================

void Range::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Range::kReferenceNameFieldNumber;
const int Range::kStartFieldNumber;
const int Range::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Range::Range()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::InitDefaultsRange();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.genomics.v1.Range)
}
Range::Range(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::InitDefaultsRange();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.genomics.v1.Range)
}
Range::Range(const Range& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  reference_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.reference_name().size() > 0) {
    reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reference_name(),
      GetArenaNoVirtual());
  }
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&end_) -
    reinterpret_cast<char*>(&start_)) + sizeof(end_));
  // @@protoc_insertion_point(copy_constructor:google.genomics.v1.Range)
}

void Range::SharedCtor() {
  reference_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&start_)) + sizeof(end_));
  _cached_size_ = 0;
}

Range::~Range() {
  // @@protoc_insertion_point(destructor:google.genomics.v1.Range)
  SharedDtor();
}

void Range::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  reference_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Range::ArenaDtor(void* object) {
  Range* _this = reinterpret_cast< Range* >(object);
  (void)_this;
}
void Range::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Range::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Range::descriptor() {
  ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Range& Range::default_instance() {
  ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::InitDefaultsRange();
  return *internal_default_instance();
}

Range* Range::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Range>(arena);
}

void Range::Clear() {
// @@protoc_insertion_point(message_clear_start:google.genomics.v1.Range)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  reference_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&start_)) + sizeof(end_));
  _internal_metadata_.Clear();
}

bool Range::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.genomics.v1.Range)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string reference_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reference_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->reference_name().data(), static_cast<int>(this->reference_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.genomics.v1.Range.reference_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 start = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 end = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &end_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.genomics.v1.Range)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.genomics.v1.Range)
  return false;
#undef DO_
}

void Range::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.genomics.v1.Range)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_name().data(), static_cast<int>(this->reference_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.Range.reference_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->reference_name(), output);
  }

  // int64 start = 2;
  if (this->start() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->start(), output);
  }

  // int64 end = 3;
  if (this->end() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->end(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.genomics.v1.Range)
}

::google::protobuf::uint8* Range::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.genomics.v1.Range)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_name().data(), static_cast<int>(this->reference_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.Range.reference_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->reference_name(), target);
  }

  // int64 start = 2;
  if (this->start() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->start(), target);
  }

  // int64 end = 3;
  if (this->end() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->end(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.genomics.v1.Range)
  return target;
}

size_t Range::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.genomics.v1.Range)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->reference_name());
  }

  // int64 start = 2;
  if (this->start() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->start());
  }

  // int64 end = 3;
  if (this->end() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->end());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Range::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.genomics.v1.Range)
  GOOGLE_DCHECK_NE(&from, this);
  const Range* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Range>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.genomics.v1.Range)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.genomics.v1.Range)
    MergeFrom(*source);
  }
}

void Range::MergeFrom(const Range& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.genomics.v1.Range)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.reference_name().size() > 0) {
    set_reference_name(from.reference_name());
  }
  if (from.start() != 0) {
    set_start(from.start());
  }
  if (from.end() != 0) {
    set_end(from.end());
  }
}

void Range::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.genomics.v1.Range)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Range::CopyFrom(const Range& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.genomics.v1.Range)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Range::IsInitialized() const {
  return true;
}

void Range::Swap(Range* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Range* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Range::UnsafeArenaSwap(Range* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Range::InternalSwap(Range* other) {
  using std::swap;
  reference_name_.Swap(&other->reference_name_);
  swap(start_, other->start_);
  swap(end_, other->end_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Range::GetMetadata() const {
  protobuf_google_2fgenomics_2fv1_2frange_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fgenomics_2fv1_2frange_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace genomics
}  // namespace google

// @@protoc_insertion_point(global_scope)
