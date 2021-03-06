// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PRIMITIVES_IROHA_H_
#define FLATBUFFERS_GENERATED_PRIMITIVES_IROHA_H_

#include "flatbuffers/flatbuffers.h"

namespace iroha {

struct Chaincode;

struct KeyValueObject;

struct UserPermissionRoot;

struct UserPermissionLedger;

struct UserPermissionDomain;

struct UserPermissionAsset;

struct Peer;

struct Signature;

/////////////////////////////////////
enum class ProgrammingLanguage : uint8_t {
  Java8 = 0,
  MIN = Java8,
  MAX = Java8
};

inline const char **EnumNamesProgrammingLanguage() {
  static const char *names[] = {
    "Java8",
    nullptr
  };
  return names;
}

inline const char *EnumNameProgrammingLanguage(ProgrammingLanguage e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesProgrammingLanguage()[index];
}

enum class UserPermission : uint8_t {
  NONE = 0,
  UserPermissionRoot = 1,
  UserPermissionLedger = 2,
  UserPermissionDomain = 3,
  UserPermissionAsset = 4,
  MIN = NONE,
  MAX = UserPermissionAsset
};

inline const char **EnumNamesUserPermission() {
  static const char *names[] = {
    "NONE",
    "UserPermissionRoot",
    "UserPermissionLedger",
    "UserPermissionDomain",
    "UserPermissionAsset",
    nullptr
  };
  return names;
}

inline const char *EnumNameUserPermission(UserPermission e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesUserPermission()[index];
}

template<typename T> struct UserPermissionTraits {
  static const UserPermission enum_value = UserPermission::NONE;
};

template<> struct UserPermissionTraits<UserPermissionRoot> {
  static const UserPermission enum_value = UserPermission::UserPermissionRoot;
};

template<> struct UserPermissionTraits<UserPermissionLedger> {
  static const UserPermission enum_value = UserPermission::UserPermissionLedger;
};

template<> struct UserPermissionTraits<UserPermissionDomain> {
  static const UserPermission enum_value = UserPermission::UserPermissionDomain;
};

template<> struct UserPermissionTraits<UserPermissionAsset> {
  static const UserPermission enum_value = UserPermission::UserPermissionAsset;
};

bool VerifyUserPermission(flatbuffers::Verifier &verifier, const void *obj, UserPermission type);
bool VerifyUserPermissionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct Chaincode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_CODE_NAME = 4,
    VT_DOMAIN_NAME = 6,
    VT_LEDGER_NAME = 8,
    VT_LANGUAGE = 10,
    VT_CODE = 12
  };
  const flatbuffers::String *code_name() const {
    return GetPointer<const flatbuffers::String *>(VT_CODE_NAME);
  }
  flatbuffers::String *mutable_code_name() {
    return GetPointer<flatbuffers::String *>(VT_CODE_NAME);
  }
  bool KeyCompareLessThan(const Chaincode *o) const {
    return *code_name() < *o->code_name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(code_name()->c_str(), val);
  }
  const flatbuffers::String *domain_name() const {
    return GetPointer<const flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  flatbuffers::String *mutable_domain_name() {
    return GetPointer<flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  const flatbuffers::String *ledger_name() const {
    return GetPointer<const flatbuffers::String *>(VT_LEDGER_NAME);
  }
  flatbuffers::String *mutable_ledger_name() {
    return GetPointer<flatbuffers::String *>(VT_LEDGER_NAME);
  }
  ProgrammingLanguage language() const {
    return static_cast<ProgrammingLanguage>(GetField<uint8_t>(VT_LANGUAGE, 0));
  }
  bool mutate_language(ProgrammingLanguage _language) {
    return SetField<uint8_t>(VT_LANGUAGE, static_cast<uint8_t>(_language), 0);
  }
  const flatbuffers::Vector<uint8_t> *code() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_CODE);
  }
  flatbuffers::Vector<uint8_t> *mutable_code() {
    return GetPointer<flatbuffers::Vector<uint8_t> *>(VT_CODE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_CODE_NAME) &&
           verifier.Verify(code_name()) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_DOMAIN_NAME) &&
           verifier.Verify(domain_name()) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_LEDGER_NAME) &&
           verifier.Verify(ledger_name()) &&
           VerifyField<uint8_t>(verifier, VT_LANGUAGE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CODE) &&
           verifier.Verify(code()) &&
           verifier.EndTable();
  }
};

