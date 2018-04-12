// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CMD_PROTOCOL_H_
#define FLATBUFFERS_GENERATED_CMD_PROTOCOL_H_

#include "flatbuffers/flatbuffers.h"

namespace Protocol {

struct ErrorCode;

enum Op {
  Op_C_S_VIEW_DIR_REQ = 0,
  Op_S_C_VIEW_DIR_ACK = 1,
  Op_C_S_PUSH_REQ = 2,
  Op_FILE_DIGEST_INFO = 3,
  Op_FILE_REBUILD_INFO = 4,
  Op_C_S_PULL_REQ = 5,
  Op_S_C_PULL_ACK = 6,
  Op_ERROR_CODE = 7,
  Op_MIN = Op_C_S_VIEW_DIR_REQ,
  Op_MAX = Op_ERROR_CODE
};

inline const Op (&EnumValuesOp())[8] {
  static const Op values[] = {
    Op_C_S_VIEW_DIR_REQ,
    Op_S_C_VIEW_DIR_ACK,
    Op_C_S_PUSH_REQ,
    Op_FILE_DIGEST_INFO,
    Op_FILE_REBUILD_INFO,
    Op_C_S_PULL_REQ,
    Op_S_C_PULL_ACK,
    Op_ERROR_CODE
  };
  return values;
}

inline const char * const *EnumNamesOp() {
  static const char * const names[] = {
    "C_S_VIEW_DIR_REQ",
    "S_C_VIEW_DIR_ACK",
    "C_S_PUSH_REQ",
    "FILE_DIGEST_INFO",
    "FILE_REBUILD_INFO",
    "C_S_PULL_REQ",
    "S_C_PULL_ACK",
    "ERROR_CODE",
    nullptr
  };
  return names;
}

inline const char *EnumNameOp(Op e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesOp()[index];
}

enum Err {
  Err_DO_NOT_REPLY = 0,
  Err_UNKNOWN = 1,
  Err_SUCCESS = 2,
  Err_VERIFY_FAILED = 3,
  Err_NO_SUCH_FILE = 4,
  Err_NO_SUCH_DIR = 5,
  Err_TASK_CONFLICT = 6,
  Err_TASK_INFO_INCOMPLETE = 7,
  Err_MIN = Err_DO_NOT_REPLY,
  Err_MAX = Err_TASK_INFO_INCOMPLETE
};

inline const Err (&EnumValuesErr())[8] {
  static const Err values[] = {
    Err_DO_NOT_REPLY,
    Err_UNKNOWN,
    Err_SUCCESS,
    Err_VERIFY_FAILED,
    Err_NO_SUCH_FILE,
    Err_NO_SUCH_DIR,
    Err_TASK_CONFLICT,
    Err_TASK_INFO_INCOMPLETE
  };
  return values;
}

inline const char * const *EnumNamesErr() {
  static const char * const names[] = {
    "DO_NOT_REPLY",
    "UNKNOWN",
    "SUCCESS",
    "VERIFY_FAILED",
    "NO_SUCH_FILE",
    "NO_SUCH_DIR",
    "TASK_CONFLICT",
    "TASK_INFO_INCOMPLETE",
    nullptr
  };
  return names;
}

inline const char *EnumNameErr(Err e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesErr()[index];
}

struct ErrorCode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_CODE = 4,
    VT_TIP = 6
  };
  Err Code() const {
    return static_cast<Err>(GetField<int16_t>(VT_CODE, 0));
  }
  const flatbuffers::String *TIP() const {
    return GetPointer<const flatbuffers::String *>(VT_TIP);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_CODE) &&
           VerifyOffset(verifier, VT_TIP) &&
           verifier.Verify(TIP()) &&
           verifier.EndTable();
  }
};

struct ErrorCodeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Code(Err Code) {
    fbb_.AddElement<int16_t>(ErrorCode::VT_CODE, static_cast<int16_t>(Code), 0);
  }
  void add_TIP(flatbuffers::Offset<flatbuffers::String> TIP) {
    fbb_.AddOffset(ErrorCode::VT_TIP, TIP);
  }
  explicit ErrorCodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ErrorCodeBuilder &operator=(const ErrorCodeBuilder &);
  flatbuffers::Offset<ErrorCode> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ErrorCode>(end);
    return o;
  }
};

inline flatbuffers::Offset<ErrorCode> CreateErrorCode(
    flatbuffers::FlatBufferBuilder &_fbb,
    Err Code = Err_DO_NOT_REPLY,
    flatbuffers::Offset<flatbuffers::String> TIP = 0) {
  ErrorCodeBuilder builder_(_fbb);
  builder_.add_TIP(TIP);
  builder_.add_Code(Code);
  return builder_.Finish();
}

inline flatbuffers::Offset<ErrorCode> CreateErrorCodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    Err Code = Err_DO_NOT_REPLY,
    const char *TIP = nullptr) {
  return Protocol::CreateErrorCode(
      _fbb,
      Code,
      TIP ? _fbb.CreateString(TIP) : 0);
}

inline const Protocol::ErrorCode *GetErrorCode(const void *buf) {
  return flatbuffers::GetRoot<Protocol::ErrorCode>(buf);
}

inline const Protocol::ErrorCode *GetSizePrefixedErrorCode(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Protocol::ErrorCode>(buf);
}

inline bool VerifyErrorCodeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Protocol::ErrorCode>(nullptr);
}

inline bool VerifySizePrefixedErrorCodeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Protocol::ErrorCode>(nullptr);
}

inline void FinishErrorCodeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Protocol::ErrorCode> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedErrorCodeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Protocol::ErrorCode> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Protocol

#endif  // FLATBUFFERS_GENERATED_CMD_PROTOCOL_H_
