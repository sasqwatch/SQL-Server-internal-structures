/*
 * PDB file: .\sqlwoa.pdb\4CE8EF4ABD884554BB82F25CD0993C196\sqlwoa.pdb
 * Image architecture: i386 (0x014c)
 *
 * Dumped by pdbex tool v0.11, by wbenny
 */

enum tagDOMNodeType;
enum _TP_CALLBACK_PRIORITY;
enum _tagPARSEACTION;
enum tagCALLCONV;
enum __MIDL_ICodeInstall_0001;
enum DISPLAYCONFIG_SCANLINE_ORDERING;
enum tagCHANGEKIND;
enum tagShutdownType;
enum tagBINDSTATUS;
enum _tagPSUACTION;
enum tagGLOBALOPT_EH_VALUES;
enum _URLZONEREG;
enum tagFUNCKIND;
enum VARENUM;
enum ReplacesCorHdrNumericDefines;
enum tagURLZONE;
enum tagTYSPEC;
enum _tagQUERYOPTION;
enum tagBINDSTRING;
enum tagVARKIND;
enum tagXMLEMEM_TYPE;
enum tagSYSKIND;
enum tagDESCKIND;
enum tagTYPEKIND;
enum PIDMSI_STATUS_VALUE;
enum tagApplicationType;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _EXCEPTION_DISPOSITION;
enum __enative_startup_state;
struct threadmbcinfostruct;
struct localeinfo_struct;
struct tagLC_ID;
struct threadlocaleinfostruct;
struct lconv;
struct __lc_time_data;
struct _TP_POOL;
struct _TP_CLEANUP_GROUP;
struct _ACTIVATION_CONTEXT;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CALLBACK_ENVIRON_V3;
struct _TEB;
struct _iobuf;
struct HWND__;
struct tagRECT;
struct tagTOOLINFOW;
struct HINSTANCE__;
struct tagMDICREATESTRUCTW;
struct tagLVITEMW;
struct tagLVCOLUMNW;
struct tagPOINT;
struct tagLVFINDINFOW;
struct _TREEITEM;
struct tagTVITEMW;
struct tagTVITEMEXW;
struct tagTVINSERTSTRUCTW;
struct _HD_ITEMW;
struct HBITMAP__;
struct tagTCITEMW;
struct tagTOOLINFOA;
struct TOOLINFOA_PRE_IE30;
struct tagMDICREATESTRUCTA;
struct tagLVITEMA;
struct tagLVCOLUMNA;
struct tagLVFINDINFOA;
struct tagTVITEMA;
struct tagTVITEMEXA;
struct tagTVINSERTSTRUCTA;
struct _HD_ITEMA;
struct tagTCITEMA;
struct HMENU__;
struct tagTEXTMETRICW;
struct HDC__;
struct tagTEXTMETRICA;
struct tagLOGFONTW;
struct tagLOGFONTA;
struct HRSRC__;
struct HFONT__;
struct tagWNDCLASSW;
struct HICON__;
struct HBRUSH__;
struct tagWNDCLASSA;
struct tagMSG;
struct HACCEL__;
struct tagSIZE;
struct _DOCINFOW;
struct _DOCINFOA;
union _ULARGE_INTEGER;
struct _OSVERSIONINFOW;
struct tagOFNW;
struct tagOFNA;
struct DLGTEMPLATE;
struct _SECURITY_ATTRIBUTES;
struct _OSVERSIONINFOA;
struct _GUID;
struct HKEY__;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_OPTIONAL_HEADER;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_SECTION_HEADER;
struct _IMAGE_NT_HEADERS;
struct _EXCEPTION_RECORD;
struct _FLOATING_SAVE_AREA;
struct _CONTEXT;
struct _EXCEPTION_POINTERS;
struct _FILETIME;
union FT;
union __m128;
union _LARGE_INTEGER;
union __m64;
struct IMAGE_LOAD_CONFIG_DIRECTORY32;
struct _LIST_ENTRY;
struct _TP_NBQ_GUARD;
struct _TP_TASK_CALLBACKS;
struct _TP_TASK;
struct LIST_ENTRY32;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _IO_STATUS_BLOCK;
struct LIST_ENTRY64;
struct _TP_DIRECT;

#include <pshpack1.h>
enum tagDOMNodeType
{
  NODE_INVALID = 0,
  NODE_ELEMENT = 1,
  NODE_ATTRIBUTE = 2,
  NODE_TEXT = 3,
  NODE_CDATA_SECTION = 4,
  NODE_ENTITY_REFERENCE = 5,
  NODE_ENTITY = 6,
  NODE_PROCESSING_INSTRUCTION = 7,
  NODE_COMMENT = 8,
  NODE_DOCUMENT = 9,
  NODE_DOCUMENT_TYPE = 10,
  NODE_DOCUMENT_FRAGMENT = 11,
  NODE_NOTATION = 12,
};

typedef enum _TP_CALLBACK_PRIORITY
{
  TP_CALLBACK_PRIORITY_HIGH = 0,
  TP_CALLBACK_PRIORITY_NORMAL = 1,
  TP_CALLBACK_PRIORITY_LOW = 2,
  TP_CALLBACK_PRIORITY_INVALID = 3,
} TP_CALLBACK_PRIORITY, *PTP_CALLBACK_PRIORITY;

typedef enum _tagPARSEACTION
{
  PARSE_CANONICALIZE = 1,
  PARSE_FRIENDLY = 2,
  PARSE_SECURITY_URL = 3,
  PARSE_ROOTDOCUMENT = 4,
  PARSE_DOCUMENT = 5,
  PARSE_ANCHOR = 6,
  PARSE_ENCODE_IS_UNESCAPE = 7,
  PARSE_DECODE_IS_ESCAPE = 8,
  PARSE_PATH_FROM_URL = 9,
  PARSE_URL_FROM_PATH = 10,
  PARSE_MIME = 11,
  PARSE_SERVER = 12,
  PARSE_SCHEMA = 13,
  PARSE_SITE = 14,
  PARSE_DOMAIN = 15,
  PARSE_LOCATION = 16,
  PARSE_SECURITY_DOMAIN = 17,
  PARSE_ESCAPE = 18,
  PARSE_UNESCAPE = 19,
} tagPARSEACTION, *PtagPARSEACTION;

enum tagCALLCONV
{
  CC_FASTCALL = 0,
  CC_CDECL = 1,
  CC_MSCPASCAL = 2,
  CC_PASCAL = 2,
  CC_MACPASCAL = 3,
  CC_STDCALL = 4,
  CC_FPFASTCALL = 5,
  CC_SYSCALL = 6,
  CC_MPWCDECL = 7,
  CC_MPWPASCAL = 8,
  CC_MAX = 9,
};