struct ChaincodeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_code_name(flatbuffers::Offset<flatbuffers::String> code_name) {
    fbb_.AddOffset(Chaincode::VT_CODE_NAME, code_name);
  }
  void add_domain_name(flatbuffers::Offset<flatbuffers::String> domain_name) {
    fbb_.AddOffset(Chaincode::VT_DOMAIN_NAME, domain_name);
  }
  void add_ledger_name(flatbuffers::Offset<flatbuffers::String> ledger_name) {
    fbb_.AddOffset(Chaincode::VT_LEDGER_NAME, ledger_name);
  }
  void add_language(ProgrammingLanguage language) {
    fbb_.AddElement<uint8_t>(Chaincode::VT_LANGUAGE, static_cast<uint8_t>(language), 0);
  }
  void add_code(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> code) {
    fbb_.AddOffset(Chaincode::VT_CODE, code);
  }
  ChaincodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChaincodeBuilder &operator=(const ChaincodeBuilder &);
  flatbuffers::Offset<Chaincode> Finish() {
    const auto end = fbb_.EndTable(start_, 5);
    auto o = flatbuffers::Offset<Chaincode>(end);
    fbb_.Required(o, Chaincode::VT_CODE_NAME);
    fbb_.Required(o, Chaincode::VT_DOMAIN_NAME);
    fbb_.Required(o, Chaincode::VT_LEDGER_NAME);
    return o;
  }
};

inline flatbuffers::Offset<Chaincode> CreateChaincode(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> code_name = 0,
    flatbuffers::Offset<flatbuffers::String> domain_name = 0,
    flatbuffers::Offset<flatbuffers::String> ledger_name = 0,
    ProgrammingLanguage language = ProgrammingLanguage::Java8,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> code = 0) {
  ChaincodeBuilder builder_(_fbb);
  builder_.add_code(code);
  builder_.add_ledger_name(ledger_name);
  builder_.add_domain_name(domain_name);
  builder_.add_code_name(code_name);
  builder_.add_language(language);
  return builder_.Finish();
}

inline flatbuffers::Offset<Chaincode> CreateChaincodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *code_name = nullptr,
    const char *domain_name = nullptr,
    const char *ledger_name = nullptr,
    ProgrammingLanguage language = ProgrammingLanguage::Java8,
    const std::vector<uint8_t> *code = nullptr) {
  return iroha::CreateChaincode(
      _fbb,
      code_name ? _fbb.CreateString(code_name) : 0,
      domain_name ? _fbb.CreateString(domain_name) : 0,
      ledger_name ? _fbb.CreateString(ledger_name) : 0,
      language,
      code ? _fbb.CreateVector<uint8_t>(*code) : 0);
}

/////////////////////////////////////
/// Key-Value object
struct KeyValueObject FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_KEY = 4,
    VT_VALUE = 6
  };
  const flatbuffers::String *key() const {
    return GetPointer<const flatbuffers::String *>(VT_KEY);
  }
  flatbuffers::String *mutable_key() {
    return GetPointer<flatbuffers::String *>(VT_KEY);
  }
  bool KeyCompareLessThan(const KeyValueObject *o) const {
    return *key() < *o->key();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(key()->c_str(), val);
  }
  const flatbuffers::Vector<uint8_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  flatbuffers::Vector<uint8_t> *mutable_value() {
    return GetPointer<flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_KEY) &&
           verifier.Verify(key()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_VALUE) &&
           verifier.Verify(value()) &&
           verifier.EndTable();
  }
};

struct KeyValueObjectBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_key(flatbuffers::Offset<flatbuffers::String> key) {
    fbb_.AddOffset(KeyValueObject::VT_KEY, key);
  }
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value) {
    fbb_.AddOffset(KeyValueObject::VT_VALUE, value);
  }
  KeyValueObjectBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  KeyValueObjectBuilder &operator=(const KeyValueObjectBuilder &);
  flatbuffers::Offset<KeyValueObject> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<KeyValueObject>(end);
    fbb_.Required(o, KeyValueObject::VT_KEY);
    return o;
  }
};

inline flatbuffers::Offset<KeyValueObject> CreateKeyValueObject(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> key = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value = 0) {
  KeyValueObjectBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_key(key);
  return builder_.Finish();
}

inline flatbuffers::Offset<KeyValueObject> CreateKeyValueObjectDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *key = nullptr,
    const std::vector<uint8_t> *value = nullptr) {
  return iroha::CreateKeyValueObject(
      _fbb,
      key ? _fbb.CreateString(key) : 0,
      value ? _fbb.CreateVector<uint8_t>(*value) : 0);
}

