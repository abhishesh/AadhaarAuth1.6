/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_auth_5f1_2e6_2eproto__INCLUDED
#define PROTOBUF_C_auth_5f1_2e6_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Pbuf__Pid Pbuf__Pid;
typedef struct _Pbuf__Demo Pbuf__Demo;
typedef struct _Pbuf__Pi Pbuf__Pi;
typedef struct _Pbuf__Pa Pbuf__Pa;
typedef struct _Pbuf__Pfa Pbuf__Pfa;
typedef struct _Pbuf__Dob Pbuf__Dob;
typedef struct _Pbuf__Bios Pbuf__Bios;
typedef struct _Pbuf__Bio Pbuf__Bio;
typedef struct _Pbuf__Pv Pbuf__Pv;


/* --- enums --- */

typedef enum _Pbuf__Pi__Gender {
  PBUF__PI__GENDER__F = 1,
  PBUF__PI__GENDER__M = 2,
  PBUF__PI__GENDER__T = 3
} Pbuf__Pi__Gender;
typedef enum _Pbuf__Pi__Dobt {
  PBUF__PI__DOBT__V = 1,
  PBUF__PI__DOBT__D = 2,
  PBUF__PI__DOBT__A = 3
} Pbuf__Pi__Dobt;
typedef enum _Pbuf__LangCode {
  PBUF__LANG_CODE__Assamese = 1,
  PBUF__LANG_CODE__Bengali = 2,
  PBUF__LANG_CODE__Gujarati = 5,
  PBUF__LANG_CODE__Hindi = 6,
  PBUF__LANG_CODE__Kannada = 7,
  PBUF__LANG_CODE__Malayalam = 11,
  PBUF__LANG_CODE__Manipuri = 12,
  PBUF__LANG_CODE__Marathi = 13,
  PBUF__LANG_CODE__Oriya = 15,
  PBUF__LANG_CODE__Punjabi = 16,
  PBUF__LANG_CODE__Tamil = 20,
  PBUF__LANG_CODE__Telugu = 21,
  PBUF__LANG_CODE__Urdu = 22
} Pbuf__LangCode;
typedef enum _Pbuf__Ms {
  PBUF__MS__E = 1,
  PBUF__MS__P = 2,
  PBUF__MS__F = 3
} Pbuf__Ms;
typedef enum _Pbuf__BioType {
  PBUF__BIO_TYPE__FMR = 0,
  PBUF__BIO_TYPE__FIR = 1,
  PBUF__BIO_TYPE__IIR = 2
} Pbuf__BioType;
typedef enum _Pbuf__Position {
  PBUF__POSITION__LEFT_IRIS = 1,
  PBUF__POSITION__RIGHT_IRIS = 2,
  PBUF__POSITION__LEFT_INDEX = 3,
  PBUF__POSITION__LEFT_LITTLE = 4,
  PBUF__POSITION__LEFT_MIDDLE = 5,
  PBUF__POSITION__LEFT_RING = 6,
  PBUF__POSITION__LEFT_THUMB = 7,
  PBUF__POSITION__RIGHT_INDEX = 8,
  PBUF__POSITION__RIGHT_LITTLE = 9,
  PBUF__POSITION__RIGHT_MIDDLE = 10,
  PBUF__POSITION__RIGHT_RING = 11,
  PBUF__POSITION__RIGHT_THUMB = 12
} Pbuf__Position;

/* --- messages --- */

struct  _Pbuf__Pid
{
  ProtobufCMessage base;
  char *ver;
  char *ts;
  Pbuf__Demo *demo;
  Pbuf__Bios *bios;
  Pbuf__Pv *pv;
  char *ts1;
  char *ts2;
  char *ts3;
  char *ts4;
};
#define PBUF__PID__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__pid__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _Pbuf__Demo
{
  ProtobufCMessage base;
  protobuf_c_boolean has_lang;
  Pbuf__LangCode lang;
  Pbuf__Pi *pi;
  Pbuf__Pa *pa;
  Pbuf__Pfa *pfa;
  char *name;
};
#define PBUF__DEMO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__demo__descriptor) \
    , 0,0, NULL, NULL, NULL, NULL }


