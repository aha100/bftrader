// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bfcta.proto

#ifndef PROTOBUF_bfcta_2eproto__INCLUDED
#define PROTOBUF_bfcta_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "bfgateway.pb.h"
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)

namespace bftrader {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_bfcta_2eproto();
void protobuf_AssignDesc_bfcta_2eproto();
void protobuf_ShutdownFile_bfcta_2eproto();

class BfGatewayData;
class BfModelData;
class BfOrderExData;
class BfRobotData;

enum BfModelLangType {
  MODELLANG_UNKNOWN = 0,
  MODELLANG_PYTHONSCRIPT = 1,
  MODELLANG_GOLANGEXE = 2,
  MODELLANG_CPPEXE = 3,
  MODELLANG_CPPDLL = 4,
  BfModelLangType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BfModelLangType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BfModelLangType_IsValid(int value);
const BfModelLangType BfModelLangType_MIN = MODELLANG_UNKNOWN;
const BfModelLangType BfModelLangType_MAX = MODELLANG_CPPDLL;
const int BfModelLangType_ARRAYSIZE = BfModelLangType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BfModelLangType_descriptor();
inline const ::std::string& BfModelLangType_Name(BfModelLangType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BfModelLangType_descriptor(), value);
}
inline bool BfModelLangType_Parse(
    const ::std::string& name, BfModelLangType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BfModelLangType>(
    BfModelLangType_descriptor(), name, value);
}
// ===================================================================

class BfModelData : public ::google::protobuf::Message {
 public:
  BfModelData();
  virtual ~BfModelData();

  BfModelData(const BfModelData& from);

  inline BfModelData& operator=(const BfModelData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BfModelData& default_instance();

  void Swap(BfModelData* other);

  // implements Message ----------------------------------------------

  inline BfModelData* New() const { return New(NULL); }

  BfModelData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BfModelData& from);
  void MergeFrom(const BfModelData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BfModelData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string modelId = 1;
  void clear_modelid();
  static const int kModelIdFieldNumber = 1;
  const ::std::string& modelid() const;
  void set_modelid(const ::std::string& value);
  void set_modelid(const char* value);
  void set_modelid(const char* value, size_t size);
  ::std::string* mutable_modelid();
  ::std::string* release_modelid();
  void set_allocated_modelid(::std::string* modelid);

  // optional .bftrader.BfModelLangType langType = 2;
  void clear_langtype();
  static const int kLangTypeFieldNumber = 2;
  ::bftrader::BfModelLangType langtype() const;
  void set_langtype(::bftrader::BfModelLangType value);

  // optional string path = 3;
  void clear_path();
  static const int kPathFieldNumber = 3;
  const ::std::string& path() const;
  void set_path(const ::std::string& value);
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  ::std::string* mutable_path();
  ::std::string* release_path();
  void set_allocated_path(::std::string* path);

  // @@protoc_insertion_point(class_scope:bftrader.BfModelData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr modelid_;
  ::google::protobuf::internal::ArenaStringPtr path_;
  int langtype_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_bfcta_2eproto();
  friend void protobuf_AssignDesc_bfcta_2eproto();
  friend void protobuf_ShutdownFile_bfcta_2eproto();

  void InitAsDefaultInstance();
  static BfModelData* default_instance_;
};
// -------------------------------------------------------------------

class BfRobotData : public ::google::protobuf::Message {
 public:
  BfRobotData();
  virtual ~BfRobotData();

  BfRobotData(const BfRobotData& from);