/////////////////////////////////////
/// Permissions
struct UserPermissionRoot FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_LEDGER_ADD = 4,
    VT_LEDGER_REMOVE = 6
  };
  bool ledger_add() const {
    return GetField<uint8_t>(VT_LEDGER_ADD, 0) != 0;
  }
  bool mutate_ledger_add(bool _ledger_add) {
    return SetField<uint8_t>(VT_LEDGER_ADD, static_cast<uint8_t>(_ledger_add), 0);
  }
  bool ledger_remove() const {
    return GetField<uint8_t>(VT_LEDGER_REMOVE, 0) != 0;
  }
  bool mutate_ledger_remove(bool _ledger_remove) {
    return SetField<uint8_t>(VT_LEDGER_REMOVE, static_cast<uint8_t>(_ledger_remove), 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_LEDGER_ADD) &&
           VerifyField<uint8_t>(verifier, VT_LEDGER_REMOVE) &&
           verifier.EndTable();
  }
};

struct UserPermissionRootBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ledger_add(bool ledger_add) {
    fbb_.AddElement<uint8_t>(UserPermissionRoot::VT_LEDGER_ADD, static_cast<uint8_t>(ledger_add), 0);
  }
  void add_ledger_remove(bool ledger_remove) {
    fbb_.AddElement<uint8_t>(UserPermissionRoot::VT_LEDGER_REMOVE, static_cast<uint8_t>(ledger_remove), 0);
  }
  UserPermissionRootBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UserPermissionRootBuilder &operator=(const UserPermissionRootBuilder &);
  flatbuffers::Offset<UserPermissionRoot> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<UserPermissionRoot>(end);
    return o;
  }
};

inline flatbuffers::Offset<UserPermissionRoot> CreateUserPermissionRoot(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool ledger_add = false,
    bool ledger_remove = false) {
  UserPermissionRootBuilder builder_(_fbb);
  builder_.add_ledger_remove(ledger_remove);
  builder_.add_ledger_add(ledger_add);
  return builder_.Finish();
}

struct UserPermissionLedger FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_LEDGER_NAME = 4,
    VT_DOMAIN_ADD = 6,
    VT_DOMAIN_REMOVE = 8,
    VT_PEER_ADD = 10,
    VT_PEER_REMOVE = 12,
    VT_USER_ADD = 14,
    VT_USER_REMOVE = 16,
    VT_USER_GIVE_PERMISSION = 18
  };
  const flatbuffers::String *ledger_name() const {
    return GetPointer<const flatbuffers::String *>(VT_LEDGER_NAME);
  }
  flatbuffers::String *mutable_ledger_name() {
    return GetPointer<flatbuffers::String *>(VT_LEDGER_NAME);
  }
  bool KeyCompareLessThan(const UserPermissionLedger *o) const {
    return *ledger_name() < *o->ledger_name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(ledger_name()->c_str(), val);
  }
  bool domain_add() const {
    return GetField<uint8_t>(VT_DOMAIN_ADD, 0) != 0;
  }
  bool mutate_domain_add(bool _domain_add) {
    return SetField<uint8_t>(VT_DOMAIN_ADD, static_cast<uint8_t>(_domain_add), 0);
  }
  bool domain_remove() const {
    return GetField<uint8_t>(VT_DOMAIN_REMOVE, 0) != 0;
  }
  bool mutate_domain_remove(bool _domain_remove) {
    return SetField<uint8_t>(VT_DOMAIN_REMOVE, static_cast<uint8_t>(_domain_remove), 0);
  }
  bool peer_add() const {
    return GetField<uint8_t>(VT_PEER_ADD, 0) != 0;
  }
  bool mutate_peer_add(bool _peer_add) {
    return SetField<uint8_t>(VT_PEER_ADD, static_cast<uint8_t>(_peer_add), 0);
  }
  bool peer_remove() const {
    return GetField<uint8_t>(VT_PEER_REMOVE, 0) != 0;
  }
  bool mutate_peer_remove(bool _peer_remove) {
    return SetField<uint8_t>(VT_PEER_REMOVE, static_cast<uint8_t>(_peer_remove), 0);
  }
  bool user_add() const {
    return GetField<uint8_t>(VT_USER_ADD, 0) != 0;
  }
  bool mutate_user_add(bool _user_add) {
    return SetField<uint8_t>(VT_USER_ADD, static_cast<uint8_t>(_user_add), 0);
  }
  bool user_remove() const {
    return GetField<uint8_t>(VT_USER_REMOVE, 0) != 0;
  }
  bool mutate_user_remove(bool _user_remove) {
    return SetField<uint8_t>(VT_USER_REMOVE, static_cast<uint8_t>(_user_remove), 0);
  }
  bool user_give_permission() const {
    return GetField<uint8_t>(VT_USER_GIVE_PERMISSION, 0) != 0;
  }
  bool mutate_user_give_permission(bool _user_give_permission) {
    return SetField<uint8_t>(VT_USER_GIVE_PERMISSION, static_cast<uint8_t>(_user_give_permission), 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_LEDGER_NAME) &&
           verifier.Verify(ledger_name()) &&
           VerifyField<uint8_t>(verifier, VT_DOMAIN_ADD) &&
           VerifyField<uint8_t>(verifier, VT_DOMAIN_REMOVE) &&
           VerifyField<uint8_t>(verifier, VT_PEER_ADD) &&
           VerifyField<uint8_t>(verifier, VT_PEER_REMOVE) &&
           VerifyField<uint8_t>(verifier, VT_USER_ADD) &&
           VerifyField<uint8_t>(verifier, VT_USER_REMOVE) &&
           VerifyField<uint8_t>(verifier, VT_USER_GIVE_PERMISSION) &&
           verifier.EndTable();
  }
};