typedef enum __MIDL_ICodeInstall_0001
{
  CIP_DISK_FULL = 0,
  CIP_ACCESS_DENIED = 1,
  CIP_NEWER_VERSION_EXISTS = 2,
  CIP_OLDER_VERSION_EXISTS = 3,
  CIP_NAME_CONFLICT = 4,
  CIP_TRUST_VERIFICATION_COMPONENT_MISSING = 5,
  CIP_EXE_SELF_REGISTERATION_TIMEOUT = 6,
  CIP_UNSAFE_TO_ABORT = 7,
  CIP_NEED_REBOOT = 8,
  CIP_NEED_REBOOT_UI_PERMISSION = 9,
} _MIDL_ICodeInstall_0001, *P_MIDL_ICodeInstall_0001;

enum DISPLAYCONFIG_SCANLINE_ORDERING
{
  DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
  DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
  DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = -1,
};

enum tagCHANGEKIND
{
  CHANGEKIND_ADDMEMBER = 0,
  CHANGEKIND_DELETEMEMBER = 1,
  CHANGEKIND_SETNAMES = 2,
  CHANGEKIND_SETDOCUMENTATION = 3,
  CHANGEKIND_GENERAL = 4,
  CHANGEKIND_INVALIDATE = 5,
  CHANGEKIND_CHANGEFAILED = 6,
  CHANGEKIND_MAX = 7,
};

enum tagShutdownType
{
  IdleShutdown = 0,
  ForcedShutdown = 1,
};

enum tagBINDSTATUS
{
  BINDSTATUS_FINDINGRESOURCE = 1,
  BINDSTATUS_CONNECTING = 2,
  BINDSTATUS_REDIRECTING = 3,
  BINDSTATUS_BEGINDOWNLOADDATA = 4,
  BINDSTATUS_DOWNLOADINGDATA = 5,
  BINDSTATUS_ENDDOWNLOADDATA = 6,
  BINDSTATUS_BEGINDOWNLOADCOMPONENTS = 7,
  BINDSTATUS_INSTALLINGCOMPONENTS = 8,
  BINDSTATUS_ENDDOWNLOADCOMPONENTS = 9,
  BINDSTATUS_USINGCACHEDCOPY = 10,
  BINDSTATUS_SENDINGREQUEST = 11,
  BINDSTATUS_CLASSIDAVAILABLE = 12,
  BINDSTATUS_MIMETYPEAVAILABLE = 13,
  BINDSTATUS_CACHEFILENAMEAVAILABLE = 14,
  BINDSTATUS_BEGINSYNCOPERATION = 15,
  BINDSTATUS_ENDSYNCOPERATION = 16,
  BINDSTATUS_BEGINUPLOADDATA = 17,
  BINDSTATUS_UPLOADINGDATA = 18,
  BINDSTATUS_ENDUPLOADDATA = 19,
  BINDSTATUS_PROTOCOLCLASSID = 20,
  BINDSTATUS_ENCODING = 21,
  BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE = 22,
  BINDSTATUS_CLASSINSTALLLOCATION = 23,
  BINDSTATUS_DECODING = 24,
  BINDSTATUS_LOADINGMIMEHANDLER = 25,
  BINDSTATUS_CONTENTDISPOSITIONATTACH = 26,
  BINDSTATUS_FILTERREPORTMIMETYPE = 27,
  BINDSTATUS_CLSIDCANINSTANTIATE = 28,
  BINDSTATUS_IUNKNOWNAVAILABLE = 29,
  BINDSTATUS_DIRECTBIND = 30,
  BINDSTATUS_RAWMIMETYPE = 31,
  BINDSTATUS_PROXYDETECTING = 32,
  BINDSTATUS_ACCEPTRANGES = 33,
  BINDSTATUS_COOKIE_SENT = 34,
  BINDSTATUS_COMPACT_POLICY_RECEIVED = 35,
  BINDSTATUS_COOKIE_SUPPRESSED = 36,
  BINDSTATUS_COOKIE_STATE_UNKNOWN = 37,
  BINDSTATUS_COOKIE_STATE_ACCEPT = 38,
  BINDSTATUS_COOKIE_STATE_REJECT = 39,
  BINDSTATUS_COOKIE_STATE_PROMPT = 40,
  BINDSTATUS_COOKIE_STATE_LEASH = 41,
  BINDSTATUS_COOKIE_STATE_DOWNGRADE = 42,
  BINDSTATUS_POLICY_HREF = 43,
  BINDSTATUS_P3P_HEADER = 44,
  BINDSTATUS_SESSION_COOKIE_RECEIVED = 45,
  BINDSTATUS_PERSISTENT_COOKIE_RECEIVED = 46,
  BINDSTATUS_SESSION_COOKIES_ALLOWED = 47,
  BINDSTATUS_CACHECONTROL = 48,
  BINDSTATUS_CONTENTDISPOSITIONFILENAME = 49,
  BINDSTATUS_MIMETEXTPLAINMISMATCH = 50,
  BINDSTATUS_PUBLISHERAVAILABLE = 51,
  BINDSTATUS_DISPLAYNAMEAVAILABLE = 52,
  BINDSTATUS_SSLUX_NAVBLOCKED = 53,
  BINDSTATUS_SERVER_MIMETYPEAVAILABLE = 54,
  BINDSTATUS_SNIFFED_CLASSIDAVAILABLE = 55,
  BINDSTATUS_64BIT_PROGRESS = 56,
};

typedef enum _tagPSUACTION
{
  PSU_DEFAULT = 1,
  PSU_SECURITY_URL_ONLY = 2,
} tagPSUACTION, *PtagPSUACTION;

enum tagGLOBALOPT_EH_VALUES
{
  COMGLB_EXCEPTION_HANDLE = 0,
  COMGLB_EXCEPTION_DONOT_HANDLE_FATAL = 1,
  COMGLB_EXCEPTION_DONOT_HANDLE = 1,
  COMGLB_EXCEPTION_DONOT_HANDLE_ANY = 2,
};

typedef enum _URLZONEREG
{
  URLZONEREG_DEFAULT = 0,
  URLZONEREG_HKLM = 1,
  URLZONEREG_HKCU = 2,
} URLZONEREG, *PURLZONEREG;

enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0,
  FUNC_PUREVIRTUAL = 1,
  FUNC_NONVIRTUAL = 2,
  FUNC_STATIC = 3,
  FUNC_DISPATCH = 4,
};

