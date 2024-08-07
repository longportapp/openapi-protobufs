// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control/error.proto

#include "control/error.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace longportapp {
namespace control {
namespace v1 {

inline constexpr Error::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : msg_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        code_{::uint64_t{0u}},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Error::Error(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ErrorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ErrorDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ErrorDefaultTypeInternal() {}
  union {
    Error _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ErrorDefaultTypeInternal _Error_default_instance_;
}  // namespace v1
}  // namespace control
}  // namespace longportapp
static ::_pb::Metadata file_level_metadata_control_2ferror_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_control_2ferror_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_control_2ferror_2eproto = nullptr;
const ::uint32_t TableStruct_control_2ferror_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::longportapp::control::v1::Error, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::longportapp::control::v1::Error, _impl_.code_),
    PROTOBUF_FIELD_OFFSET(::longportapp::control::v1::Error, _impl_.msg_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::longportapp::control::v1::Error)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::longportapp::control::v1::_Error_default_instance_._instance,
};
const char descriptor_table_protodef_control_2ferror_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\023control/error.proto\022\026longportapp.contr"
    "ol.v1\"-\n\005Error\022\022\n\004code\030\001 \001(\004R\004code\022\020\n\003ms"
    "g\030\002 \001(\tR\003msgB\345\001\n\032com.longportapp.control"
    ".v1B\nErrorProtoP\001ZAgithub.com/longportap"
    "p/openapi-protobufs/gen/go/control;contr"
    "olv1\242\002\003LCX\252\002\026Longportapp.Control.V1\312\002\026Lo"
    "ngportapp\\Control\\V1\342\002\"Longportapp\\Contr"
    "ol\\V1\\GPBMetadata\352\002\030Longportapp::Control"
    "::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_control_2ferror_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_control_2ferror_2eproto = {
    false,
    false,
    332,
    descriptor_table_protodef_control_2ferror_2eproto,
    "control/error.proto",
    &descriptor_table_control_2ferror_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_control_2ferror_2eproto::offsets,
    file_level_metadata_control_2ferror_2eproto,
    file_level_enum_descriptors_control_2ferror_2eproto,
    file_level_service_descriptors_control_2ferror_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_control_2ferror_2eproto_getter() {
  return &descriptor_table_control_2ferror_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_control_2ferror_2eproto(&descriptor_table_control_2ferror_2eproto);
namespace longportapp {
namespace control {
namespace v1 {
// ===================================================================

class Error::_Internal {
 public:
};

Error::Error(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:longportapp.control.v1.Error)
}
inline PROTOBUF_NDEBUG_INLINE Error::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : msg_(arena, from.msg_),
        _cached_size_{0} {}

Error::Error(
    ::google::protobuf::Arena* arena,
    const Error& from)
    : ::google::protobuf::Message(arena) {
  Error* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.code_ = from._impl_.code_;

  // @@protoc_insertion_point(copy_constructor:longportapp.control.v1.Error)
}
inline PROTOBUF_NDEBUG_INLINE Error::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : msg_(arena),
        _cached_size_{0} {}

inline void Error::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.code_ = {};
}
Error::~Error() {
  // @@protoc_insertion_point(destructor:longportapp.control.v1.Error)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Error::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.msg_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Error::Clear() {
// @@protoc_insertion_point(message_clear_start:longportapp.control.v1.Error)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.ClearToEmpty();
  _impl_.code_ = ::uint64_t{0u};
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Error::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 40, 2> Error::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Error_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string msg = 2 [json_name = "msg"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Error, _impl_.msg_)}},
    // uint64 code = 1 [json_name = "code"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(Error, _impl_.code_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Error, _impl_.code_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint64 code = 1 [json_name = "code"];
    {PROTOBUF_FIELD_OFFSET(Error, _impl_.code_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
    // string msg = 2 [json_name = "msg"];
    {PROTOBUF_FIELD_OFFSET(Error, _impl_.msg_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\34\0\3\0\0\0\0\0"
    "longportapp.control.v1.Error"
    "msg"
  }},
};

::uint8_t* Error::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:longportapp.control.v1.Error)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint64 code = 1 [json_name = "code"];
  if (this->_internal_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_code(), target);
  }

  // string msg = 2 [json_name = "msg"];
  if (!this->_internal_msg().empty()) {
    const std::string& _s = this->_internal_msg();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "longportapp.control.v1.Error.msg");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:longportapp.control.v1.Error)
  return target;
}

::size_t Error::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:longportapp.control.v1.Error)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 2 [json_name = "msg"];
  if (!this->_internal_msg().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_msg());
  }

  // uint64 code = 1 [json_name = "code"];
  if (this->_internal_code() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Error::_class_data_ = {
    Error::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Error::GetClassData() const {
  return &_class_data_;
}

void Error::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Error*>(&to_msg);
  auto& from = static_cast<const Error&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:longportapp.control.v1.Error)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_msg().empty()) {
    _this->_internal_set_msg(from._internal_msg());
  }
  if (from._internal_code() != 0) {
    _this->_internal_set_code(from._internal_code());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Error::CopyFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:longportapp.control.v1.Error)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Error::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Error::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Error::InternalSwap(Error* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.msg_, &other->_impl_.msg_, arena);
        swap(_impl_.code_, other->_impl_.code_);
}

::google::protobuf::Metadata Error::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_control_2ferror_2eproto_getter, &descriptor_table_control_2ferror_2eproto_once,
      file_level_metadata_control_2ferror_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace control
}  // namespace longportapp
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