  inline BfRobotData& operator=(const BfRobotData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BfRobotData& default_instance();

  void Swap(BfRobotData* other);

  // implements Message ----------------------------------------------

  inline BfRobotData* New() const { return New(NULL); }

  BfRobotData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BfRobotData& from);
  void MergeFrom(const BfRobotData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BfRobotData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string robotId = 1;
  void clear_robotid();
  static const int kRobotIdFieldNumber = 1;
  const ::std::string& robotid() const;
  void set_robotid(const ::std::string& value);
  void set_robotid(const char* value);
  void set_robotid(const char* value, size_t size);
  ::std::string* mutable_robotid();
  ::std::string* release_robotid();
  void set_allocated_robotid(::std::string* robotid);

  // optional string modelId = 2;
  void clear_modelid();
  static const int kModelIdFieldNumber = 2;
  const ::std::string& modelid() const;
  void set_modelid(const ::std::string& value);
  void set_modelid(const char* value);
  void set_modelid(const char* value, size_t size);
  ::std::string* mutable_modelid();
  ::std::string* release_modelid();
  void set_allocated_modelid(::std::string* modelid);

  // optional string gatewayId = 3;
  void clear_gatewayid();
  static const int kGatewayIdFieldNumber = 3;
  const ::std::string& gatewayid() const;
  void set_gatewayid(const ::std::string& value);
  void set_gatewayid(const char* value);
  void set_gatewayid(const char* value, size_t size);
  ::std::string* mutable_gatewayid();
  ::std::string* release_gatewayid();
  void set_allocated_gatewayid(::std::string* gatewayid);

  // optional string symbol = 4;
  void clear_symbol();
  static const int kSymbolFieldNumber = 4;
  const ::std::string& symbol() const;
  void set_symbol(const ::std::string& value);
  void set_symbol(const char* value);
  void set_symbol(const char* value, size_t size);
  ::std::string* mutable_symbol();
  ::std::string* release_symbol();
  void set_allocated_symbol(::std::string* symbol);

  // optional string exchange = 5;
  void clear_exchange();
  static const int kExchangeFieldNumber = 5;
  const ::std::string& exchange() const;
  void set_exchange(const ::std::string& value);
  void set_exchange(const char* value);
  void set_exchange(const char* value, size_t size);
  ::std::string* mutable_exchange();
  ::std::string* release_exchange();
  void set_allocated_exchange(::std::string* exchange);

  // @@protoc_insertion_point(class_scope:bftrader.BfRobotData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr robotid_;
  ::google::protobuf::internal::ArenaStringPtr modelid_;
  ::google::protobuf::internal::ArenaStringPtr gatewayid_;
  ::google::protobuf::internal::ArenaStringPtr symbol_;
  ::google::protobuf::internal::ArenaStringPtr exchange_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_bfcta_2eproto();
  friend void protobuf_AssignDesc_bfcta_2eproto();
  friend void protobuf_ShutdownFile_bfcta_2eproto();

  void InitAsDefaultInstance();
  static BfRobotData* default_instance_;
};
// -------------------------------------------------------------------

class BfGatewayData : public ::google::protobuf::Message {
 public:
  BfGatewayData();
  virtual ~BfGatewayData();

  BfGatewayData(const BfGatewayData& from);

  inline BfGatewayData& operator=(const BfGatewayData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BfGatewayData& default_instance();

  void Swap(BfGatewayData* other);

  // implements Message ----------------------------------------------

  inline BfGatewayData* New() const { return New(NULL); }

  BfGatewayData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BfGatewayData& from);
  void MergeFrom(const BfGatewayData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BfGatewayData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string gatewayId = 1;
  void clear_gatewayid();
  static const int kGatewayIdFieldNumber = 1;
  const ::std::string& gatewayid() const;
  void set_gatewayid(const ::std::string& value);
  void set_gatewayid(const char* value);
  void set_gatewayid(const char* value, size_t size);
  ::std::string* mutable_gatewayid();
  ::std::string* release_gatewayid();
  void set_allocated_gatewayid(::std::string* gatewayid);

  // optional int32 port = 2;
  void clear_port();
  static const int kPortFieldNumber = 2;
  ::google::protobuf::int32 port() const;
  void set_port(::google::protobuf::int32 value);

  // optional string ip = 3;
  void clear_ip();
  static const int kIpFieldNumber = 3;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // @@protoc_insertion_point(class_scope:bftrader.BfGatewayData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr gatewayid_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::int32 port_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_bfcta_2eproto();
  friend void protobuf_AssignDesc_bfcta_2eproto();
  friend void protobuf_ShutdownFile_bfcta_2eproto();

  void InitAsDefaultInstance();
  static BfGatewayData* default_instance_;
};
// -------------------------------------------------------------------

class BfOrderExData : public ::google::protobuf::Message {
 public:
  BfOrderExData();
  virtual ~BfOrderExData();

