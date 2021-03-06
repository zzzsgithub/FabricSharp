// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_INCLUDED_config_2eproto
#define PROTOBUF_INCLUDED_config_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_config_2eproto 

namespace protobuf_config_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_config_2eproto
namespace ustore {
class Config;
class ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace ustore
namespace google {
namespace protobuf {
template<> ::ustore::Config* Arena::CreateMaybeMessage<::ustore::Config>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ustore {

// ===================================================================

class Config : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ustore.Config) */ {
 public:
  Config();
  virtual ~Config();

  Config(const Config& from);

  inline Config& operator=(const Config& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Config(Config&& from) noexcept
    : Config() {
    *this = ::std::move(from);
  }

  inline Config& operator=(Config&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Config* internal_default_instance() {
    return reinterpret_cast<const Config*>(
               &_Config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Config* other);
  friend void swap(Config& a, Config& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Config* New() const final {
    return CreateMaybeMessage<Config>(NULL);
  }

  Config* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Config>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Config& from);
  void MergeFrom(const Config& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Config* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string data_dir = 1 [default = "ustore_data"];
  bool has_data_dir() const;
  void clear_data_dir();
  static const int kDataDirFieldNumber = 1;
  const ::std::string& data_dir() const;
  void set_data_dir(const ::std::string& value);
  #if LANG_CXX11
  void set_data_dir(::std::string&& value);
  #endif
  void set_data_dir(const char* value);
  void set_data_dir(const char* value, size_t size);
  ::std::string* mutable_data_dir();
  ::std::string* release_data_dir();
  void set_allocated_data_dir(::std::string* data_dir);

  // optional string data_file_pattern = 2 [default = "ustore"];
  bool has_data_file_pattern() const;
  void clear_data_file_pattern();
  static const int kDataFilePatternFieldNumber = 2;
  const ::std::string& data_file_pattern() const;
  void set_data_file_pattern(const ::std::string& value);
  #if LANG_CXX11
  void set_data_file_pattern(::std::string&& value);
  #endif
  void set_data_file_pattern(const char* value);
  void set_data_file_pattern(const char* value, size_t size);
  ::std::string* mutable_data_file_pattern();
  ::std::string* release_data_file_pattern();
  void set_allocated_data_file_pattern(::std::string* data_file_pattern);

  // optional string access_log_dir = 3 [default = ""];
  bool has_access_log_dir() const;
  void clear_access_log_dir();
  static const int kAccessLogDirFieldNumber = 3;
  const ::std::string& access_log_dir() const;
  void set_access_log_dir(const ::std::string& value);
  #if LANG_CXX11
  void set_access_log_dir(::std::string&& value);
  #endif
  void set_access_log_dir(const char* value);
  void set_access_log_dir(const char* value, size_t size);
  ::std::string* mutable_access_log_dir();
  ::std::string* release_access_log_dir();
  void set_allocated_access_log_dir(::std::string* access_log_dir);

  // optional string worker_file = 10 [default = "conf/workers.lst"];
  bool has_worker_file() const;
  void clear_worker_file();
  static const int kWorkerFileFieldNumber = 10;
  const ::std::string& worker_file() const;
  void set_worker_file(const ::std::string& value);
  #if LANG_CXX11
  void set_worker_file(::std::string&& value);
  #endif
  void set_worker_file(const char* value);
  void set_worker_file(const char* value, size_t size);
  ::std::string* mutable_worker_file();
  ::std::string* release_worker_file();
  void set_allocated_worker_file(::std::string* worker_file);

  // optional bool enable_dist_store = 5 [default = false];
  bool has_enable_dist_store() const;
  void clear_enable_dist_store();
  static const int kEnableDistStoreFieldNumber = 5;
  bool enable_dist_store() const;
  void set_enable_dist_store(bool value);

  // optional int32 max_segments = 4 [default = 64];
  bool has_max_segments() const;
  void clear_max_segments();
  static const int kMaxSegmentsFieldNumber = 4;
  ::google::protobuf::int32 max_segments() const;
  void set_max_segments(::google::protobuf::int32 value);

  // optional bool get_chunk_bypass_worker = 6 [default = true];
  bool has_get_chunk_bypass_worker() const;
  void clear_get_chunk_bypass_worker();
  static const int kGetChunkBypassWorkerFieldNumber = 6;
  bool get_chunk_bypass_worker() const;
  void set_get_chunk_bypass_worker(bool value);

  // optional int32 recv_threads = 21 [default = 2];
  bool has_recv_threads() const;
  void clear_recv_threads();
  static const int kRecvThreadsFieldNumber = 21;
  ::google::protobuf::int32 recv_threads() const;
  void set_recv_threads(::google::protobuf::int32 value);

  // optional int32 http_port = 50 [default = 60000];
  bool has_http_port() const;
  void clear_http_port();
  static const int kHttpPortFieldNumber = 50;
  ::google::protobuf::int32 http_port() const;
  void set_http_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ustore.Config)
 private:
  void set_has_data_dir();
  void clear_has_data_dir();
  void set_has_data_file_pattern();
  void clear_has_data_file_pattern();
  void set_has_access_log_dir();
  void clear_has_access_log_dir();
  void set_has_max_segments();
  void clear_has_max_segments();
  void set_has_enable_dist_store();
  void clear_has_enable_dist_store();
  void set_has_get_chunk_bypass_worker();
  void clear_has_get_chunk_bypass_worker();
  void set_has_worker_file();
  void clear_has_worker_file();
  void set_has_recv_threads();
  void clear_has_recv_threads();
  void set_has_http_port();
  void clear_has_http_port();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  public:
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _i_give_permission_to_break_this_code_default_data_dir_;
  private:
  ::google::protobuf::internal::ArenaStringPtr data_dir_;
  public:
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _i_give_permission_to_break_this_code_default_data_file_pattern_;
  private:
  ::google::protobuf::internal::ArenaStringPtr data_file_pattern_;
  ::google::protobuf::internal::ArenaStringPtr access_log_dir_;
  public:
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _i_give_permission_to_break_this_code_default_worker_file_;
  private:
  ::google::protobuf::internal::ArenaStringPtr worker_file_;
  bool enable_dist_store_;
  ::google::protobuf::int32 max_segments_;
  bool get_chunk_bypass_worker_;
  ::google::protobuf::int32 recv_threads_;
  ::google::protobuf::int32 http_port_;
  friend struct ::protobuf_config_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Config

// optional string data_dir = 1 [default = "ustore_data"];
inline bool Config::has_data_dir() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Config::set_has_data_dir() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Config::clear_has_data_dir() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Config::clear_data_dir() {
  data_dir_.ClearToDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get());
  clear_has_data_dir();
}
inline const ::std::string& Config::data_dir() const {
  // @@protoc_insertion_point(field_get:ustore.Config.data_dir)
  return data_dir_.GetNoArena();
}
inline void Config::set_data_dir(const ::std::string& value) {
  set_has_data_dir();
  data_dir_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get(), value);
  // @@protoc_insertion_point(field_set:ustore.Config.data_dir)
}
#if LANG_CXX11
inline void Config::set_data_dir(::std::string&& value) {
  set_has_data_dir();
  data_dir_.SetNoArena(
    &::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ustore.Config.data_dir)
}
#endif
inline void Config::set_data_dir(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data_dir();
  data_dir_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ustore.Config.data_dir)
}
inline void Config::set_data_dir(const char* value, size_t size) {
  set_has_data_dir();
  data_dir_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ustore.Config.data_dir)
}
inline ::std::string* Config::mutable_data_dir() {
  set_has_data_dir();
  // @@protoc_insertion_point(field_mutable:ustore.Config.data_dir)
  return data_dir_.MutableNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get());
}
inline ::std::string* Config::release_data_dir() {
  // @@protoc_insertion_point(field_release:ustore.Config.data_dir)
  if (!has_data_dir()) {
    return NULL;
  }
  clear_has_data_dir();
  return data_dir_.ReleaseNonDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get());
}
inline void Config::set_allocated_data_dir(::std::string* data_dir) {
  if (data_dir != NULL) {
    set_has_data_dir();
  } else {
    clear_has_data_dir();
  }
  data_dir_.SetAllocatedNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_dir_.get(), data_dir);
  // @@protoc_insertion_point(field_set_allocated:ustore.Config.data_dir)
}