struct  _Pbuf__Pi
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ms;
  Pbuf__Ms ms;
  char *name;
  protobuf_c_boolean has_mv;
  int32_t mv;
  char *lname;
  protobuf_c_boolean has_lmv;
  int32_t lmv;
  protobuf_c_boolean has_gender;
  Pbuf__Pi__Gender gender;
  Pbuf__Dob *dob;
  protobuf_c_boolean has_dobt;
  Pbuf__Pi__Dobt dobt;
  protobuf_c_boolean has_age;
  int32_t age;
  char *email;
  char *phone;
};
#define PBUF__PI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__pi__descriptor) \
    , 0,0, NULL, 0,0, NULL, 0,0, 0,0, NULL, 0,0, 0,0, NULL, NULL }


struct  _Pbuf__Pa
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ms;
  Pbuf__Ms ms;
  char *co;
  char *house;
  char *street;
  char *lm;
  char *loc;
  char *vtc;
  char *subdist;
  char *dist;
  char *state;
  char *pc;
  char *po;
};
#define PBUF__PA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__pa__descriptor) \
    , 0,0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _Pbuf__Pfa
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ms;
  Pbuf__Ms ms;
  char *av;
  protobuf_c_boolean has_mv;
  int32_t mv;
  char *lav;
  protobuf_c_boolean has_lmv;
  int32_t lmv;
};
#define PBUF__PFA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__pfa__descriptor) \
    , 0,0, NULL, 0,0, NULL, 0,0 }


struct  _Pbuf__Dob
{
  ProtobufCMessage base;
  int32_t year;
  protobuf_c_boolean has_month;
  int32_t month;
  protobuf_c_boolean has_day;
  int32_t day;
};
#define PBUF__DOB__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__dob__descriptor) \
    , 0, 0,0, 0,0 }


struct  _Pbuf__Bios
{
  ProtobufCMessage base;
  size_t n_bio;
  Pbuf__Bio **bio;
};
#define PBUF__BIOS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__bios__descriptor) \
    , 0,NULL }


struct  _Pbuf__Bio
{
  ProtobufCMessage base;
  Pbuf__BioType type;
  Pbuf__Position posh;
  ProtobufCBinaryData content;
};
#define PBUF__BIO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__bio__descriptor) \
    , 0, 0, {0,NULL} }


struct  _Pbuf__Pv
{
  ProtobufCMessage base;
  char *otp;
  char *pin;
};
#define PBUF__PV__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbuf__pv__descriptor) \
    , NULL, NULL }


/* Pbuf__Pid methods */
void   pbuf__pid__init
                     (Pbuf__Pid         *message);
size_t pbuf__pid__get_packed_size
                     (const Pbuf__Pid   *message);
size_t pbuf__pid__pack
                     (const Pbuf__Pid   *message,
                      uint8_t             *out);