enum VARENUM
{
  VT_EMPTY = 0,
  VT_NULL = 1,
  VT_I2 = 2,
  VT_I4 = 3,
  VT_R4 = 4,
  VT_R8 = 5,
  VT_CY = 6,
  VT_DATE = 7,
  VT_BSTR = 8,
  VT_DISPATCH = 9,
  VT_ERROR = 10,
  VT_BOOL = 11,
  VT_VARIANT = 12,
  VT_UNKNOWN = 13,
  VT_DECIMAL = 14,
  VT_I1 = 16,
  VT_UI1 = 17,
  VT_UI2 = 18,
  VT_UI4 = 19,
  VT_I8 = 20,
  VT_UI8 = 21,
  VT_INT = 22,
  VT_UINT = 23,
  VT_VOID = 24,
  VT_HRESULT = 25,
  VT_PTR = 26,
  VT_SAFEARRAY = 27,
  VT_CARRAY = 28,
  VT_USERDEFINED = 29,
  VT_LPSTR = 30,
  VT_LPWSTR = 31,
  VT_RECORD = 36,
  VT_INT_PTR = 37,
  VT_UINT_PTR = 38,
  VT_FILETIME = 64,
  VT_BLOB = 65,
  VT_STREAM = 66,
  VT_STORAGE = 67,
  VT_STREAMED_OBJECT = 68,
  VT_STORED_OBJECT = 69,
  VT_BLOB_OBJECT = 70,
  VT_CF = 71,
  VT_CLSID = 72,
  VT_VERSIONED_STREAM = 73,
  VT_BSTR_BLOB = 4095,
  VT_VECTOR = 4096,
  VT_ARRAY = 8192,
  VT_BYREF = 16384,
  VT_RESERVED = 0xffff8000,
  VT_ILLEGAL = 0xffffffff,
  VT_ILLEGALMASKED = 4095,
  VT_TYPEMASK = 4095,
};

enum ReplacesCorHdrNumericDefines
{
  COMIMAGE_FLAGS_ILONLY = 1,
  COMIMAGE_FLAGS_32BITREQUIRED = 2,
  COMIMAGE_FLAGS_IL_LIBRARY = 4,
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
  COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x10000,
  COR_VERSION_MAJOR_V2 = 2,
  COR_VERSION_MAJOR = 2,
  COR_VERSION_MINOR = 0,
  COR_DELETED_NAME_LENGTH = 8,
  COR_VTABLEGAP_NAME_LENGTH = 8,
  NATIVE_TYPE_MAX_CB = 1,
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,
  IMAGE_COR_MIH_METHODRVA = 1,
  IMAGE_COR_MIH_EHRVA = 2,
  IMAGE_COR_MIH_BASICBLOCK = 8,
  COR_VTABLE_32BIT = 1,
  COR_VTABLE_64BIT = 2,
  COR_VTABLE_FROM_UNMANAGED = 4,
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
  COR_VTABLE_CALL_MOST_DERIVED = 16,
  IMAGE_COR_EATJ_THUNK_SIZE = 32,
  MAX_CLASS_NAME = 1024,
  MAX_PACKAGE_NAME = 1024,
};

enum tagURLZONE
{
  URLZONE_INVALID = -1,
  URLZONE_PREDEFINED_MIN = 0,
  URLZONE_LOCAL_MACHINE = 0,
  URLZONE_INTRANET = 1,
  URLZONE_TRUSTED = 2,
  URLZONE_INTERNET = 3,
  URLZONE_UNTRUSTED = 4,
  URLZONE_PREDEFINED_MAX = 999,
  URLZONE_USER_MIN = 1000,
  URLZONE_USER_MAX = 10000,
};

enum tagTYSPEC
{
  TYSPEC_CLSID = 0,
  TYSPEC_FILEEXT = 1,
  TYSPEC_MIMETYPE = 2,
  TYSPEC_FILENAME = 3,
  TYSPEC_PROGID = 4,
  TYSPEC_PACKAGENAME = 5,
  TYSPEC_OBJECTID = 6,
};

typedef enum _tagQUERYOPTION
{
  QUERY_EXPIRATION_DATE = 1,
  QUERY_TIME_OF_LAST_CHANGE = 2,
  QUERY_CONTENT_ENCODING = 3,
  QUERY_CONTENT_TYPE = 4,
  QUERY_REFRESH = 5,
  QUERY_RECOMBINE = 6,
  QUERY_CAN_NAVIGATE = 7,
  QUERY_USES_NETWORK = 8,
  QUERY_IS_CACHED = 9,
  QUERY_IS_INSTALLEDENTRY = 10,
  QUERY_IS_CACHED_OR_MAPPED = 11,
  QUERY_USES_CACHE = 12,
  QUERY_IS_SECURE = 13,
  QUERY_IS_SAFE = 14,
  QUERY_USES_HISTORYFOLDER = 15,
} tagQUERYOPTION, *PtagQUERYOPTION;

enum tagBINDSTRING
{
  BINDSTRING_HEADERS = 1,
  BINDSTRING_ACCEPT_MIMES = 2,
  BINDSTRING_EXTRA_URL = 3,
  BINDSTRING_LANGUAGE = 4,
  BINDSTRING_USERNAME = 5,
  BINDSTRING_PASSWORD = 6,
  BINDSTRING_UA_PIXELS = 7,
  BINDSTRING_UA_COLOR = 8,
  BINDSTRING_OS = 9,
  BINDSTRING_USER_AGENT = 10,
  BINDSTRING_ACCEPT_ENCODINGS = 11,
  BINDSTRING_POST_COOKIE = 12,
  BINDSTRING_POST_DATA_MIME = 13,
  BINDSTRING_URL = 14,
  BINDSTRING_IID = 15,
  BINDSTRING_FLAG_BIND_TO_OBJECT = 16,
  BINDSTRING_PTR_BIND_CONTEXT = 17,
  BINDSTRING_XDR_ORIGIN = 18,
};

enum tagVARKIND
{
  VAR_PERINSTANCE = 0,
  VAR_STATIC = 1,
  VAR_CONST = 2,
  VAR_DISPATCH = 3,
};

enum tagXMLEMEM_TYPE
{
  XMLELEMTYPE_ELEMENT = 0,
  XMLELEMTYPE_TEXT = 1,
  XMLELEMTYPE_COMMENT = 2,
  XMLELEMTYPE_DOCUMENT = 3,
  XMLELEMTYPE_DTD = 4,
  XMLELEMTYPE_PI = 5,
  XMLELEMTYPE_OTHER = 6,
};

enum tagSYSKIND
{
  SYS_WIN16 = 0,
  SYS_WIN32 = 1,
  SYS_MAC = 2,
  SYS_WIN64 = 3,
};