// optional string data_file_pattern = 2 [default = "ustore"];
inline bool Config::has_data_file_pattern() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Config::set_has_data_file_pattern() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Config::clear_has_data_file_pattern() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Config::clear_data_file_pattern() {
  data_file_pattern_.ClearToDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get());
  clear_has_data_file_pattern();
}
inline const ::std::string& Config::data_file_pattern() const {
  // @@protoc_insertion_point(field_get:ustore.Config.data_file_pattern)
  return data_file_pattern_.GetNoArena();
}
inline void Config::set_data_file_pattern(const ::std::string& value) {
  set_has_data_file_pattern();
  data_file_pattern_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get(), value);
  // @@protoc_insertion_point(field_set:ustore.Config.data_file_pattern)
}
#if LANG_CXX11
inline void Config::set_data_file_pattern(::std::string&& value) {
  set_has_data_file_pattern();
  data_file_pattern_.SetNoArena(
    &::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ustore.Config.data_file_pattern)
}
#endif
inline void Config::set_data_file_pattern(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data_file_pattern();
  data_file_pattern_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ustore.Config.data_file_pattern)
}
inline void Config::set_data_file_pattern(const char* value, size_t size) {
  set_has_data_file_pattern();
  data_file_pattern_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ustore.Config.data_file_pattern)
}
inline ::std::string* Config::mutable_data_file_pattern() {
  set_has_data_file_pattern();
  // @@protoc_insertion_point(field_mutable:ustore.Config.data_file_pattern)
  return data_file_pattern_.MutableNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get());
}
inline ::std::string* Config::release_data_file_pattern() {
  // @@protoc_insertion_point(field_release:ustore.Config.data_file_pattern)
  if (!has_data_file_pattern()) {
    return NULL;
  }
  clear_has_data_file_pattern();
  return data_file_pattern_.ReleaseNonDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get());
}
inline void Config::set_allocated_data_file_pattern(::std::string* data_file_pattern) {
  if (data_file_pattern != NULL) {
    set_has_data_file_pattern();
  } else {
    clear_has_data_file_pattern();
  }
  data_file_pattern_.SetAllocatedNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_data_file_pattern_.get(), data_file_pattern);
  // @@protoc_insertion_point(field_set_allocated:ustore.Config.data_file_pattern)
}