  BfOrderExData(const BfOrderExData& from);

  inline BfOrderExData& operator=(const BfOrderExData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BfOrderExData& default_instance();

  void Swap(BfOrderExData* other);

  // implements Message ----------------------------------------------

  inline BfOrderExData* New() const { return New(NULL); }

  BfOrderExData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BfOrderExData& from);
  void MergeFrom(const BfOrderExData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BfOrderExData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string bfOrderId = 1;
  void clear_bforderid();
  static const int kBfOrderIdFieldNumber = 1;
  const ::std::string& bforderid() const;
  void set_bforderid(const ::std::string& value);
  void set_bforderid(const char* value);
  void set_bforderid(const char* value, size_t size);
  ::std::string* mutable_bforderid();
  ::std::string* release_bforderid();
  void set_allocated_bforderid(::std::string* bforderid);

  // optional string robotId = 2;
  void clear_robotid();
  static const int kRobotIdFieldNumber = 2;
  const ::std::string& robotid() const;
  void set_robotid(const ::std::string& value);
  void set_robotid(const char* value);
  void set_robotid(const char* value, size_t size);
  ::std::string* mutable_robotid();
  ::std::string* release_robotid();
  void set_allocated_robotid(::std::string* robotid);

  // @@protoc_insertion_point(class_scope:bftrader.BfOrderExData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr bforderid_;
  ::google::protobuf::internal::ArenaStringPtr robotid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_bfcta_2eproto();
  friend void protobuf_AssignDesc_bfcta_2eproto();
  friend void protobuf_ShutdownFile_bfcta_2eproto();

  void InitAsDefaultInstance();
  static BfOrderExData* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BfModelData

// optional string modelId = 1;
inline void BfModelData::clear_modelid() {
  modelid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfModelData::modelid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfModelData.modelId)
  return modelid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfModelData::set_modelid(const ::std::string& value) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfModelData.modelId)
}
inline void BfModelData::set_modelid(const char* value) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfModelData.modelId)
}
inline void BfModelData::set_modelid(const char* value, size_t size) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfModelData.modelId)
}
inline ::std::string* BfModelData::mutable_modelid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfModelData.modelId)
  return modelid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfModelData::release_modelid() {
  
  return modelid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfModelData::set_allocated_modelid(::std::string* modelid) {
  if (modelid != NULL) {
    
  } else {
    
  }
  modelid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), modelid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfModelData.modelId)
}

// optional .bftrader.BfModelLangType langType = 2;
inline void BfModelData::clear_langtype() {
  langtype_ = 0;
}
inline ::bftrader::BfModelLangType BfModelData::langtype() const {
  // @@protoc_insertion_point(field_get:bftrader.BfModelData.langType)
  return static_cast< ::bftrader::BfModelLangType >(langtype_);
}
inline void BfModelData::set_langtype(::bftrader::BfModelLangType value) {
  
  langtype_ = value;
  // @@protoc_insertion_point(field_set:bftrader.BfModelData.langType)
}

// optional string path = 3;
inline void BfModelData::clear_path() {
  path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfModelData::path() const {
  // @@protoc_insertion_point(field_get:bftrader.BfModelData.path)
  return path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfModelData::set_path(const ::std::string& value) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfModelData.path)
}
inline void BfModelData::set_path(const char* value) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfModelData.path)
}
inline void BfModelData::set_path(const char* value, size_t size) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfModelData.path)
}
inline ::std::string* BfModelData::mutable_path() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfModelData.path)
  return path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfModelData::release_path() {
  
  return path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfModelData::set_allocated_path(::std::string* path) {
  if (path != NULL) {
    
  } else {
    
  }
  path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), path);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfModelData.path)
}

// -------------------------------------------------------------------

// BfRobotData