enum tagDESCKIND
{
  DESCKIND_NONE = 0,
  DESCKIND_FUNCDESC = 1,
  DESCKIND_VARDESC = 2,
  DESCKIND_TYPECOMP = 3,
  DESCKIND_IMPLICITAPPOBJ = 4,
  DESCKIND_MAX = 5,
};

enum tagTYPEKIND
{
  TKIND_ENUM = 0,
  TKIND_RECORD = 1,
  TKIND_MODULE = 2,
  TKIND_INTERFACE = 3,
  TKIND_DISPATCH = 4,
  TKIND_COCLASS = 5,
  TKIND_ALIAS = 6,
  TKIND_UNION = 7,
  TKIND_MAX = 8,
};

enum PIDMSI_STATUS_VALUE
{
  PIDMSI_STATUS_NORMAL = 0,
  PIDMSI_STATUS_NEW = 1,
  PIDMSI_STATUS_PRELIM = 2,
  PIDMSI_STATUS_DRAFT = 3,
  PIDMSI_STATUS_INPROGRESS = 4,
  PIDMSI_STATUS_EDIT = 5,
  PIDMSI_STATUS_REVIEW = 6,
  PIDMSI_STATUS_PROOF = 7,
  PIDMSI_STATUS_FINAL = 8,
  PIDMSI_STATUS_OTHER = 32767,
};

enum tagApplicationType
{
  ServerApplication = 0,
  LibraryApplication = 1,
};

typedef enum _KSPIN_LOCK_QUEUE_NUMBER
{
  LockQueueUnusedSpare0 = 0,
  LockQueueExpansionLock = 1,
  LockQueueUnusedSpare2 = 2,
  LockQueueSystemSpaceLock = 3,
  LockQueueVacbLock = 4,
  LockQueueMasterLock = 5,
  LockQueueNonPagedPoolLock = 6,
  LockQueueIoCancelLock = 7,
  LockQueueWorkQueueLock = 8,
  LockQueueIoVpbLock = 9,
  LockQueueIoDatabaseLock = 10,
  LockQueueIoCompletionLock = 11,
  LockQueueNtfsStructLock = 12,
  LockQueueAfdWorkQueueLock = 13,
  LockQueueBcbLock = 14,
  LockQueueMmNonPagedPoolLock = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueMaximumLock = 17,
} KSPIN_LOCK_QUEUE_NUMBER, *PKSPIN_LOCK_QUEUE_NUMBER;

typedef enum _EXCEPTION_DISPOSITION
{
  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3,
} EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;

typedef enum __enative_startup_state
{
  __uninitialized = 0,
  __initializing = 1,
  __initialized = 2,
} _enative_startup_state, *P_enative_startup_state;

struct threadmbcinfostruct;

struct localeinfo_struct
{
  /* 0x0000 */ struct threadlocaleinfostruct* locinfo;
  /* 0x0004 */ struct threadmbcinfostruct* mbcinfo;
}; /* size: 0x0008 */

struct tagLC_ID
{
  /* 0x0000 */ unsigned short wLanguage;
  /* 0x0002 */ unsigned short wCountry;
  /* 0x0004 */ unsigned short wCodePage;
}; /* size: 0x0006 */

struct threadlocaleinfostruct
{
  /* 0x0000 */ int refcount;
  /* 0x0004 */ unsigned int lc_codepage;
  /* 0x0008 */ unsigned int lc_collate_cp;
  /* 0x000c */ unsigned long lc_handle[6];
  /* 0x0024 */ struct tagLC_ID lc_id[6];
  /* 0x0048 */ struct
  {
    /* 0x0048 */ char* locale;
    /* 0x004c */ unsigned short* wlocale;
    /* 0x0050 */ int* refcount;
    /* 0x0054 */ int* wrefcount;
  } /* size: 0x0010 */ lc_category[6];
  /* 0x00a8 */ int lc_clike;
  /* 0x00ac */ int mb_cur_max;
  /* 0x00b0 */ int* lconv_intl_refcount;
  /* 0x00b4 */ int* lconv_num_refcount;
  /* 0x00b8 */ int* lconv_mon_refcount;
  /* 0x00bc */ struct lconv* lconv;
  /* 0x00c0 */ int* ctype1_refcount;
  /* 0x00c4 */ unsigned short* ctype1;
  /* 0x00c8 */ const unsigned short* pctype;
  /* 0x00cc */ const unsigned char* pclmap;
  /* 0x00d0 */ const unsigned char* pcumap;
  /* 0x00d4 */ struct __lc_time_data* lc_time_curr;
}; /* size: 0x00d8 */

struct lconv;

struct __lc_time_data;

struct _TP_POOL;

struct _TP_CLEANUP_GROUP;

struct _ACTIVATION_CONTEXT;

struct _TP_CALLBACK_INSTANCE;

typedef struct _TP_CALLBACK_ENVIRON_V3
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _TP_POOL* Pool;
  /* 0x0008 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x000c */ void* CleanupGroupCancelCallback /* function */;
  /* 0x0010 */ void* RaceDll;
  /* 0x0014 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0018 */ void* FinalizationCallback /* function */;
  union
  {
    union
    {
      /* 0x001c */ unsigned long Flags;
      struct
      {
        struct /* bitfield */
        {
          /* 0x001c */ unsigned long LongFunction : 1; /* bit position: 0 */
          /* 0x001c */ unsigned long Persistent : 1; /* bit position: 1 */
          /* 0x001c */ unsigned long Private : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ s;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0020 */ enum _TP_CALLBACK_PRIORITY CallbackPriority;
  /* 0x0024 */ unsigned long Size;
} TP_CALLBACK_ENVIRON_V3, *PTP_CALLBACK_ENVIRON_V3; /* size: 0x0028 */

struct _TEB;

typedef struct _iobuf
{
  /* 0x0000 */ char* _ptr;
  /* 0x0004 */ int _cnt;
  /* 0x0008 */ char* _base;
  /* 0x000c */ int _flag;
  /* 0x0010 */ int _file;
  /* 0x0014 */ int _charbuf;
  /* 0x0018 */ int _bufsiz;
  /* 0x001c */ char* _tmpfname;
} iobuf, *Piobuf; /* size: 0x0020 */

struct HWND__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagTOOLINFOW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int uFlags;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ unsigned int uId;
  /* 0x0010 */ struct tagRECT rect;
  /* 0x0020 */ struct HINSTANCE__* hinst;
  /* 0x0024 */ unsigned short* lpszText;
  /* 0x0028 */ long lParam;
  /* 0x002c */ void* lpReserved;
}; /* size: 0x0030 */

struct HINSTANCE__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagMDICREATESTRUCTW
{
  /* 0x0000 */ const wchar_t* szClass;
  /* 0x0004 */ const wchar_t* szTitle;
  /* 0x0008 */ void* hOwner;
  /* 0x000c */ int x;
  /* 0x0010 */ int y;
  /* 0x0014 */ int cx;
  /* 0x0018 */ int cy;
  /* 0x001c */ unsigned long style;
  /* 0x0020 */ long lParam;
}; /* size: 0x0024 */

struct tagLVITEMW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int iItem;
  /* 0x0008 */ int iSubItem;
  /* 0x000c */ unsigned int state;
  /* 0x0010 */ unsigned int stateMask;
  /* 0x0014 */ unsigned short* pszText;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int iImage;
  /* 0x0020 */ long lParam;
  /* 0x0024 */ int iIndent;
  /* 0x0028 */ int iGroupId;
  /* 0x002c */ unsigned int cColumns;
  /* 0x0030 */ unsigned int* puColumns;
  /* 0x0034 */ int* piColFmt;
  /* 0x0038 */ int iGroup;
}; /* size: 0x003c */

struct tagLVCOLUMNW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int fmt;
  /* 0x0008 */ int cx;
  /* 0x000c */ unsigned short* pszText;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int iSubItem;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iOrder;
  /* 0x0020 */ int cxMin;
  /* 0x0024 */ int cxDefault;
  /* 0x0028 */ int cxIdeal;
}; /* size: 0x002c */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLVFINDINFOW
{
  /* 0x0000 */ unsigned int flags;
  /* 0x0004 */ const wchar_t* psz;
  /* 0x0008 */ long lParam;
  /* 0x000c */ struct tagPOINT pt;
  /* 0x0014 */ unsigned int vkDirection;
}; /* size: 0x0018 */

