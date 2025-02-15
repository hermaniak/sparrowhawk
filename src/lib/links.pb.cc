// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: links.proto

#include "links.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace speech {
namespace sparrowhawk {
class LinksDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Links> _instance;
} _Links_default_instance_;
}  // namespace sparrowhawk
}  // namespace speech
static void InitDefaultsscc_info_Links_links_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::speech::sparrowhawk::_Links_default_instance_;
    new (ptr) ::speech::sparrowhawk::Links();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::speech::sparrowhawk::Links::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Links_links_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Links_links_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_links_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_links_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_links_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_links_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, own_index_),
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, parent_),
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, first_child_),
  PROTOBUF_FIELD_OFFSET(::speech::sparrowhawk::Links, last_child_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::speech::sparrowhawk::Links)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::speech::sparrowhawk::_Links_default_instance_),
};

const char descriptor_table_protodef_links_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013links.proto\022\022speech.sparrowhawk\"S\n\005Lin"
  "ks\022\021\n\town_index\030\001 \001(\005\022\016\n\006parent\030\002 \001(\005\022\023\n"
  "\013first_child\030\003 \001(\005\022\022\n\nlast_child\030\004 \001(\005"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_links_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_links_2eproto_sccs[1] = {
  &scc_info_Links_links_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_links_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_links_2eproto = {
  false, false, descriptor_table_protodef_links_2eproto, "links.proto", 118,
  &descriptor_table_links_2eproto_once, descriptor_table_links_2eproto_sccs, descriptor_table_links_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_links_2eproto::offsets,
  file_level_metadata_links_2eproto, 1, file_level_enum_descriptors_links_2eproto, file_level_service_descriptors_links_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_links_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_links_2eproto)), true);
namespace speech {
namespace sparrowhawk {

// ===================================================================

void Links::InitAsDefaultInstance() {
}
class Links::_Internal {
 public:
  using HasBits = decltype(std::declval<Links>()._has_bits_);
  static void set_has_own_index(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_parent(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_first_child(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_last_child(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Links::Links(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:speech.sparrowhawk.Links)
}
Links::Links(const Links& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&own_index_, &from.own_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&last_child_) -
    reinterpret_cast<char*>(&own_index_)) + sizeof(last_child_));
  // @@protoc_insertion_point(copy_constructor:speech.sparrowhawk.Links)
}

void Links::SharedCtor() {
  ::memset(&own_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&last_child_) -
      reinterpret_cast<char*>(&own_index_)) + sizeof(last_child_));
}

Links::~Links() {
  // @@protoc_insertion_point(destructor:speech.sparrowhawk.Links)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Links::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Links::ArenaDtor(void* object) {
  Links* _this = reinterpret_cast< Links* >(object);
  (void)_this;
}
void Links::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Links::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Links& Links::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Links_links_2eproto.base);
  return *internal_default_instance();
}


void Links::Clear() {
// @@protoc_insertion_point(message_clear_start:speech.sparrowhawk.Links)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&own_index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&last_child_) -
        reinterpret_cast<char*>(&own_index_)) + sizeof(last_child_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Links::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 own_index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_own_index(&has_bits);
          own_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 parent = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_parent(&has_bits);
          parent_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 first_child = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_first_child(&has_bits);
          first_child_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 last_child = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_last_child(&has_bits);
          last_child_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Links::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:speech.sparrowhawk.Links)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 own_index = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_own_index(), target);
  }

  // optional int32 parent = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_parent(), target);
  }

  // optional int32 first_child = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_first_child(), target);
  }

  // optional int32 last_child = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_last_child(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:speech.sparrowhawk.Links)
  return target;
}

size_t Links::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:speech.sparrowhawk.Links)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional int32 own_index = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_own_index());
    }

    // optional int32 parent = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_parent());
    }

    // optional int32 first_child = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_first_child());
    }

    // optional int32 last_child = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_last_child());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Links::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:speech.sparrowhawk.Links)
  GOOGLE_DCHECK_NE(&from, this);
  const Links* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Links>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:speech.sparrowhawk.Links)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:speech.sparrowhawk.Links)
    MergeFrom(*source);
  }
}

void Links::MergeFrom(const Links& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:speech.sparrowhawk.Links)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      own_index_ = from.own_index_;
    }
    if (cached_has_bits & 0x00000002u) {
      parent_ = from.parent_;
    }
    if (cached_has_bits & 0x00000004u) {
      first_child_ = from.first_child_;
    }
    if (cached_has_bits & 0x00000008u) {
      last_child_ = from.last_child_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Links::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:speech.sparrowhawk.Links)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Links::CopyFrom(const Links& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:speech.sparrowhawk.Links)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Links::IsInitialized() const {
  return true;
}

void Links::InternalSwap(Links* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Links, last_child_)
      + sizeof(Links::last_child_)
      - PROTOBUF_FIELD_OFFSET(Links, own_index_)>(
          reinterpret_cast<char*>(&own_index_),
          reinterpret_cast<char*>(&other->own_index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Links::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sparrowhawk
}  // namespace speech
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::speech::sparrowhawk::Links* Arena::CreateMaybeMessage< ::speech::sparrowhawk::Links >(Arena* arena) {
  return Arena::CreateMessageInternal< ::speech::sparrowhawk::Links >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
