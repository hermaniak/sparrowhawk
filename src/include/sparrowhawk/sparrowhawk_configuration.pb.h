// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sparrowhawk_configuration.proto

#ifndef PROTOBUF_sparrowhawk_5fconfiguration_2eproto__INCLUDED
#define PROTOBUF_sparrowhawk_5fconfiguration_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace speech {
namespace sparrowhawk {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sparrowhawk_5fconfiguration_2eproto();
void protobuf_AssignDesc_sparrowhawk_5fconfiguration_2eproto();
void protobuf_ShutdownFile_sparrowhawk_5fconfiguration_2eproto();

class SparrowhawkConfiguration;

// ===================================================================

class SparrowhawkConfiguration : public ::google::protobuf::Message {
 public:
  SparrowhawkConfiguration();
  virtual ~SparrowhawkConfiguration();

  SparrowhawkConfiguration(const SparrowhawkConfiguration& from);

  inline SparrowhawkConfiguration& operator=(const SparrowhawkConfiguration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SparrowhawkConfiguration& default_instance();

  void Swap(SparrowhawkConfiguration* other);

  // implements Message ----------------------------------------------

  SparrowhawkConfiguration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparrowhawkConfiguration& from);
  void MergeFrom(const SparrowhawkConfiguration& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string tokenizer_grammar = 1;
  inline bool has_tokenizer_grammar() const;
  inline void clear_tokenizer_grammar();
  static const int kTokenizerGrammarFieldNumber = 1;
  inline const ::std::string& tokenizer_grammar() const;
  inline void set_tokenizer_grammar(const ::std::string& value);
  inline void set_tokenizer_grammar(const char* value);
  inline void set_tokenizer_grammar(const char* value, size_t size);
  inline ::std::string* mutable_tokenizer_grammar();
  inline ::std::string* release_tokenizer_grammar();
  inline void set_allocated_tokenizer_grammar(::std::string* tokenizer_grammar);

  // optional string verbalizer_grammar = 2;
  inline bool has_verbalizer_grammar() const;
  inline void clear_verbalizer_grammar();
  static const int kVerbalizerGrammarFieldNumber = 2;
  inline const ::std::string& verbalizer_grammar() const;
  inline void set_verbalizer_grammar(const ::std::string& value);
  inline void set_verbalizer_grammar(const char* value);
  inline void set_verbalizer_grammar(const char* value, size_t size);
  inline ::std::string* mutable_verbalizer_grammar();
  inline ::std::string* release_verbalizer_grammar();
  inline void set_allocated_verbalizer_grammar(::std::string* verbalizer_grammar);

  // optional string sentence_boundary_regexp = 3;
  inline bool has_sentence_boundary_regexp() const;
  inline void clear_sentence_boundary_regexp();
  static const int kSentenceBoundaryRegexpFieldNumber = 3;
  inline const ::std::string& sentence_boundary_regexp() const;
  inline void set_sentence_boundary_regexp(const ::std::string& value);
  inline void set_sentence_boundary_regexp(const char* value);
  inline void set_sentence_boundary_regexp(const char* value, size_t size);
  inline ::std::string* mutable_sentence_boundary_regexp();
  inline ::std::string* release_sentence_boundary_regexp();
  inline void set_allocated_sentence_boundary_regexp(::std::string* sentence_boundary_regexp);

  // optional string sentence_boundary_exceptions_file = 4;
  inline bool has_sentence_boundary_exceptions_file() const;
  inline void clear_sentence_boundary_exceptions_file();
  static const int kSentenceBoundaryExceptionsFileFieldNumber = 4;
  inline const ::std::string& sentence_boundary_exceptions_file() const;
  inline void set_sentence_boundary_exceptions_file(const ::std::string& value);
  inline void set_sentence_boundary_exceptions_file(const char* value);
  inline void set_sentence_boundary_exceptions_file(const char* value, size_t size);
  inline ::std::string* mutable_sentence_boundary_exceptions_file();
  inline ::std::string* release_sentence_boundary_exceptions_file();
  inline void set_allocated_sentence_boundary_exceptions_file(::std::string* sentence_boundary_exceptions_file);

  // @@protoc_insertion_point(class_scope:speech.sparrowhawk.SparrowhawkConfiguration)
 private:
  inline void set_has_tokenizer_grammar();
  inline void clear_has_tokenizer_grammar();
  inline void set_has_verbalizer_grammar();
  inline void clear_has_verbalizer_grammar();
  inline void set_has_sentence_boundary_regexp();
  inline void clear_has_sentence_boundary_regexp();
  inline void set_has_sentence_boundary_exceptions_file();
  inline void clear_has_sentence_boundary_exceptions_file();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* tokenizer_grammar_;
  ::std::string* verbalizer_grammar_;
  ::std::string* sentence_boundary_regexp_;
  ::std::string* sentence_boundary_exceptions_file_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_sparrowhawk_5fconfiguration_2eproto();
  friend void protobuf_AssignDesc_sparrowhawk_5fconfiguration_2eproto();
  friend void protobuf_ShutdownFile_sparrowhawk_5fconfiguration_2eproto();

  void InitAsDefaultInstance();
  static SparrowhawkConfiguration* default_instance_;
};
// ===================================================================


// ===================================================================

// SparrowhawkConfiguration

// optional string tokenizer_grammar = 1;
inline bool SparrowhawkConfiguration::has_tokenizer_grammar() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparrowhawkConfiguration::set_has_tokenizer_grammar() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparrowhawkConfiguration::clear_has_tokenizer_grammar() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparrowhawkConfiguration::clear_tokenizer_grammar() {
  if (tokenizer_grammar_ != &::google::protobuf::internal::kEmptyString) {
    tokenizer_grammar_->clear();
  }
  clear_has_tokenizer_grammar();
}
inline const ::std::string& SparrowhawkConfiguration::tokenizer_grammar() const {
  return *tokenizer_grammar_;
}
inline void SparrowhawkConfiguration::set_tokenizer_grammar(const ::std::string& value) {
  set_has_tokenizer_grammar();
  if (tokenizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    tokenizer_grammar_ = new ::std::string;
  }
  tokenizer_grammar_->assign(value);
}
inline void SparrowhawkConfiguration::set_tokenizer_grammar(const char* value) {
  set_has_tokenizer_grammar();
  if (tokenizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    tokenizer_grammar_ = new ::std::string;
  }
  tokenizer_grammar_->assign(value);
}
inline void SparrowhawkConfiguration::set_tokenizer_grammar(const char* value, size_t size) {
  set_has_tokenizer_grammar();
  if (tokenizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    tokenizer_grammar_ = new ::std::string;
  }
  tokenizer_grammar_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SparrowhawkConfiguration::mutable_tokenizer_grammar() {
  set_has_tokenizer_grammar();
  if (tokenizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    tokenizer_grammar_ = new ::std::string;
  }
  return tokenizer_grammar_;
}
inline ::std::string* SparrowhawkConfiguration::release_tokenizer_grammar() {
  clear_has_tokenizer_grammar();
  if (tokenizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tokenizer_grammar_;
    tokenizer_grammar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SparrowhawkConfiguration::set_allocated_tokenizer_grammar(::std::string* tokenizer_grammar) {
  if (tokenizer_grammar_ != &::google::protobuf::internal::kEmptyString) {
    delete tokenizer_grammar_;
  }
  if (tokenizer_grammar) {
    set_has_tokenizer_grammar();
    tokenizer_grammar_ = tokenizer_grammar;
  } else {
    clear_has_tokenizer_grammar();
    tokenizer_grammar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string verbalizer_grammar = 2;
inline bool SparrowhawkConfiguration::has_verbalizer_grammar() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparrowhawkConfiguration::set_has_verbalizer_grammar() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparrowhawkConfiguration::clear_has_verbalizer_grammar() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparrowhawkConfiguration::clear_verbalizer_grammar() {
  if (verbalizer_grammar_ != &::google::protobuf::internal::kEmptyString) {
    verbalizer_grammar_->clear();
  }
  clear_has_verbalizer_grammar();
}
inline const ::std::string& SparrowhawkConfiguration::verbalizer_grammar() const {
  return *verbalizer_grammar_;
}
inline void SparrowhawkConfiguration::set_verbalizer_grammar(const ::std::string& value) {
  set_has_verbalizer_grammar();
  if (verbalizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    verbalizer_grammar_ = new ::std::string;
  }
  verbalizer_grammar_->assign(value);
}
inline void SparrowhawkConfiguration::set_verbalizer_grammar(const char* value) {
  set_has_verbalizer_grammar();
  if (verbalizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    verbalizer_grammar_ = new ::std::string;
  }
  verbalizer_grammar_->assign(value);
}
inline void SparrowhawkConfiguration::set_verbalizer_grammar(const char* value, size_t size) {
  set_has_verbalizer_grammar();
  if (verbalizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    verbalizer_grammar_ = new ::std::string;
  }
  verbalizer_grammar_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SparrowhawkConfiguration::mutable_verbalizer_grammar() {
  set_has_verbalizer_grammar();
  if (verbalizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    verbalizer_grammar_ = new ::std::string;
  }
  return verbalizer_grammar_;
}
inline ::std::string* SparrowhawkConfiguration::release_verbalizer_grammar() {
  clear_has_verbalizer_grammar();
  if (verbalizer_grammar_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = verbalizer_grammar_;
    verbalizer_grammar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SparrowhawkConfiguration::set_allocated_verbalizer_grammar(::std::string* verbalizer_grammar) {
  if (verbalizer_grammar_ != &::google::protobuf::internal::kEmptyString) {
    delete verbalizer_grammar_;
  }
  if (verbalizer_grammar) {
    set_has_verbalizer_grammar();
    verbalizer_grammar_ = verbalizer_grammar;
  } else {
    clear_has_verbalizer_grammar();
    verbalizer_grammar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string sentence_boundary_regexp = 3;
inline bool SparrowhawkConfiguration::has_sentence_boundary_regexp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SparrowhawkConfiguration::set_has_sentence_boundary_regexp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SparrowhawkConfiguration::clear_has_sentence_boundary_regexp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SparrowhawkConfiguration::clear_sentence_boundary_regexp() {
  if (sentence_boundary_regexp_ != &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_regexp_->clear();
  }
  clear_has_sentence_boundary_regexp();
}
inline const ::std::string& SparrowhawkConfiguration::sentence_boundary_regexp() const {
  return *sentence_boundary_regexp_;
}
inline void SparrowhawkConfiguration::set_sentence_boundary_regexp(const ::std::string& value) {
  set_has_sentence_boundary_regexp();
  if (sentence_boundary_regexp_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_regexp_ = new ::std::string;
  }
  sentence_boundary_regexp_->assign(value);
}
inline void SparrowhawkConfiguration::set_sentence_boundary_regexp(const char* value) {
  set_has_sentence_boundary_regexp();
  if (sentence_boundary_regexp_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_regexp_ = new ::std::string;
  }
  sentence_boundary_regexp_->assign(value);
}
inline void SparrowhawkConfiguration::set_sentence_boundary_regexp(const char* value, size_t size) {
  set_has_sentence_boundary_regexp();
  if (sentence_boundary_regexp_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_regexp_ = new ::std::string;
  }
  sentence_boundary_regexp_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SparrowhawkConfiguration::mutable_sentence_boundary_regexp() {
  set_has_sentence_boundary_regexp();
  if (sentence_boundary_regexp_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_regexp_ = new ::std::string;
  }
  return sentence_boundary_regexp_;
}
inline ::std::string* SparrowhawkConfiguration::release_sentence_boundary_regexp() {
  clear_has_sentence_boundary_regexp();
  if (sentence_boundary_regexp_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sentence_boundary_regexp_;
    sentence_boundary_regexp_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SparrowhawkConfiguration::set_allocated_sentence_boundary_regexp(::std::string* sentence_boundary_regexp) {
  if (sentence_boundary_regexp_ != &::google::protobuf::internal::kEmptyString) {
    delete sentence_boundary_regexp_;
  }
  if (sentence_boundary_regexp) {
    set_has_sentence_boundary_regexp();
    sentence_boundary_regexp_ = sentence_boundary_regexp;
  } else {
    clear_has_sentence_boundary_regexp();
    sentence_boundary_regexp_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string sentence_boundary_exceptions_file = 4;
inline bool SparrowhawkConfiguration::has_sentence_boundary_exceptions_file() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SparrowhawkConfiguration::set_has_sentence_boundary_exceptions_file() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SparrowhawkConfiguration::clear_has_sentence_boundary_exceptions_file() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SparrowhawkConfiguration::clear_sentence_boundary_exceptions_file() {
  if (sentence_boundary_exceptions_file_ != &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_exceptions_file_->clear();
  }
  clear_has_sentence_boundary_exceptions_file();
}
inline const ::std::string& SparrowhawkConfiguration::sentence_boundary_exceptions_file() const {
  return *sentence_boundary_exceptions_file_;
}
inline void SparrowhawkConfiguration::set_sentence_boundary_exceptions_file(const ::std::string& value) {
  set_has_sentence_boundary_exceptions_file();
  if (sentence_boundary_exceptions_file_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_exceptions_file_ = new ::std::string;
  }
  sentence_boundary_exceptions_file_->assign(value);
}
inline void SparrowhawkConfiguration::set_sentence_boundary_exceptions_file(const char* value) {
  set_has_sentence_boundary_exceptions_file();
  if (sentence_boundary_exceptions_file_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_exceptions_file_ = new ::std::string;
  }
  sentence_boundary_exceptions_file_->assign(value);
}
inline void SparrowhawkConfiguration::set_sentence_boundary_exceptions_file(const char* value, size_t size) {
  set_has_sentence_boundary_exceptions_file();
  if (sentence_boundary_exceptions_file_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_exceptions_file_ = new ::std::string;
  }
  sentence_boundary_exceptions_file_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SparrowhawkConfiguration::mutable_sentence_boundary_exceptions_file() {
  set_has_sentence_boundary_exceptions_file();
  if (sentence_boundary_exceptions_file_ == &::google::protobuf::internal::kEmptyString) {
    sentence_boundary_exceptions_file_ = new ::std::string;
  }
  return sentence_boundary_exceptions_file_;
}
inline ::std::string* SparrowhawkConfiguration::release_sentence_boundary_exceptions_file() {
  clear_has_sentence_boundary_exceptions_file();
  if (sentence_boundary_exceptions_file_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sentence_boundary_exceptions_file_;
    sentence_boundary_exceptions_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SparrowhawkConfiguration::set_allocated_sentence_boundary_exceptions_file(::std::string* sentence_boundary_exceptions_file) {
  if (sentence_boundary_exceptions_file_ != &::google::protobuf::internal::kEmptyString) {
    delete sentence_boundary_exceptions_file_;
  }
  if (sentence_boundary_exceptions_file) {
    set_has_sentence_boundary_exceptions_file();
    sentence_boundary_exceptions_file_ = sentence_boundary_exceptions_file;
  } else {
    clear_has_sentence_boundary_exceptions_file();
    sentence_boundary_exceptions_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sparrowhawk
}  // namespace speech

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sparrowhawk_5fconfiguration_2eproto__INCLUDED