struct _TREEITEM;

struct tagTVITEMW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ struct _TREEITEM* hItem;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ unsigned short* pszText;
  /* 0x0014 */ int cchTextMax;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iSelectedImage;
  /* 0x0020 */ int cChildren;
  /* 0x0024 */ long lParam;
}; /* size: 0x0028 */

struct tagTVITEMEXW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ struct _TREEITEM* hItem;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ unsigned short* pszText;
  /* 0x0014 */ int cchTextMax;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iSelectedImage;
  /* 0x0020 */ int cChildren;
  /* 0x0024 */ long lParam;
  /* 0x0028 */ int iIntegral;
  /* 0x002c */ int iReserved;
}; /* size: 0x0030 */

struct tagTVINSERTSTRUCTW
{
  /* 0x0000 */ struct _TREEITEM* hParent;
  /* 0x0004 */ struct _TREEITEM* hInsertAfter;
  union
  {
    /* 0x0008 */ struct tagTVITEMEXW itemex;
    struct
    {
      /* 0x0008 */ struct tagTVITEMW item;
      /* 0x0030 */ long __PADDING__[2];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
}; /* size: 0x0038 */

typedef struct _HD_ITEMW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int cxy;
  /* 0x0008 */ unsigned short* pszText;
  /* 0x000c */ struct HBITMAP__* hbm;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int fmt;
  /* 0x0018 */ long lParam;
  /* 0x001c */ int iImage;
  /* 0x0020 */ int iOrder;
  /* 0x0024 */ unsigned int type;
  /* 0x0028 */ void* pvFilter;
  /* 0x002c */ unsigned int state;
} HD_ITEMW, *PHD_ITEMW; /* size: 0x0030 */

struct HBITMAP__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagTCITEMW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ unsigned long dwState;
  /* 0x0008 */ unsigned long dwStateMask;
  /* 0x000c */ unsigned short* pszText;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int iImage;
  /* 0x0018 */ long lParam;
}; /* size: 0x001c */

struct tagTOOLINFOA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int uFlags;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ unsigned int uId;
  /* 0x0010 */ struct tagRECT rect;
  /* 0x0020 */ struct HINSTANCE__* hinst;
  /* 0x0024 */ char* lpszText;
  /* 0x0028 */ long lParam;
  /* 0x002c */ void* lpReserved;
}; /* size: 0x0030 */

struct TOOLINFOA_PRE_IE30
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int uFlags;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ unsigned int uId;
  /* 0x0010 */ struct tagRECT rect;
  /* 0x0020 */ struct HINSTANCE__* hinst;
  /* 0x0024 */ char* lpszText;
}; /* size: 0x0028 */

struct tagMDICREATESTRUCTA
{
  /* 0x0000 */ const char* szClass;
  /* 0x0004 */ const char* szTitle;
  /* 0x0008 */ void* hOwner;
  /* 0x000c */ int x;
  /* 0x0010 */ int y;
  /* 0x0014 */ int cx;
  /* 0x0018 */ int cy;
  /* 0x001c */ unsigned long style;
  /* 0x0020 */ long lParam;
}; /* size: 0x0024 */

struct tagLVITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int iItem;
  /* 0x0008 */ int iSubItem;
  /* 0x000c */ unsigned int state;
  /* 0x0010 */ unsigned int stateMask;
  /* 0x0014 */ char* pszText;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int iImage;
  /* 0x0020 */ long lParam;
  /* 0x0024 */ int iIndent;
  /* 0x0028 */ int iGroupId;
  /* 0x002c */ unsigned int cColumns;
  /* 0x0030 */ unsigned int* puColumns;
  /* 0x0034 */ int* piColFmt;
  /* 0x0038 */ int iGroup;
}; /* size: 0x003c */

struct tagLVCOLUMNA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int fmt;
  /* 0x0008 */ int cx;
  /* 0x000c */ char* pszText;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int iSubItem;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iOrder;
  /* 0x0020 */ int cxMin;
  /* 0x0024 */ int cxDefault;
  /* 0x0028 */ int cxIdeal;
}; /* size: 0x002c */

struct tagLVFINDINFOA
{
  /* 0x0000 */ unsigned int flags;
  /* 0x0004 */ const char* psz;
  /* 0x0008 */ long lParam;
  /* 0x000c */ struct tagPOINT pt;
  /* 0x0014 */ unsigned int vkDirection;
}; /* size: 0x0018 */

struct tagTVITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ struct _TREEITEM* hItem;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ char* pszText;
  /* 0x0014 */ int cchTextMax;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iSelectedImage;
  /* 0x0020 */ int cChildren;
  /* 0x0024 */ long lParam;
}; /* size: 0x0028 */

struct tagTVITEMEXA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ struct _TREEITEM* hItem;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ char* pszText;
  /* 0x0014 */ int cchTextMax;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iSelectedImage;
  /* 0x0020 */ int cChildren;
  /* 0x0024 */ long lParam;
  /* 0x0028 */ int iIntegral;
  /* 0x002c */ int iReserved;
}; /* size: 0x0030 */