// optional string access_log_dir = 3 [default = ""];
inline bool Config::has_access_log_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Config::set_has_access_log_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Config::clear_has_access_log_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Config::clear_access_log_dir() {
  access_log_dir_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_access_log_dir();
}
inline const ::std::string& Config::access_log_dir() const {
  // @@protoc_insertion_point(field_get:ustore.Config.access_log_dir)
  return access_log_dir_.GetNoArena();
}
inline void Config::set_access_log_dir(const ::std::string& value) {
  set_has_access_log_dir();
  access_log_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ustore.Config.access_log_dir)
}
#if LANG_CXX11
inline void Config::set_access_log_dir(::std::string&& value) {
  set_has_access_log_dir();
  access_log_dir_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ustore.Config.access_log_dir)
}
#endif
inline void Config::set_access_log_dir(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_access_log_dir();
  access_log_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ustore.Config.access_log_dir)
}
inline void Config::set_access_log_dir(const char* value, size_t size) {
  set_has_access_log_dir();
  access_log_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ustore.Config.access_log_dir)
}
inline ::std::string* Config::mutable_access_log_dir() {
  set_has_access_log_dir();
  // @@protoc_insertion_point(field_mutable:ustore.Config.access_log_dir)
  return access_log_dir_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Config::release_access_log_dir() {
  // @@protoc_insertion_point(field_release:ustore.Config.access_log_dir)
  if (!has_access_log_dir()) {
    return NULL;
  }
  clear_has_access_log_dir();
  return access_log_dir_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Config::set_allocated_access_log_dir(::std::string* access_log_dir) {
  if (access_log_dir != NULL) {
    set_has_access_log_dir();
  } else {
    clear_has_access_log_dir();
  }
  access_log_dir_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), access_log_dir);
  // @@protoc_insertion_point(field_set_allocated:ustore.Config.access_log_dir)
}

// optional int32 max_segments = 4 [default = 64];
inline bool Config::has_max_segments() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Config::set_has_max_segments() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Config::clear_has_max_segments() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Config::clear_max_segments() {
  max_segments_ = 64;
  clear_has_max_segments();
}
inline ::google::protobuf::int32 Config::max_segments() const {
  // @@protoc_insertion_point(field_get:ustore.Config.max_segments)
  return max_segments_;
}
inline void Config::set_max_segments(::google::protobuf::int32 value) {
  set_has_max_segments();
  max_segments_ = value;
  // @@protoc_insertion_point(field_set:ustore.Config.max_segments)
}

// optional bool enable_dist_store = 5 [default = false];
inline bool Config::has_enable_dist_store() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Config::set_has_enable_dist_store() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Config::clear_has_enable_dist_store() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Config::clear_enable_dist_store() {
  enable_dist_store_ = false;
  clear_has_enable_dist_store();
}
inline bool Config::enable_dist_store() const {
  // @@protoc_insertion_point(field_get:ustore.Config.enable_dist_store)
  return enable_dist_store_;
}
inline void Config::set_enable_dist_store(bool value) {
  set_has_enable_dist_store();
  enable_dist_store_ = value;
  // @@protoc_insertion_point(field_set:ustore.Config.enable_dist_store)
}