struct UserPermissionLedgerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ledger_name(flatbuffers::Offset<flatbuffers::String> ledger_name) {
    fbb_.AddOffset(UserPermissionLedger::VT_LEDGER_NAME, ledger_name);
  }
  void add_domain_add(bool domain_add) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_DOMAIN_ADD, static_cast<uint8_t>(domain_add), 0);
  }
  void add_domain_remove(bool domain_remove) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_DOMAIN_REMOVE, static_cast<uint8_t>(domain_remove), 0);
  }
  void add_peer_add(bool peer_add) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_PEER_ADD, static_cast<uint8_t>(peer_add), 0);
  }
  void add_peer_remove(bool peer_remove) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_PEER_REMOVE, static_cast<uint8_t>(peer_remove), 0);
  }
  void add_user_add(bool user_add) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_USER_ADD, static_cast<uint8_t>(user_add), 0);
  }
  void add_user_remove(bool user_remove) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_USER_REMOVE, static_cast<uint8_t>(user_remove), 0);
  }
  void add_user_give_permission(bool user_give_permission) {
    fbb_.AddElement<uint8_t>(UserPermissionLedger::VT_USER_GIVE_PERMISSION, static_cast<uint8_t>(user_give_permission), 0);
  }
  UserPermissionLedgerBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UserPermissionLedgerBuilder &operator=(const UserPermissionLedgerBuilder &);
  flatbuffers::Offset<UserPermissionLedger> Finish() {
    const auto end = fbb_.EndTable(start_, 8);
    auto o = flatbuffers::Offset<UserPermissionLedger>(end);
    fbb_.Required(o, UserPermissionLedger::VT_LEDGER_NAME);
    return o;
  }
};

inline flatbuffers::Offset<UserPermissionLedger> CreateUserPermissionLedger(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> ledger_name = 0,
    bool domain_add = false,
    bool domain_remove = false,
    bool peer_add = false,
    bool peer_remove = false,
    bool user_add = false,
    bool user_remove = false,
    bool user_give_permission = false) {
  UserPermissionLedgerBuilder builder_(_fbb);
  builder_.add_ledger_name(ledger_name);
  builder_.add_user_give_permission(user_give_permission);
  builder_.add_user_remove(user_remove);
  builder_.add_user_add(user_add);
  builder_.add_peer_remove(peer_remove);
  builder_.add_peer_add(peer_add);
  builder_.add_domain_remove(domain_remove);
  builder_.add_domain_add(domain_add);
  return builder_.Finish();
}

inline flatbuffers::Offset<UserPermissionLedger> CreateUserPermissionLedgerDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *ledger_name = nullptr,
    bool domain_add = false,
    bool domain_remove = false,
    bool peer_add = false,
    bool peer_remove = false,
    bool user_add = false,
    bool user_remove = false,
    bool user_give_permission = false) {
  return iroha::CreateUserPermissionLedger(
      _fbb,
      ledger_name ? _fbb.CreateString(ledger_name) : 0,
      domain_add,
      domain_remove,
      peer_add,
      peer_remove,
      user_add,
      user_remove,
      user_give_permission);
}