struct tagTVINSERTSTRUCTA
{
  /* 0x0000 */ struct _TREEITEM* hParent;
  /* 0x0004 */ struct _TREEITEM* hInsertAfter;
  union
  {
    /* 0x0008 */ struct tagTVITEMEXA itemex;
    struct
    {
      /* 0x0008 */ struct tagTVITEMA item;
      /* 0x0030 */ long __PADDING__[2];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
}; /* size: 0x0038 */

typedef struct _HD_ITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int cxy;
  /* 0x0008 */ char* pszText;
  /* 0x000c */ struct HBITMAP__* hbm;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int fmt;
  /* 0x0018 */ long lParam;
  /* 0x001c */ int iImage;
  /* 0x0020 */ int iOrder;
  /* 0x0024 */ unsigned int type;
  /* 0x0028 */ void* pvFilter;
  /* 0x002c */ unsigned int state;
} HD_ITEMA, *PHD_ITEMA; /* size: 0x0030 */

struct tagTCITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ unsigned long dwState;
  /* 0x0008 */ unsigned long dwStateMask;
  /* 0x000c */ char* pszText;
  /* 0x0010 */ int cchTextMax;
  /* 0x0014 */ int iImage;
  /* 0x0018 */ long lParam;
}; /* size: 0x001c */

struct HMENU__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagTEXTMETRICW
{
  /* 0x0000 */ long tmHeight;
  /* 0x0004 */ long tmAscent;
  /* 0x0008 */ long tmDescent;
  /* 0x000c */ long tmInternalLeading;
  /* 0x0010 */ long tmExternalLeading;
  /* 0x0014 */ long tmAveCharWidth;
  /* 0x0018 */ long tmMaxCharWidth;
  /* 0x001c */ long tmWeight;
  /* 0x0020 */ long tmOverhang;
  /* 0x0024 */ long tmDigitizedAspectX;
  /* 0x0028 */ long tmDigitizedAspectY;
  /* 0x002c */ wchar_t tmFirstChar;
  /* 0x002e */ wchar_t tmLastChar;
  /* 0x0030 */ wchar_t tmDefaultChar;
  /* 0x0032 */ wchar_t tmBreakChar;
  /* 0x0034 */ unsigned char tmItalic;
  /* 0x0035 */ unsigned char tmUnderlined;
  /* 0x0036 */ unsigned char tmStruckOut;
  /* 0x0037 */ unsigned char tmPitchAndFamily;
  /* 0x0038 */ unsigned char tmCharSet;
  /* 0x0039 */ char __PADDING__[3];
}; /* size: 0x003c */

struct HDC__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagTEXTMETRICA
{
  /* 0x0000 */ long tmHeight;
  /* 0x0004 */ long tmAscent;
  /* 0x0008 */ long tmDescent;
  /* 0x000c */ long tmInternalLeading;
  /* 0x0010 */ long tmExternalLeading;
  /* 0x0014 */ long tmAveCharWidth;
  /* 0x0018 */ long tmMaxCharWidth;
  /* 0x001c */ long tmWeight;
  /* 0x0020 */ long tmOverhang;
  /* 0x0024 */ long tmDigitizedAspectX;
  /* 0x0028 */ long tmDigitizedAspectY;
  /* 0x002c */ unsigned char tmFirstChar;
  /* 0x002d */ unsigned char tmLastChar;
  /* 0x002e */ unsigned char tmDefaultChar;
  /* 0x002f */ unsigned char tmBreakChar;
  /* 0x0030 */ unsigned char tmItalic;
  /* 0x0031 */ unsigned char tmUnderlined;
  /* 0x0032 */ unsigned char tmStruckOut;
  /* 0x0033 */ unsigned char tmPitchAndFamily;
  /* 0x0034 */ unsigned char tmCharSet;
  /* 0x0035 */ char __PADDING__[3];
}; /* size: 0x0038 */

struct tagLOGFONTW
{
  /* 0x0000 */ long lfHeight;
  /* 0x0004 */ long lfWidth;
  /* 0x0008 */ long lfEscapement;
  /* 0x000c */ long lfOrientation;
  /* 0x0010 */ long lfWeight;
  /* 0x0014 */ unsigned char lfItalic;
  /* 0x0015 */ unsigned char lfUnderline;
  /* 0x0016 */ unsigned char lfStrikeOut;
  /* 0x0017 */ unsigned char lfCharSet;
  /* 0x0018 */ unsigned char lfOutPrecision;
  /* 0x0019 */ unsigned char lfClipPrecision;
  /* 0x001a */ unsigned char lfQuality;
  /* 0x001b */ unsigned char lfPitchAndFamily;
  /* 0x001c */ wchar_t lfFaceName[32];
}; /* size: 0x005c */

struct tagLOGFONTA
{
  /* 0x0000 */ long lfHeight;
  /* 0x0004 */ long lfWidth;
  /* 0x0008 */ long lfEscapement;
  /* 0x000c */ long lfOrientation;
  /* 0x0010 */ long lfWeight;
  /* 0x0014 */ unsigned char lfItalic;
  /* 0x0015 */ unsigned char lfUnderline;
  /* 0x0016 */ unsigned char lfStrikeOut;
  /* 0x0017 */ unsigned char lfCharSet;
  /* 0x0018 */ unsigned char lfOutPrecision;
  /* 0x0019 */ unsigned char lfClipPrecision;
  /* 0x001a */ unsigned char lfQuality;
  /* 0x001b */ unsigned char lfPitchAndFamily;
  /* 0x001c */ char lfFaceName[32];
}; /* size: 0x003c */

struct HRSRC__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct HFONT__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagWNDCLASSW
{
  /* 0x0000 */ unsigned int style;
  /* 0x0004 */ void* lpfnWndProc /* function */;
  /* 0x0008 */ int cbClsExtra;
  /* 0x000c */ int cbWndExtra;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0014 */ struct HICON__* hIcon;
  /* 0x0018 */ struct HICON__* hCursor;
  /* 0x001c */ struct HBRUSH__* hbrBackground;
  /* 0x0020 */ const wchar_t* lpszMenuName;
  /* 0x0024 */ const wchar_t* lpszClassName;
}; /* size: 0x0028 */

struct HICON__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct HBRUSH__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagWNDCLASSA
{
  /* 0x0000 */ unsigned int style;
  /* 0x0004 */ void* lpfnWndProc /* function */;
  /* 0x0008 */ int cbClsExtra;
  /* 0x000c */ int cbWndExtra;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0014 */ struct HICON__* hIcon;
  /* 0x0018 */ struct HICON__* hCursor;
  /* 0x001c */ struct HBRUSH__* hbrBackground;
  /* 0x0020 */ const char* lpszMenuName;
  /* 0x0024 */ const char* lpszClassName;
}; /* size: 0x0028 */