// optional bool get_chunk_bypass_worker = 6 [default = true];
inline bool Config::has_get_chunk_bypass_worker() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Config::set_has_get_chunk_bypass_worker() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Config::clear_has_get_chunk_bypass_worker() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Config::clear_get_chunk_bypass_worker() {
  get_chunk_bypass_worker_ = true;
  clear_has_get_chunk_bypass_worker();
}
inline bool Config::get_chunk_bypass_worker() const {
  // @@protoc_insertion_point(field_get:ustore.Config.get_chunk_bypass_worker)
  return get_chunk_bypass_worker_;
}
inline void Config::set_get_chunk_bypass_worker(bool value) {
  set_has_get_chunk_bypass_worker();
  get_chunk_bypass_worker_ = value;
  // @@protoc_insertion_point(field_set:ustore.Config.get_chunk_bypass_worker)
}

// optional string worker_file = 10 [default = "conf/workers.lst"];
inline bool Config::has_worker_file() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Config::set_has_worker_file() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Config::clear_has_worker_file() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Config::clear_worker_file() {
  worker_file_.ClearToDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get());
  clear_has_worker_file();
}
inline const ::std::string& Config::worker_file() const {
  // @@protoc_insertion_point(field_get:ustore.Config.worker_file)
  return worker_file_.GetNoArena();
}
inline void Config::set_worker_file(const ::std::string& value) {
  set_has_worker_file();
  worker_file_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get(), value);
  // @@protoc_insertion_point(field_set:ustore.Config.worker_file)
}
#if LANG_CXX11
inline void Config::set_worker_file(::std::string&& value) {
  set_has_worker_file();
  worker_file_.SetNoArena(
    &::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ustore.Config.worker_file)
}
#endif
inline void Config::set_worker_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_worker_file();
  worker_file_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ustore.Config.worker_file)
}
inline void Config::set_worker_file(const char* value, size_t size) {
  set_has_worker_file();
  worker_file_.SetNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ustore.Config.worker_file)
}
inline ::std::string* Config::mutable_worker_file() {
  set_has_worker_file();
  // @@protoc_insertion_point(field_mutable:ustore.Config.worker_file)
  return worker_file_.MutableNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get());
}
inline ::std::string* Config::release_worker_file() {
  // @@protoc_insertion_point(field_release:ustore.Config.worker_file)
  if (!has_worker_file()) {
    return NULL;
  }
  clear_has_worker_file();
  return worker_file_.ReleaseNonDefaultNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get());
}
inline void Config::set_allocated_worker_file(::std::string* worker_file) {
  if (worker_file != NULL) {
    set_has_worker_file();
  } else {
    clear_has_worker_file();
  }
  worker_file_.SetAllocatedNoArena(&::ustore::Config::_i_give_permission_to_break_this_code_default_worker_file_.get(), worker_file);
  // @@protoc_insertion_point(field_set_allocated:ustore.Config.worker_file)
}

// optional int32 recv_threads = 21 [default = 2];
inline bool Config::has_recv_threads() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Config::set_has_recv_threads() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Config::clear_has_recv_threads() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Config::clear_recv_threads() {
  recv_threads_ = 2;
  clear_has_recv_threads();
}
inline ::google::protobuf::int32 Config::recv_threads() const {
  // @@protoc_insertion_point(field_get:ustore.Config.recv_threads)
  return recv_threads_;
}
inline void Config::set_recv_threads(::google::protobuf::int32 value) {
  set_has_recv_threads();
  recv_threads_ = value;
  // @@protoc_insertion_point(field_set:ustore.Config.recv_threads)
}

// optional int32 http_port = 50 [default = 60000];
inline bool Config::has_http_port() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Config::set_has_http_port() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Config::clear_has_http_port() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Config::clear_http_port() {
  http_port_ = 60000;
  clear_has_http_port();
}
inline ::google::protobuf::int32 Config::http_port() const {
  // @@protoc_insertion_point(field_get:ustore.Config.http_port)
  return http_port_;
}
inline void Config::set_http_port(::google::protobuf::int32 value) {
  set_has_http_port();
  http_port_ = value;
  // @@protoc_insertion_point(field_set:ustore.Config.http_port)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace ustore

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_config_2eproto