struct UserPermissionDomain FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_DOMAIN_NAME = 4,
    VT_LEDGER_NAME = 6,
    VT_USER_GIVE_PERMISSION = 8,
    VT_USER_ADD = 10,
    VT_USER_REMOVE = 12
  };
  const flatbuffers::String *domain_name() const {
    return GetPointer<const flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  flatbuffers::String *mutable_domain_name() {
    return GetPointer<flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  bool KeyCompareLessThan(const UserPermissionDomain *o) const {
    return *domain_name() < *o->domain_name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(domain_name()->c_str(), val);
  }
  const flatbuffers::String *ledger_name() const {
    return GetPointer<const flatbuffers::String *>(VT_LEDGER_NAME);
  }
  flatbuffers::String *mutable_ledger_name() {
    return GetPointer<flatbuffers::String *>(VT_LEDGER_NAME);
  }
  bool user_give_permission() const {
    return GetField<uint8_t>(VT_USER_GIVE_PERMISSION, 0) != 0;
  }
  bool mutate_user_give_permission(bool _user_give_permission) {
    return SetField<uint8_t>(VT_USER_GIVE_PERMISSION, static_cast<uint8_t>(_user_give_permission), 0);
  }
  bool user_add() const {
    return GetField<uint8_t>(VT_USER_ADD, 0) != 0;
  }
  bool mutate_user_add(bool _user_add) {
    return SetField<uint8_t>(VT_USER_ADD, static_cast<uint8_t>(_user_add), 0);
  }
  bool user_remove() const {
    return GetField<uint8_t>(VT_USER_REMOVE, 0) != 0;
  }
  bool mutate_user_remove(bool _user_remove) {
    return SetField<uint8_t>(VT_USER_REMOVE, static_cast<uint8_t>(_user_remove), 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_DOMAIN_NAME) &&
           verifier.Verify(domain_name()) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_LEDGER_NAME) &&
           verifier.Verify(ledger_name()) &&
           VerifyField<uint8_t>(verifier, VT_USER_GIVE_PERMISSION) &&
           VerifyField<uint8_t>(verifier, VT_USER_ADD) &&
           VerifyField<uint8_t>(verifier, VT_USER_REMOVE) &&
           verifier.EndTable();
  }
};

struct UserPermissionDomainBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_domain_name(flatbuffers::Offset<flatbuffers::String> domain_name) {
    fbb_.AddOffset(UserPermissionDomain::VT_DOMAIN_NAME, domain_name);
  }
  void add_ledger_name(flatbuffers::Offset<flatbuffers::String> ledger_name) {
    fbb_.AddOffset(UserPermissionDomain::VT_LEDGER_NAME, ledger_name);
  }
  void add_user_give_permission(bool user_give_permission) {
    fbb_.AddElement<uint8_t>(UserPermissionDomain::VT_USER_GIVE_PERMISSION, static_cast<uint8_t>(user_give_permission), 0);
  }
  void add_user_add(bool user_add) {
    fbb_.AddElement<uint8_t>(UserPermissionDomain::VT_USER_ADD, static_cast<uint8_t>(user_add), 0);
  }
  void add_user_remove(bool user_remove) {
    fbb_.AddElement<uint8_t>(UserPermissionDomain::VT_USER_REMOVE, static_cast<uint8_t>(user_remove), 0);
  }
  UserPermissionDomainBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UserPermissionDomainBuilder &operator=(const UserPermissionDomainBuilder &);
  flatbuffers::Offset<UserPermissionDomain> Finish() {
    const auto end = fbb_.EndTable(start_, 5);
    auto o = flatbuffers::Offset<UserPermissionDomain>(end);
    fbb_.Required(o, UserPermissionDomain::VT_DOMAIN_NAME);
    fbb_.Required(o, UserPermissionDomain::VT_LEDGER_NAME);
    return o;
  }
};

inline flatbuffers::Offset<UserPermissionDomain> CreateUserPermissionDomain(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> domain_name = 0,
    flatbuffers::Offset<flatbuffers::String> ledger_name = 0,
    bool user_give_permission = false,
    bool user_add = false,
    bool user_remove = false) {
  UserPermissionDomainBuilder builder_(_fbb);
  builder_.add_ledger_name(ledger_name);
  builder_.add_domain_name(domain_name);
  builder_.add_user_remove(user_remove);
  builder_.add_user_add(user_add);
  builder_.add_user_give_permission(user_give_permission);
  return builder_.Finish();
}

inline flatbuffers::Offset<UserPermissionDomain> CreateUserPermissionDomainDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *domain_name = nullptr,
    const char *ledger_name = nullptr,
    bool user_give_permission = false,
    bool user_add = false,
    bool user_remove = false) {
  return iroha::CreateUserPermissionDomain(
      _fbb,
      domain_name ? _fbb.CreateString(domain_name) : 0,
      ledger_name ? _fbb.CreateString(ledger_name) : 0,
      user_give_permission,
      user_add,
      user_remove);
}