struct tagMSG
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ unsigned int message;
  /* 0x0008 */ unsigned int wParam;
  /* 0x000c */ long lParam;
  /* 0x0010 */ unsigned long time;
  /* 0x0014 */ struct tagPOINT pt;
}; /* size: 0x001c */

struct HACCEL__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

typedef struct _DOCINFOW
{
  /* 0x0000 */ int cbSize;
  /* 0x0004 */ const wchar_t* lpszDocName;
  /* 0x0008 */ const wchar_t* lpszOutput;
  /* 0x000c */ const wchar_t* lpszDatatype;
  /* 0x0010 */ unsigned long fwType;
} DOCINFOW, *PDOCINFOW; /* size: 0x0014 */

typedef struct _DOCINFOA
{
  /* 0x0000 */ int cbSize;
  /* 0x0004 */ const char* lpszDocName;
  /* 0x0008 */ const char* lpszOutput;
  /* 0x000c */ const char* lpszDatatype;
  /* 0x0010 */ unsigned long fwType;
} DOCINFOA, *PDOCINFOA; /* size: 0x0014 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _OSVERSIONINFOW
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ wchar_t szCSDVersion[128];
} OSVERSIONINFOW, *POSVERSIONINFOW; /* size: 0x0114 */

struct tagOFNW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x000c */ const wchar_t* lpstrFilter;
  /* 0x0010 */ unsigned short* lpstrCustomFilter;
  /* 0x0014 */ unsigned long nMaxCustFilter;
  /* 0x0018 */ unsigned long nFilterIndex;
  /* 0x001c */ unsigned short* lpstrFile;
  /* 0x0020 */ unsigned long nMaxFile;
  /* 0x0024 */ unsigned short* lpstrFileTitle;
  /* 0x0028 */ unsigned long nMaxFileTitle;
  /* 0x002c */ const wchar_t* lpstrInitialDir;
  /* 0x0030 */ const wchar_t* lpstrTitle;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short nFileOffset;
  /* 0x003a */ unsigned short nFileExtension;
  /* 0x003c */ const wchar_t* lpstrDefExt;
  /* 0x0040 */ long lCustData;
  /* 0x0044 */ void* lpfnHook /* function */;
  /* 0x0048 */ const wchar_t* lpTemplateName;
  /* 0x004c */ void* pvReserved;
  /* 0x0050 */ unsigned long dwReserved;
  /* 0x0054 */ unsigned long FlagsEx;
}; /* size: 0x0058 */

struct tagOFNA
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x000c */ const char* lpstrFilter;
  /* 0x0010 */ char* lpstrCustomFilter;
  /* 0x0014 */ unsigned long nMaxCustFilter;
  /* 0x0018 */ unsigned long nFilterIndex;
  /* 0x001c */ char* lpstrFile;
  /* 0x0020 */ unsigned long nMaxFile;
  /* 0x0024 */ char* lpstrFileTitle;
  /* 0x0028 */ unsigned long nMaxFileTitle;
  /* 0x002c */ const char* lpstrInitialDir;
  /* 0x0030 */ const char* lpstrTitle;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short nFileOffset;
  /* 0x003a */ unsigned short nFileExtension;
  /* 0x003c */ const char* lpstrDefExt;
  /* 0x0040 */ long lCustData;
  /* 0x0044 */ void* lpfnHook /* function */;
  /* 0x0048 */ const char* lpTemplateName;
  /* 0x004c */ void* pvReserved;
  /* 0x0050 */ unsigned long dwReserved;
  /* 0x0054 */ unsigned long FlagsEx;
}; /* size: 0x0058 */

struct DLGTEMPLATE
{
  /* 0x0000 */ unsigned long style;
  /* 0x0004 */ unsigned long dwExtendedStyle;
  /* 0x0008 */ unsigned short cdit;
  /* 0x000a */ short x;
  /* 0x000c */ short y;
  /* 0x000e */ short cx;
  /* 0x0010 */ short cy;
}; /* size: 0x0012 */

typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ void* lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x000c */

typedef struct _OSVERSIONINFOA
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ char szCSDVersion[128];
} OSVERSIONINFOA, *POSVERSIONINFOA; /* size: 0x0094 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct HKEY__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

typedef struct _IMAGE_DOS_HEADER
{
  /* 0x0000 */ unsigned short e_magic;
  /* 0x0002 */ unsigned short e_cblp;
  /* 0x0004 */ unsigned short e_cp;
  /* 0x0006 */ unsigned short e_crlc;
  /* 0x0008 */ unsigned short e_cparhdr;
  /* 0x000a */ unsigned short e_minalloc;
  /* 0x000c */ unsigned short e_maxalloc;
  /* 0x000e */ unsigned short e_ss;
  /* 0x0010 */ unsigned short e_sp;
  /* 0x0012 */ unsigned short e_csum;
  /* 0x0014 */ unsigned short e_ip;
  /* 0x0016 */ unsigned short e_cs;
  /* 0x0018 */ unsigned short e_lfarlc;
  /* 0x001a */ unsigned short e_ovno;
  /* 0x001c */ unsigned short e_res[4];
  /* 0x0024 */ unsigned short e_oemid;
  /* 0x0026 */ unsigned short e_oeminfo;
  /* 0x0028 */ unsigned short e_res2[10];
  /* 0x003c */ long e_lfanew;
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER; /* size: 0x0040 */