// optional string robotId = 1;
inline void BfRobotData::clear_robotid() {
  robotid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfRobotData::robotid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfRobotData.robotId)
  return robotid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_robotid(const ::std::string& value) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfRobotData.robotId)
}
inline void BfRobotData::set_robotid(const char* value) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfRobotData.robotId)
}
inline void BfRobotData::set_robotid(const char* value, size_t size) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfRobotData.robotId)
}
inline ::std::string* BfRobotData::mutable_robotid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfRobotData.robotId)
  return robotid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfRobotData::release_robotid() {
  
  return robotid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_allocated_robotid(::std::string* robotid) {
  if (robotid != NULL) {
    
  } else {
    
  }
  robotid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), robotid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfRobotData.robotId)
}

// optional string modelId = 2;
inline void BfRobotData::clear_modelid() {
  modelid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfRobotData::modelid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfRobotData.modelId)
  return modelid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_modelid(const ::std::string& value) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfRobotData.modelId)
}
inline void BfRobotData::set_modelid(const char* value) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfRobotData.modelId)
}
inline void BfRobotData::set_modelid(const char* value, size_t size) {
  
  modelid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfRobotData.modelId)
}
inline ::std::string* BfRobotData::mutable_modelid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfRobotData.modelId)
  return modelid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfRobotData::release_modelid() {
  
  return modelid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_allocated_modelid(::std::string* modelid) {
  if (modelid != NULL) {
    
  } else {
    
  }
  modelid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), modelid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfRobotData.modelId)
}

// optional string gatewayId = 3;
inline void BfRobotData::clear_gatewayid() {
  gatewayid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfRobotData::gatewayid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfRobotData.gatewayId)
  return gatewayid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_gatewayid(const ::std::string& value) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfRobotData.gatewayId)
}
inline void BfRobotData::set_gatewayid(const char* value) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfRobotData.gatewayId)
}
inline void BfRobotData::set_gatewayid(const char* value, size_t size) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfRobotData.gatewayId)
}
inline ::std::string* BfRobotData::mutable_gatewayid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfRobotData.gatewayId)
  return gatewayid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfRobotData::release_gatewayid() {
  
  return gatewayid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_allocated_gatewayid(::std::string* gatewayid) {
  if (gatewayid != NULL) {
    
  } else {
    
  }
  gatewayid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gatewayid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfRobotData.gatewayId)
}

// optional string symbol = 4;
inline void BfRobotData::clear_symbol() {
  symbol_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfRobotData::symbol() const {
  // @@protoc_insertion_point(field_get:bftrader.BfRobotData.symbol)
  return symbol_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_symbol(const ::std::string& value) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfRobotData.symbol)
}
inline void BfRobotData::set_symbol(const char* value) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfRobotData.symbol)
}
inline void BfRobotData::set_symbol(const char* value, size_t size) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfRobotData.symbol)
}
inline ::std::string* BfRobotData::mutable_symbol() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfRobotData.symbol)
  return symbol_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfRobotData::release_symbol() {
  
  return symbol_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_allocated_symbol(::std::string* symbol) {
  if (symbol != NULL) {
    
  } else {
    
  }
  symbol_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), symbol);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfRobotData.symbol)
}

// optional string exchange = 5;
inline void BfRobotData::clear_exchange() {
  exchange_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfRobotData::exchange() const {
  // @@protoc_insertion_point(field_get:bftrader.BfRobotData.exchange)
  return exchange_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_exchange(const ::std::string& value) {
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfRobotData.exchange)
}
inline void BfRobotData::set_exchange(const char* value) {
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfRobotData.exchange)
}
inline void BfRobotData::set_exchange(const char* value, size_t size) {
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfRobotData.exchange)
}
inline ::std::string* BfRobotData::mutable_exchange() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfRobotData.exchange)
  return exchange_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfRobotData::release_exchange() {
  
  return exchange_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfRobotData::set_allocated_exchange(::std::string* exchange) {
  if (exchange != NULL) {
    
  } else {
    
  }
  exchange_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), exchange);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfRobotData.exchange)
}

// -------------------------------------------------------------------

// BfGatewayData