struct UserPermissionAsset FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ASSET_NAME = 4,
    VT_DOMAIN_NAME = 6,
    VT_LEDGER_NAME = 8,
    VT_TRANSFER = 10,
    VT_ADD = 12,
    VT_REMOVE = 14,
    VT_CREATE = 16
  };
  const flatbuffers::String *asset_name() const {
    return GetPointer<const flatbuffers::String *>(VT_ASSET_NAME);
  }
  flatbuffers::String *mutable_asset_name() {
    return GetPointer<flatbuffers::String *>(VT_ASSET_NAME);
  }
  bool KeyCompareLessThan(const UserPermissionAsset *o) const {
    return *asset_name() < *o->asset_name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(asset_name()->c_str(), val);
  }
  const flatbuffers::String *domain_name() const {
    return GetPointer<const flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  flatbuffers::String *mutable_domain_name() {
    return GetPointer<flatbuffers::String *>(VT_DOMAIN_NAME);
  }
  const flatbuffers::String *ledger_name() const {
    return GetPointer<const flatbuffers::String *>(VT_LEDGER_NAME);
  }
  flatbuffers::String *mutable_ledger_name() {
    return GetPointer<flatbuffers::String *>(VT_LEDGER_NAME);
  }
  bool transfer() const {
    return GetField<uint8_t>(VT_TRANSFER, 0) != 0;
  }
  bool mutate_transfer(bool _transfer) {
    return SetField<uint8_t>(VT_TRANSFER, static_cast<uint8_t>(_transfer), 0);
  }
  bool add() const {
    return GetField<uint8_t>(VT_ADD, 0) != 0;
  }
  bool mutate_add(bool _add) {
    return SetField<uint8_t>(VT_ADD, static_cast<uint8_t>(_add), 0);
  }
  bool remove() const {
    return GetField<uint8_t>(VT_REMOVE, 0) != 0;
  }
  bool mutate_remove(bool _remove) {
    return SetField<uint8_t>(VT_REMOVE, static_cast<uint8_t>(_remove), 0);
  }
  bool create() const {
    return GetField<uint8_t>(VT_CREATE, 0) != 0;
  }
  bool mutate_create(bool _create) {
    return SetField<uint8_t>(VT_CREATE, static_cast<uint8_t>(_create), 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_ASSET_NAME) &&
           verifier.Verify(asset_name()) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_DOMAIN_NAME) &&
           verifier.Verify(domain_name()) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_LEDGER_NAME) &&
           verifier.Verify(ledger_name()) &&
           VerifyField<uint8_t>(verifier, VT_TRANSFER) &&
           VerifyField<uint8_t>(verifier, VT_ADD) &&
           VerifyField<uint8_t>(verifier, VT_REMOVE) &&
           VerifyField<uint8_t>(verifier, VT_CREATE) &&
           verifier.EndTable();
  }
};

struct UserPermissionAssetBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_asset_name(flatbuffers::Offset<flatbuffers::String> asset_name) {
    fbb_.AddOffset(UserPermissionAsset::VT_ASSET_NAME, asset_name);
  }
  void add_domain_name(flatbuffers::Offset<flatbuffers::String> domain_name) {
    fbb_.AddOffset(UserPermissionAsset::VT_DOMAIN_NAME, domain_name);
  }
  void add_ledger_name(flatbuffers::Offset<flatbuffers::String> ledger_name) {
    fbb_.AddOffset(UserPermissionAsset::VT_LEDGER_NAME, ledger_name);
  }
  void add_transfer(bool transfer) {
    fbb_.AddElement<uint8_t>(UserPermissionAsset::VT_TRANSFER, static_cast<uint8_t>(transfer), 0);
  }
  void add_add(bool add) {
    fbb_.AddElement<uint8_t>(UserPermissionAsset::VT_ADD, static_cast<uint8_t>(add), 0);
  }
  void add_remove(bool remove) {
    fbb_.AddElement<uint8_t>(UserPermissionAsset::VT_REMOVE, static_cast<uint8_t>(remove), 0);
  }
  void add_create(bool create) {
    fbb_.AddElement<uint8_t>(UserPermissionAsset::VT_CREATE, static_cast<uint8_t>(create), 0);
  }
  UserPermissionAssetBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UserPermissionAssetBuilder &operator=(const UserPermissionAssetBuilder &);
  flatbuffers::Offset<UserPermissionAsset> Finish() {
    const auto end = fbb_.EndTable(start_, 7);
    auto o = flatbuffers::Offset<UserPermissionAsset>(end);
    fbb_.Required(o, UserPermissionAsset::VT_ASSET_NAME);
    fbb_.Required(o, UserPermissionAsset::VT_DOMAIN_NAME);
    fbb_.Required(o, UserPermissionAsset::VT_LEDGER_NAME);
    return o;
  }
};