typedef struct _IMAGE_DATA_DIRECTORY
{
  /* 0x0000 */ unsigned long VirtualAddress;
  /* 0x0004 */ unsigned long Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY; /* size: 0x0008 */

typedef struct _IMAGE_OPTIONAL_HEADER
{
  /* 0x0000 */ unsigned short Magic;
  /* 0x0002 */ unsigned char MajorLinkerVersion;
  /* 0x0003 */ unsigned char MinorLinkerVersion;
  /* 0x0004 */ unsigned long SizeOfCode;
  /* 0x0008 */ unsigned long SizeOfInitializedData;
  /* 0x000c */ unsigned long SizeOfUninitializedData;
  /* 0x0010 */ unsigned long AddressOfEntryPoint;
  /* 0x0014 */ unsigned long BaseOfCode;
  /* 0x0018 */ unsigned long BaseOfData;
  /* 0x001c */ unsigned long ImageBase;
  /* 0x0020 */ unsigned long SectionAlignment;
  /* 0x0024 */ unsigned long FileAlignment;
  /* 0x0028 */ unsigned short MajorOperatingSystemVersion;
  /* 0x002a */ unsigned short MinorOperatingSystemVersion;
  /* 0x002c */ unsigned short MajorImageVersion;
  /* 0x002e */ unsigned short MinorImageVersion;
  /* 0x0030 */ unsigned short MajorSubsystemVersion;
  /* 0x0032 */ unsigned short MinorSubsystemVersion;
  /* 0x0034 */ unsigned long Win32VersionValue;
  /* 0x0038 */ unsigned long SizeOfImage;
  /* 0x003c */ unsigned long SizeOfHeaders;
  /* 0x0040 */ unsigned long CheckSum;
  /* 0x0044 */ unsigned short Subsystem;
  /* 0x0046 */ unsigned short DllCharacteristics;
  /* 0x0048 */ unsigned long SizeOfStackReserve;
  /* 0x004c */ unsigned long SizeOfStackCommit;
  /* 0x0050 */ unsigned long SizeOfHeapReserve;
  /* 0x0054 */ unsigned long SizeOfHeapCommit;
  /* 0x0058 */ unsigned long LoaderFlags;
  /* 0x005c */ unsigned long NumberOfRvaAndSizes;
  /* 0x0060 */ struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER, *PIMAGE_OPTIONAL_HEADER; /* size: 0x00e0 */

typedef struct _IMAGE_FILE_HEADER
{
  /* 0x0000 */ unsigned short Machine;
  /* 0x0002 */ unsigned short NumberOfSections;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned long PointerToSymbolTable;
  /* 0x000c */ unsigned long NumberOfSymbols;
  /* 0x0010 */ unsigned short SizeOfOptionalHeader;
  /* 0x0012 */ unsigned short Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER; /* size: 0x0014 */

typedef struct _IMAGE_SECTION_HEADER
{
  /* 0x0000 */ unsigned char Name[8];
  union
  {
    union
    {
      /* 0x0008 */ unsigned long PhysicalAddress;
      /* 0x0008 */ unsigned long VirtualSize;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Misc;
  /* 0x000c */ unsigned long VirtualAddress;
  /* 0x0010 */ unsigned long SizeOfRawData;
  /* 0x0014 */ unsigned long PointerToRawData;
  /* 0x0018 */ unsigned long PointerToRelocations;
  /* 0x001c */ unsigned long PointerToLinenumbers;
  /* 0x0020 */ unsigned short NumberOfRelocations;
  /* 0x0022 */ unsigned short NumberOfLinenumbers;
  /* 0x0024 */ unsigned long Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER; /* size: 0x0028 */

typedef struct _IMAGE_NT_HEADERS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _IMAGE_FILE_HEADER FileHeader;
  /* 0x0018 */ struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
} IMAGE_NT_HEADERS, *PIMAGE_NT_HEADERS; /* size: 0x00f8 */

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ unsigned long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x000c */ void* ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ unsigned long ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0050 */

typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _EXCEPTION_POINTERS
{
  /* 0x0000 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0004 */ struct _CONTEXT* ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

union FT
{
  union
  {
    /* 0x0000 */ unsigned __int64 ft_scalar;
    /* 0x0000 */ struct _FILETIME ft_struct;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

typedef union __m128
{
  union
  {
    /* 0x0000 */ float m128_f32[4];
    /* 0x0000 */ unsigned __int64 m128_u64[2];
    /* 0x0000 */ char m128_i8[16];
    /* 0x0000 */ short m128_i16[8];
    /* 0x0000 */ int m128_i32[4];
    /* 0x0000 */ __int64 m128_i64[2];
    /* 0x0000 */ unsigned char m128_u8[16];
    /* 0x0000 */ unsigned short m128_u16[8];
    /* 0x0000 */ unsigned int m128_u32[4];
  }; /* size: 0x0010 */
} _m128, *P_m128; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union __m64
{
  union
  {
    /* 0x0000 */ unsigned __int64 m64_u64;
    /* 0x0000 */ float m64_f32[2];
    /* 0x0000 */ char m64_i8[8];
    /* 0x0000 */ short m64_i16[4];
    /* 0x0000 */ int m64_i32[2];
    /* 0x0000 */ __int64 m64_i64;
    /* 0x0000 */ unsigned char m64_u8[8];
    /* 0x0000 */ unsigned short m64_u16[4];
    /* 0x0000 */ unsigned int m64_u32[2];
  }; /* size: 0x0008 */
} _m64, *P_m64; /* size: 0x0008 */

struct IMAGE_LOAD_CONFIG_DIRECTORY32
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned long GlobalFlagsClear;
  /* 0x0010 */ unsigned long GlobalFlagsSet;
  /* 0x0014 */ unsigned long CriticalSectionDefaultTimeout;
  /* 0x0018 */ unsigned long DeCommitFreeBlockThreshold;
  /* 0x001c */ unsigned long DeCommitTotalFreeThreshold;
  /* 0x0020 */ unsigned long LockPrefixTable;
  /* 0x0024 */ unsigned long MaximumAllocationSize;
  /* 0x0028 */ unsigned long VirtualMemoryThreshold;
  /* 0x002c */ unsigned long ProcessHeapFlags;
  /* 0x0030 */ unsigned long ProcessAffinityMask;
  /* 0x0034 */ unsigned short CSDVersion;
  /* 0x0036 */ unsigned short Reserved1;
  /* 0x0038 */ unsigned long EditList;
  /* 0x003c */ unsigned long SecurityCookie;
  /* 0x0040 */ unsigned long SEHandlerTable;
  /* 0x0044 */ unsigned long SEHandlerCount;
}; /* size: 0x0048 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _TP_NBQ_GUARD
{
  /* 0x0000 */ struct _LIST_ENTRY GuardLinks;
  /* 0x0008 */ void* Guards[2];
} TP_NBQ_GUARD, *PTP_NBQ_GUARD; /* size: 0x0010 */

typedef struct _TP_TASK_CALLBACKS
{
  /* 0x0000 */ void* ExecuteCallback /* function */;
  /* 0x0004 */ void* Unposted /* function */;
} TP_TASK_CALLBACKS, *PTP_TASK_CALLBACKS; /* size: 0x0008 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned char IdealProcessor;
  /* 0x0009 */ char Padding_0[3];
  /* 0x000c */ struct _TP_NBQ_GUARD PostGuard;
  /* 0x001c */ void* NBQNode;
} TP_TASK, *PTP_TASK; /* size: 0x0020 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0004 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0008 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _TP_DIRECT
{
  /* 0x0000 */ void* Callback /* function */;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned char IdealProcessor;
  /* 0x0009 */ char __PADDING__[3];
} TP_DIRECT, *PTP_DIRECT; /* size: 0x000c */

#include <poppack.h>