// optional string gatewayId = 1;
inline void BfGatewayData::clear_gatewayid() {
  gatewayid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfGatewayData::gatewayid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfGatewayData.gatewayId)
  return gatewayid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfGatewayData::set_gatewayid(const ::std::string& value) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfGatewayData.gatewayId)
}
inline void BfGatewayData::set_gatewayid(const char* value) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfGatewayData.gatewayId)
}
inline void BfGatewayData::set_gatewayid(const char* value, size_t size) {
  
  gatewayid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfGatewayData.gatewayId)
}
inline ::std::string* BfGatewayData::mutable_gatewayid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfGatewayData.gatewayId)
  return gatewayid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfGatewayData::release_gatewayid() {
  
  return gatewayid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfGatewayData::set_allocated_gatewayid(::std::string* gatewayid) {
  if (gatewayid != NULL) {
    
  } else {
    
  }
  gatewayid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gatewayid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfGatewayData.gatewayId)
}

// optional int32 port = 2;
inline void BfGatewayData::clear_port() {
  port_ = 0;
}
inline ::google::protobuf::int32 BfGatewayData::port() const {
  // @@protoc_insertion_point(field_get:bftrader.BfGatewayData.port)
  return port_;
}
inline void BfGatewayData::set_port(::google::protobuf::int32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:bftrader.BfGatewayData.port)
}

// optional string ip = 3;
inline void BfGatewayData::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfGatewayData::ip() const {
  // @@protoc_insertion_point(field_get:bftrader.BfGatewayData.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfGatewayData::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfGatewayData.ip)
}
inline void BfGatewayData::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfGatewayData.ip)
}
inline void BfGatewayData::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfGatewayData.ip)
}
inline ::std::string* BfGatewayData::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfGatewayData.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfGatewayData::release_ip() {
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfGatewayData::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfGatewayData.ip)
}

// -------------------------------------------------------------------

// BfOrderExData

// optional string bfOrderId = 1;
inline void BfOrderExData::clear_bforderid() {
  bforderid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfOrderExData::bforderid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfOrderExData.bfOrderId)
  return bforderid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfOrderExData::set_bforderid(const ::std::string& value) {
  
  bforderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfOrderExData.bfOrderId)
}
inline void BfOrderExData::set_bforderid(const char* value) {
  
  bforderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfOrderExData.bfOrderId)
}
inline void BfOrderExData::set_bforderid(const char* value, size_t size) {
  
  bforderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfOrderExData.bfOrderId)
}
inline ::std::string* BfOrderExData::mutable_bforderid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfOrderExData.bfOrderId)
  return bforderid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfOrderExData::release_bforderid() {
  
  return bforderid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfOrderExData::set_allocated_bforderid(::std::string* bforderid) {
  if (bforderid != NULL) {
    
  } else {
    
  }
  bforderid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bforderid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfOrderExData.bfOrderId)
}

// optional string robotId = 2;
inline void BfOrderExData::clear_robotid() {
  robotid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BfOrderExData::robotid() const {
  // @@protoc_insertion_point(field_get:bftrader.BfOrderExData.robotId)
  return robotid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfOrderExData::set_robotid(const ::std::string& value) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bftrader.BfOrderExData.robotId)
}
inline void BfOrderExData::set_robotid(const char* value) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bftrader.BfOrderExData.robotId)
}
inline void BfOrderExData::set_robotid(const char* value, size_t size) {
  
  robotid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bftrader.BfOrderExData.robotId)
}
inline ::std::string* BfOrderExData::mutable_robotid() {
  
  // @@protoc_insertion_point(field_mutable:bftrader.BfOrderExData.robotId)
  return robotid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BfOrderExData::release_robotid() {
  
  return robotid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BfOrderExData::set_allocated_robotid(::std::string* robotid) {
  if (robotid != NULL) {
    
  } else {
    
  }
  robotid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), robotid);
  // @@protoc_insertion_point(field_set_allocated:bftrader.BfOrderExData.robotId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bftrader

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::bftrader::BfModelLangType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bftrader::BfModelLangType>() {
  return ::bftrader::BfModelLangType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_bfcta_2eproto__INCLUDED