inline flatbuffers::Offset<UserPermissionAsset> CreateUserPermissionAsset(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> asset_name = 0,
    flatbuffers::Offset<flatbuffers::String> domain_name = 0,
    flatbuffers::Offset<flatbuffers::String> ledger_name = 0,
    bool transfer = false,
    bool add = false,
    bool remove = false,
    bool create = false) {
  UserPermissionAssetBuilder builder_(_fbb);
  builder_.add_ledger_name(ledger_name);
  builder_.add_domain_name(domain_name);
  builder_.add_asset_name(asset_name);
  builder_.add_create(create);
  builder_.add_remove(remove);
  builder_.add_add(add);
  builder_.add_transfer(transfer);
  return builder_.Finish();
}

inline flatbuffers::Offset<UserPermissionAsset> CreateUserPermissionAssetDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *asset_name = nullptr,
    const char *domain_name = nullptr,
    const char *ledger_name = nullptr,
    bool transfer = false,
    bool add = false,
    bool remove = false,
    bool create = false) {
  return iroha::CreateUserPermissionAsset(
      _fbb,
      asset_name ? _fbb.CreateString(asset_name) : 0,
      domain_name ? _fbb.CreateString(domain_name) : 0,
      ledger_name ? _fbb.CreateString(ledger_name) : 0,
      transfer,
      add,
      remove,
      create);
}

/////////////////////////////////////
/// Peer
struct Peer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PUBLICKEY = 4,
    VT_IP = 6,
    VT_TRUST = 8,
    VT_ACTIVE = 10,
    VT_JOIN_NETWORK = 12,
    VT_JOIN_VALIDATION = 14
  };
  const flatbuffers::String *publicKey() const {
    return GetPointer<const flatbuffers::String *>(VT_PUBLICKEY);
  }
  flatbuffers::String *mutable_publicKey() {
    return GetPointer<flatbuffers::String *>(VT_PUBLICKEY);
  }
  const flatbuffers::String *ip() const {
    return GetPointer<const flatbuffers::String *>(VT_IP);
  }
  flatbuffers::String *mutable_ip() {
    return GetPointer<flatbuffers::String *>(VT_IP);
  }
  double trust() const {
    return GetField<double>(VT_TRUST, 0.0);
  }
  bool mutate_trust(double _trust) {
    return SetField<double>(VT_TRUST, _trust, 0.0);
  }
  bool active() const {
    return GetField<uint8_t>(VT_ACTIVE, 0) != 0;
  }
  bool mutate_active(bool _active) {
    return SetField<uint8_t>(VT_ACTIVE, static_cast<uint8_t>(_active), 0);
  }
  bool join_network() const {
    return GetField<uint8_t>(VT_JOIN_NETWORK, 0) != 0;
  }
  bool mutate_join_network(bool _join_network) {
    return SetField<uint8_t>(VT_JOIN_NETWORK, static_cast<uint8_t>(_join_network), 0);
  }
  bool join_validation() const {
    return GetField<uint8_t>(VT_JOIN_VALIDATION, 0) != 0;
  }
  bool mutate_join_validation(bool _join_validation) {
    return SetField<uint8_t>(VT_JOIN_VALIDATION, static_cast<uint8_t>(_join_validation), 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, VT_PUBLICKEY) &&
           verifier.Verify(publicKey()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IP) &&
           verifier.Verify(ip()) &&
           VerifyField<double>(verifier, VT_TRUST) &&
           VerifyField<uint8_t>(verifier, VT_ACTIVE) &&
           VerifyField<uint8_t>(verifier, VT_JOIN_NETWORK) &&
           VerifyField<uint8_t>(verifier, VT_JOIN_VALIDATION) &&
           verifier.EndTable();
  }
};

struct PeerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_publicKey(flatbuffers::Offset<flatbuffers::String> publicKey) {
    fbb_.AddOffset(Peer::VT_PUBLICKEY, publicKey);
  }
  void add_ip(flatbuffers::Offset<flatbuffers::String> ip) {
    fbb_.AddOffset(Peer::VT_IP, ip);
  }
  void add_trust(double trust) {
    fbb_.AddElement<double>(Peer::VT_TRUST, trust, 0.0);
  }
  void add_active(bool active) {
    fbb_.AddElement<uint8_t>(Peer::VT_ACTIVE, static_cast<uint8_t>(active), 0);
  }
  void add_join_network(bool join_network) {
    fbb_.AddElement<uint8_t>(Peer::VT_JOIN_NETWORK, static_cast<uint8_t>(join_network), 0);
  }
  void add_join_validation(bool join_validation) {
    fbb_.AddElement<uint8_t>(Peer::VT_JOIN_VALIDATION, static_cast<uint8_t>(join_validation), 0);
  }
  PeerBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PeerBuilder &operator=(const PeerBuilder &);
  flatbuffers::Offset<Peer> Finish() {
    const auto end = fbb_.EndTable(start_, 6);
    auto o = flatbuffers::Offset<Peer>(end);
    fbb_.Required(o, Peer::VT_PUBLICKEY);
    return o;
  }
};