size_t pbuf__pid__pack_to_buffer
                     (const Pbuf__Pid   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Pid *
       pbuf__pid__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__pid__free_unpacked
                     (Pbuf__Pid *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Demo methods */
void   pbuf__demo__init
                     (Pbuf__Demo         *message);
size_t pbuf__demo__get_packed_size
                     (const Pbuf__Demo   *message);
size_t pbuf__demo__pack
                     (const Pbuf__Demo   *message,
                      uint8_t             *out);
size_t pbuf__demo__pack_to_buffer
                     (const Pbuf__Demo   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Demo *
       pbuf__demo__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__demo__free_unpacked
                     (Pbuf__Demo *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Pi methods */
void   pbuf__pi__init
                     (Pbuf__Pi         *message);
size_t pbuf__pi__get_packed_size
                     (const Pbuf__Pi   *message);
size_t pbuf__pi__pack
                     (const Pbuf__Pi   *message,
                      uint8_t             *out);
size_t pbuf__pi__pack_to_buffer
                     (const Pbuf__Pi   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Pi *
       pbuf__pi__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__pi__free_unpacked
                     (Pbuf__Pi *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Pa methods */
void   pbuf__pa__init
                     (Pbuf__Pa         *message);
size_t pbuf__pa__get_packed_size
                     (const Pbuf__Pa   *message);
size_t pbuf__pa__pack
                     (const Pbuf__Pa   *message,
                      uint8_t             *out);
size_t pbuf__pa__pack_to_buffer
                     (const Pbuf__Pa   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Pa *
       pbuf__pa__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__pa__free_unpacked
                     (Pbuf__Pa *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Pfa methods */
void   pbuf__pfa__init
                     (Pbuf__Pfa         *message);
size_t pbuf__pfa__get_packed_size
                     (const Pbuf__Pfa   *message);
size_t pbuf__pfa__pack
                     (const Pbuf__Pfa   *message,
                      uint8_t             *out);
size_t pbuf__pfa__pack_to_buffer
                     (const Pbuf__Pfa   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Pfa *
       pbuf__pfa__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__pfa__free_unpacked
                     (Pbuf__Pfa *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Dob methods */
void   pbuf__dob__init
                     (Pbuf__Dob         *message);
size_t pbuf__dob__get_packed_size
                     (const Pbuf__Dob   *message);
size_t pbuf__dob__pack
                     (const Pbuf__Dob   *message,
                      uint8_t             *out);
size_t pbuf__dob__pack_to_buffer
                     (const Pbuf__Dob   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Dob *
       pbuf__dob__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__dob__free_unpacked
                     (Pbuf__Dob *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Bios methods */
void   pbuf__bios__init
                     (Pbuf__Bios         *message);
size_t pbuf__bios__get_packed_size
                     (const Pbuf__Bios   *message);
size_t pbuf__bios__pack
                     (const Pbuf__Bios   *message,
                      uint8_t             *out);
size_t pbuf__bios__pack_to_buffer
                     (const Pbuf__Bios   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Bios *
       pbuf__bios__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__bios__free_unpacked
                     (Pbuf__Bios *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Bio methods */
void   pbuf__bio__init
                     (Pbuf__Bio         *message);
size_t pbuf__bio__get_packed_size
                     (const Pbuf__Bio   *message);
size_t pbuf__bio__pack
                     (const Pbuf__Bio   *message,
                      uint8_t             *out);
size_t pbuf__bio__pack_to_buffer
                     (const Pbuf__Bio   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Bio *
       pbuf__bio__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__bio__free_unpacked
                     (Pbuf__Bio *message,
                      ProtobufCAllocator *allocator);
/* Pbuf__Pv methods */
void   pbuf__pv__init
                     (Pbuf__Pv         *message);
size_t pbuf__pv__get_packed_size
                     (const Pbuf__Pv   *message);
size_t pbuf__pv__pack
                     (const Pbuf__Pv   *message,
                      uint8_t             *out);
size_t pbuf__pv__pack_to_buffer
                     (const Pbuf__Pv   *message,
                      ProtobufCBuffer     *buffer);
Pbuf__Pv *
       pbuf__pv__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pbuf__pv__free_unpacked
                     (Pbuf__Pv *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Pbuf__Pid_Closure)
                 (const Pbuf__Pid *message,
                  void *closure_data);
typedef void (*Pbuf__Demo_Closure)
                 (const Pbuf__Demo *message,
                  void *closure_data);
typedef void (*Pbuf__Pi_Closure)
                 (const Pbuf__Pi *message,
                  void *closure_data);
typedef void (*Pbuf__Pa_Closure)
                 (const Pbuf__Pa *message,
                  void *closure_data);
typedef void (*Pbuf__Pfa_Closure)
                 (const Pbuf__Pfa *message,
                  void *closure_data);
typedef void (*Pbuf__Dob_Closure)
                 (const Pbuf__Dob *message,
                  void *closure_data);
typedef void (*Pbuf__Bios_Closure)
                 (const Pbuf__Bios *message,
                  void *closure_data);
typedef void (*Pbuf__Bio_Closure)
                 (const Pbuf__Bio *message,
                  void *closure_data);
typedef void (*Pbuf__Pv_Closure)
                 (const Pbuf__Pv *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    pbuf__lang_code__descriptor;
extern const ProtobufCEnumDescriptor    pbuf__ms__descriptor;
extern const ProtobufCEnumDescriptor    pbuf__bio_type__descriptor;
extern const ProtobufCEnumDescriptor    pbuf__position__descriptor;
extern const ProtobufCMessageDescriptor pbuf__pid__descriptor;
extern const ProtobufCMessageDescriptor pbuf__demo__descriptor;
extern const ProtobufCMessageDescriptor pbuf__pi__descriptor;
extern const ProtobufCEnumDescriptor    pbuf__pi__gender__descriptor;
extern const ProtobufCEnumDescriptor    pbuf__pi__dobt__descriptor;
extern const ProtobufCMessageDescriptor pbuf__pa__descriptor;
extern const ProtobufCMessageDescriptor pbuf__pfa__descriptor;
extern const ProtobufCMessageDescriptor pbuf__dob__descriptor;
extern const ProtobufCMessageDescriptor pbuf__bios__descriptor;
extern const ProtobufCMessageDescriptor pbuf__bio__descriptor;
extern const ProtobufCMessageDescriptor pbuf__pv__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_auth_5f1_2e6_2eproto__INCLUDED */