inline flatbuffers::Offset<Peer> CreatePeer(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> publicKey = 0,
    flatbuffers::Offset<flatbuffers::String> ip = 0,
    double trust = 0.0,
    bool active = false,
    bool join_network = false,
    bool join_validation = false) {
  PeerBuilder builder_(_fbb);
  builder_.add_trust(trust);
  builder_.add_ip(ip);
  builder_.add_publicKey(publicKey);
  builder_.add_join_validation(join_validation);
  builder_.add_join_network(join_network);
  builder_.add_active(active);
  return builder_.Finish();
}

inline flatbuffers::Offset<Peer> CreatePeerDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *publicKey = nullptr,
    const char *ip = nullptr,
    double trust = 0.0,
    bool active = false,
    bool join_network = false,
    bool join_validation = false) {
  return iroha::CreatePeer(
      _fbb,
      publicKey ? _fbb.CreateString(publicKey) : 0,
      ip ? _fbb.CreateString(ip) : 0,
      trust,
      active,
      join_network,
      join_validation);
}

/////////////////////////////////////
struct Signature FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PUBLICKEY = 4,
    VT_SIGNATURE = 6,
    VT_TIMESTAMP = 8
  };
  const flatbuffers::String *publicKey() const {
    return GetPointer<const flatbuffers::String *>(VT_PUBLICKEY);
  }
  flatbuffers::String *mutable_publicKey() {
    return GetPointer<flatbuffers::String *>(VT_PUBLICKEY);
  }
  const flatbuffers::Vector<uint8_t> *signature() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SIGNATURE);
  }
  flatbuffers::Vector<uint8_t> *mutable_signature() {
    return GetPointer<flatbuffers::Vector<uint8_t> *>(VT_SIGNATURE);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  bool mutate_timestamp(uint64_t _timestamp) {
    return SetField<uint64_t>(VT_TIMESTAMP, _timestamp, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PUBLICKEY) &&
           verifier.Verify(publicKey()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SIGNATURE) &&
           verifier.Verify(signature()) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP) &&
           verifier.EndTable();
  }
};

struct SignatureBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_publicKey(flatbuffers::Offset<flatbuffers::String> publicKey) {
    fbb_.AddOffset(Signature::VT_PUBLICKEY, publicKey);
  }
  void add_signature(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature) {
    fbb_.AddOffset(Signature::VT_SIGNATURE, signature);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(Signature::VT_TIMESTAMP, timestamp, 0);
  }
  SignatureBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SignatureBuilder &operator=(const SignatureBuilder &);
  flatbuffers::Offset<Signature> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<Signature>(end);
    return o;
  }
};

inline flatbuffers::Offset<Signature> CreateSignature(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> publicKey = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature = 0,
    uint64_t timestamp = 0) {
  SignatureBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_signature(signature);
  builder_.add_publicKey(publicKey);
  return builder_.Finish();
}

inline flatbuffers::Offset<Signature> CreateSignatureDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *publicKey = nullptr,
    const std::vector<uint8_t> *signature = nullptr,
    uint64_t timestamp = 0) {
  return iroha::CreateSignature(
      _fbb,
      publicKey ? _fbb.CreateString(publicKey) : 0,
      signature ? _fbb.CreateVector<uint8_t>(*signature) : 0,
      timestamp);
}

inline bool VerifyUserPermission(flatbuffers::Verifier &verifier, const void *obj, UserPermission type) {
  switch (type) {
    case UserPermission::NONE: {
      return true;
    }
    case UserPermission::UserPermissionRoot: {
      auto ptr = reinterpret_cast<const UserPermissionRoot *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case UserPermission::UserPermissionLedger: {
      auto ptr = reinterpret_cast<const UserPermissionLedger *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case UserPermission::UserPermissionDomain: {
      auto ptr = reinterpret_cast<const UserPermissionDomain *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case UserPermission::UserPermissionAsset: {
      auto ptr = reinterpret_cast<const UserPermissionAsset *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyUserPermissionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyUserPermission(
        verifier,  values->Get(i), types->GetEnum<UserPermission>(i))) {
      return false;
    }
  }
  return true;
}

}  // namespace iroha

#endif  // FLATBUFFERS_GENERATED_PRIMITIVES_IROHA_H_
