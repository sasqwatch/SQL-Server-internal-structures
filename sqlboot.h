/*
 * PDB file: .\sqlboot.pdb\E6B5336A41094B2C94F1602BB153B3E51\sqlboot.pdb
 * Image architecture: AMD64 (0x8664)
 *
 * Dumped by pdbex tool v0.11, by wbenny
 */

enum _tagPARSEACTION;
enum _USER_ACTIVITY_PRESENCE;
enum ReplacesCorHdrNumericDefines;
enum _TP_CALLBACK_PRIORITY;
enum _SQL_SVCS;
enum _TAG_UNNAMED_1;
enum _TAG_UNNAMED_2;
enum _TAG_UNNAMED_3;
enum __MIDL_ICodeInstall_0001;
enum _tagINTERNETFEATURELIST;
enum tagBINDSTATUS;
enum tagDOMNodeType;
enum tagCALLCONV;
enum tagCHANGEKIND;
enum tagShutdownType;
enum CWMO_FLAGS;
enum tagSYSKIND;
enum tagTYPEKIND;
enum tagCOWAIT_FLAGS;
enum _tagPSUACTION;
enum VARENUM;
enum _URLZONEREG;
enum tagTYSPEC;
enum tagBINDSTRING;
enum tagDESCKIND;
enum _tagQUERYOPTION;
enum tagURLZONE;
enum tagVARKIND;
enum tagXMLEMEM_TYPE;
enum tagFUNCKIND;
enum tagINVOKEKIND;
enum tagApplicationType;
struct LIST_ENTRY64;
enum PIDMSI_STATUS_VALUE;
enum tagCOINITBASE;
enum tagGLOBALOPT_EH_VALUES;
enum vc_attributes::YesNoMaybe;
enum vc_attributes::AccessType;
enum std::_Uninitialized;
struct _TEB_ACTIVE_FRAME;
enum SA_AttrTarget;
enum __enative_startup_state;
enum _EXCEPTION_DISPOSITION;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _NT_PRODUCT_TYPE;
enum _RTC_ErrorNumber;
struct _TP_POOL;
struct _TP_CLEANUP_GROUP;
struct _ACTIVATION_CONTEXT;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CALLBACK_ENVIRON_V1;
struct HINSTANCE__;
struct threadmbcinfostruct;
struct localeinfo_struct;
struct tagLC_ID;
struct threadlocaleinfostruct;
struct lconv;
struct __lc_time_data;
struct _FILETIME;
struct _INST_ID;
struct _SYSTEMTIME;
union _LARGE_INTEGER;
struct HKEY__;
struct _iobuf;
struct enckey;
struct SKUNameId;
struct _lldiv_t;
struct OSINFO1;
class COS;
struct _ldiv_t;
struct _GUID;
struct _SECURITY_ATTRIBUTES;
struct DynamicSetting;
struct _M128;
struct _M128A;
struct ConstantSetting;
struct _XMM_SAVE_AREA32;
struct tagPARAMDESC;
union tagCY;
struct tagDEC;
struct tagVARIANT;
struct tagPARAMDESCEX;
struct IUnknown;
struct IDispatch;
struct _XSAVE_FORMAT;
struct _CONTEXT;
struct tagSAFEARRAYBOUND;
struct tagSAFEARRAY;
union FT;
struct IRecordInfo;
union tagBINDPTR;
struct tagTYPEDESC;
struct tagIDLDESC;
struct tagELEMDESC;
struct tagFUNCDESC;
struct tagARRAYDESC;
struct tagVARDESC;
struct ITypeComp;
struct tagTLIBATTR;
struct tagEXCEPINFO;
struct _UNWIND_HISTORY_TABLE_ENTRY;
struct _GDI_TEB_BATCH;
union _ULARGE_INTEGER;
struct tagSTATSTG;
struct _LIST_ENTRY;
struct tagCABSTR;
union _UNWIND_CODE;
struct tagCACLSID;
struct _CLIENT_ID;
struct tagCADBL;
struct tagCAUB;
struct tagCACY;
struct _MEMORY_BASIC_INFORMATION;
struct _Wx86ThreadState;
struct LIST_ENTRY32;
struct IgnoredModule;
struct tagCAUL;
struct tagBSTRBLOB;
struct tagCAH;
struct _KSYSTEM_TIME;
struct _KUSER_SHARED_DATA;
struct tagCAUI;
struct tagCAFILETIME;
struct _GS_HANDLER_DATA;
struct tagDISPPARAMS;
struct tagBLOB;
struct tagCAC;
struct tagCAI;
struct tagCAL;
struct tagCAUH;
struct tagCAFLT;
struct tagCABOOL;
struct tagCASCODE;
struct tagCADATE;
struct tagCACLIPDATA;
struct tagCABSTRBLOB;
struct tagCALPSTR;
struct tagCALPWSTR;
struct tagCAPROPVARIANT;
struct tagPROPVARIANT;
struct tagCLIPDATA;
struct _RTL_CRITICAL_SECTION;
struct IStream;
struct _UNICODE_STRING;
struct _PEB;
struct IStorage;
struct ITypeInfo;
struct tagVersionedStream;
struct _ACTIVATION_CONTEXT_DATA;
struct __type_info_node;
struct VirtualValue;
struct _OSVERSIONINFOEXW;
class <CrtImplementationDetails>::NativeDll;
struct tagTYPEATTR;
struct _OSVERSIONINFOA;
struct ISequentialStream;
struct IEnumSTATSTG;
struct ITypeLib;
class std::_Mutex;
struct _SYSTEM_INFO;
class type_info;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_POINTERS;
struct _NT_TIB;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _RUNTIME_FUNCTION;
union __m128;
union __m64;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_OPTIONAL_HEADER64;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_SECTION_HEADER;
struct _IMAGE_NT_HEADERS64;
struct _PEB_FREE_BLOCK;
struct _UNWIND_INFO;
struct _UNWIND_HISTORY_TABLE;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _ACTIVATION_CONTEXT_STACK;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _PEB_LDR_DATA;
struct _DISPATCHER_CONTEXT;
struct _RTL_USER_PROCESS_PARAMETERS;
struct _ASSEMBLY_STORAGE_MAP;
struct _TEB;

#include <pshpack1.h>
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

typedef enum _USER_ACTIVITY_PRESENCE
{
  PowerUserPresent = 0,
  PowerUserNotPresent = 1,
  PowerUserInactive = 2,
  PowerUserMaximum = 3,
  PowerUserInvalid = 3,
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;

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
  COR_VERSION_MINOR = 5,
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

typedef enum _TP_CALLBACK_PRIORITY
{
  TP_CALLBACK_PRIORITY_HIGH = 0,
  TP_CALLBACK_PRIORITY_NORMAL = 1,
  TP_CALLBACK_PRIORITY_LOW = 2,
  TP_CALLBACK_PRIORITY_INVALID = 3,
  TP_CALLBACK_PRIORITY_COUNT = 3,
} TP_CALLBACK_PRIORITY, *PTP_CALLBACK_PRIORITY;

typedef enum _SQL_SVCS
{
  SVC_SQL = 0,
  SVC_AGENT = 1,
  SVC_SEARCH = 2,
  SVC_OLAP = 3,
  SVC_CLUSTER = 4,
  SVC_REPLICATION = 5,
  SVC_SETUP = 6,
  SVC_PROVIDERS = 7,
  SVC_REPORT = 8,
  SVC_NS = 9,
  SVC_DTS = 10,
  SVC_TOOLS = 11,
  SVC_BROWSER = 12,
  SVC_ADHELPER = 13,
  SVC_FDLAUNCHER = 14,
  SVC_BIDS = 15,
  SVC_DREPLAYCLIENT = 16,
  SVC_DREPLAYCONTROLLER = 17,
} SQL_SVCS, *PSQL_SVCS;

typedef enum
{
  e_SKU_DESKTOP = 0,
  e_SKU_EXPRESS = 1,
  e_SKU_EXPRESS_ADVANCED = 2,
  e_SKU_EXPRESS_TOOLS = 3,
  e_SKU_STANDARD = 4,
  e_SKU_WORKGROUP = 5,
  e_SKU_ENTERPRISE = 6,
  e_SKU_SBS = 7,
  e_SKU_OFFICE = 8,
  e_SKU_SQLMSO = 9,
  e_SKU_MSDE = 10,
  e_SKU_WMSDE = 11,
  e_SKU_DEVELOPER_DESKTOP = 12,
  e_SKU_DEVELOPER_STANDARD = 13,
  e_SKU_PERSONAL = 14,
  e_SKU_DEVELOPER = 15,
  e_SKU_EVAL = 16,
  e_SKU_SQLWID = 17,
  e_SKU_WEB = 18,
  e_SKU_DATA_CENTER = 19,
  e_SKU_PREMIUM = 20,
  e_SKU_BI = 21,
  e_SKU_ENTERPRISE_CORE = 22,
  MAX_SKU = 23,
} TAG_UNNAMED_1, *PTAG_UNNAMED_1;

typedef enum
{
  e_VALUE_LICENSE_MODE = 0,
  e_VALUE_LICENSE_LIMIT = 1,
  e_VALUE_USE_LICENSING = 2,
  e_VALUE_OS_SUPPORTED = 3,
  e_VALUE_GET_OS_TYPE = 4,
  e_VALUE_DISPLAY_PID = 5,
  e_VALUE_DAYS_LEFT = 6,
  e_VALUE_EXPIRED = 7,
  e_VALUE_VALIDATE = 8,
  e_VALUE_SKU = 9,
  e_VALUE_FAILOVER_CLST = 10,
  MAX_D_SETTING = 11,
} TAG_UNNAMED_2, *PTAG_UNNAMED_2;

typedef enum
{
  e_VALUE_DB_SIZE_LIMIT = 0,
  e_VALUE_ATTACHEDDB_LIMIT = 1,
  e_VALUE_MEMORY_LIMIT = 2,
  e_VALUE_TBU = 3,
  e_VALUE_SMP = 4,
  e_VALUE_CORE_LIMIT = 5,
  e_VALUE_REPLICATION = 6,
  e_VALUE_PACKAGE = 7,
  e_VALUE_ENGINE = 8,
  e_VALUE_INSTALL_FTS = 9,
  e_VALUE_FORCE_PERSEAT = 10,
  e_VALUE_LIC_DLG = 11,
  e_VALUE_MI_SUPPORT = 12,
  e_VALUE_GUI_TOOLS = 13,
  e_VALUE_OLAP_SERVICES = 14,
  e_VALUE_OLAP_ENGINE = 15,
  e_VALUE_AS_SELFSERVICE_ENGINE = 16,
  e_VALUE_AS_BISM_MODE = 17,
  e_VALUE_AS_MAXCPUS = 18,
  e_VALUE_AS_MAXCORES = 19,
  e_VALUE_AS_ADVANCED = 20,
  e_VALUE_DATA_MINING = 21,
  e_VALUE_ENGLISH_QUERY = 22,
  e_VALUE_DTS = 23,
  e_VALUE_DTS_GUI = 24,
  e_VALUE_DTS_EDITION = 25,
  e_VALUE_MULTILANG_GUI_SUPPORT = 26,
  e_VALUE_DEFAULT_PROTOCOL_LIST = 27,
  e_VALUE_NETWORK_PROTOCOLS_ENABLED = 28,
  e_VALUE_DISTRIBUTED_QUERIES_ENABLED = 29,
  e_VALUE_USER_INSTANCES_ENABLED = 30,
  e_VALUE_SQL_MAIL_ENABLED = 31,
  e_VALUE_XP_ACCESS_ENABLED = 32,
  e_VALUE_CLR_ENABLED = 33,
  e_VALUE_SOAP_SUPPORTED = 34,
  e_VALUE_SQLAGENT_ALLOWED = 35,
  e_VALUE_UCP_ALLOWED = 36,
  e_VALUE_MAKE_MANAGED_ALLOWED = 37,
  e_VALUE_DB_MIRRORING = 38,
  e_VALUE_BACKUP_COMPRESSION = 39,
  e_VALUE_SERVICE_BROKER_PAID = 40,
  e_VALUE_GROUP_COMMIT_ENABLED = 41,
  e_VALUE_HADR = 42,
  e_VALUE_LOG_SHIPPING = 43,
  e_VALUE_DREPLAYCLIENT_NUMBER = 44,
  e_VALUE_DREPLAYCLIENT = 45,
  e_VALUE_DREPLAYCONTROLLER = 46,
  e_VALUE_SUM_ENABLED = 47,
  e_VALUE_BACKUP_ENCRYPTION = 48,
  e_VALUE_HEKATON_ENABLED = 49,
  e_VALUE_MDS_ENABLED = 50,
  MAX_S_SETTING = 51,
} TAG_UNNAMED_3, *PTAG_UNNAMED_3;

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

typedef enum _tagINTERNETFEATURELIST
{
  FEATURE_OBJECT_CACHING = 0,
  FEATURE_ZONE_ELEVATION = 1,
  FEATURE_MIME_HANDLING = 2,
  FEATURE_MIME_SNIFFING = 3,
  FEATURE_WINDOW_RESTRICTIONS = 4,
  FEATURE_WEBOC_POPUPMANAGEMENT = 5,
  FEATURE_BEHAVIORS = 6,
  FEATURE_DISABLE_MK_PROTOCOL = 7,
  FEATURE_LOCALMACHINE_LOCKDOWN = 8,
  FEATURE_SECURITYBAND = 9,
  FEATURE_RESTRICT_ACTIVEXINSTALL = 10,
  FEATURE_VALIDATE_NAVIGATE_URL = 11,
  FEATURE_RESTRICT_FILEDOWNLOAD = 12,
  FEATURE_ADDON_MANAGEMENT = 13,
  FEATURE_PROTOCOL_LOCKDOWN = 14,
  FEATURE_HTTP_USERNAME_PASSWORD_DISABLE = 15,
  FEATURE_SAFE_BINDTOOBJECT = 16,
  FEATURE_UNC_SAVEDFILECHECK = 17,
  FEATURE_GET_URL_DOM_FILEPATH_UNENCODED = 18,
  FEATURE_TABBED_BROWSING = 19,
  FEATURE_SSLUX = 20,
  FEATURE_DISABLE_NAVIGATION_SOUNDS = 21,
  FEATURE_DISABLE_LEGACY_COMPRESSION = 22,
  FEATURE_FORCE_ADDR_AND_STATUS = 23,
  FEATURE_XMLHTTP = 24,
  FEATURE_DISABLE_TELNET_PROTOCOL = 25,
  FEATURE_FEEDS = 26,
  FEATURE_BLOCK_INPUT_PROMPTS = 27,
  FEATURE_ENTRY_COUNT = 28,
} tagINTERNETFEATURELIST, *PtagINTERNETFEATURELIST;

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
  BINDSTATUS_LAST = 56,
  BINDSTATUS_RESERVED_0 = 57,
  BINDSTATUS_RESERVED_1 = 58,
  BINDSTATUS_RESERVED_2 = 59,
  BINDSTATUS_RESERVED_3 = 60,
  BINDSTATUS_RESERVED_4 = 61,
  BINDSTATUS_RESERVED_5 = 62,
  BINDSTATUS_RESERVED_6 = 63,
  BINDSTATUS_RESERVED_7 = 64,
  BINDSTATUS_RESERVED_8 = 65,
  BINDSTATUS_RESERVED_9 = 66,
  BINDSTATUS_LAST_PRIVATE = 66,
};

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

enum CWMO_FLAGS
{
  CWMO_DISPATCH_CALLS = 1,
  CWMO_DISPATCH_WINDOW_MESSAGES = 2,
  REAL_CWMO_ENABLE_CALL_REENTRANCY = 1,
  CWMO_ENABLE_WINDOW_MESSAGES = 2,
  CWMO_ENABLE_CALL_REENTRANCY = 3,
};

enum tagSYSKIND
{
  SYS_WIN16 = 0,
  SYS_WIN32 = 1,
  SYS_MAC = 2,
  SYS_WIN64 = 3,
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

enum tagCOWAIT_FLAGS
{
  COWAIT_WAITALL = 1,
  COWAIT_ALERTABLE = 2,
  COWAIT_INPUTAVAILABLE = 4,
  COWAIT_DISPATCH_CALLS = 8,
  COWAIT_DISPATCH_WINDOW_MESSAGES = 16,
  REAL_COWAIT_ENABLECALLREENTRANCY = 8,
  COWAIT_ENABLEWINDOWMESSAGES = 16,
  COWAIT_ENABLECALLREENTRANCY = 24,
};

typedef enum _tagPSUACTION
{
  PSU_DEFAULT = 1,
  PSU_SECURITY_URL_ONLY = 2,
} tagPSUACTION, *PtagPSUACTION;

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

typedef enum _URLZONEREG
{
  URLZONEREG_DEFAULT = 0,
  URLZONEREG_HKLM = 1,
  URLZONEREG_HKCU = 2,
} URLZONEREG, *PURLZONEREG;

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
  BINDSTRING_DOWNLOADPATH = 19,
  BINDSTRING_ROOTDOC_URL = 20,
  BINDSTRING_INITIAL_FILENAME = 21,
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
  QUERY_IS_CACHED_AND_USABLE_OFFLINE = 16,
} tagQUERYOPTION, *PtagQUERYOPTION;

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

enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0,
  FUNC_PUREVIRTUAL = 1,
  FUNC_NONVIRTUAL = 2,
  FUNC_STATIC = 3,
  FUNC_DISPATCH = 4,
};

enum tagINVOKEKIND
{
  INVOKE_FUNC = 1,
  INVOKE_PROPERTYGET = 2,
  INVOKE_PROPERTYPUT = 4,
  INVOKE_PROPERTYPUTREF = 8,
};

enum tagApplicationType
{
  ServerApplication = 0,
  LibraryApplication = 1,
};

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

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

enum tagCOINITBASE
{
  COINITBASE_MULTITHREADED = 0,
};

enum tagGLOBALOPT_EH_VALUES
{
  COMGLB_EXCEPTION_HANDLE = 0,
  COMGLB_EXCEPTION_DONOT_HANDLE_FATAL = 1,
  COMGLB_EXCEPTION_DONOT_HANDLE = 1,
  COMGLB_EXCEPTION_DONOT_HANDLE_ANY = 2,
};

enum vc_attributes::YesNoMaybe
{
  No = 0xfff0001,
  Maybe = 0xfff0010,
  Yes = 0xfff0100,
};

enum vc_attributes::AccessType
{
  NoAccess = 0,
  Read = 1,
  Write = 2,
  ReadWrite = 3,
};

enum std::_Uninitialized
{
};

typedef struct _TEB_ACTIVE_FRAME
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ long Padding_0;
  /* 0x0008 */ struct _TEB_ACTIVE_FRAME* Previous;
  /* 0x0010 */ const struct _TEB_ACTIVE_FRAME_CONTEXT* Context;
} TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME; /* size: 0x0018 */

enum SA_AttrTarget
{
  SA_All = 0xffffffff,
  SA_Assembly = 1,
  SA_Class = 4,
  SA_Constructor = 32,
  SA_Delegate = 4096,
  SA_Enum = 16,
  SA_Event = 512,
  SA_Field = 256,
  SA_GenericParameter = 16384,
  SA_Interface = 1024,
  SA_Method = 64,
  SA_Module = 2,
  SA_Parameter = 2048,
  SA_Property = 128,
  SA_ReturnValue = 8192,
  SA_Struct = 8,
  SA_This = 0xffff8000,
};

typedef enum __enative_startup_state
{
  __uninitialized = 0,
  __initializing = 1,
  __initialized = 2,
} _enative_startup_state, *P_enative_startup_state;

typedef enum _EXCEPTION_DISPOSITION
{
  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3,
} EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE
{
  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2,
} ALTERNATIVE_ARCHITECTURE_TYPE, *PALTERNATIVE_ARCHITECTURE_TYPE;

typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef enum _RTC_ErrorNumber
{
  _RTC_CHKSTK = 0,
  _RTC_CVRT_LOSS_INFO = 1,
  _RTC_CORRUPT_STACK = 2,
  _RTC_UNINIT_LOCAL_USE = 3,
  _RTC_CORRUPTED_ALLOCA = 4,
  _RTC_ILLEGAL = 5,
} RTC_ErrorNumber, *PRTC_ErrorNumber;

struct _TP_POOL;

struct _TP_CLEANUP_GROUP;

struct _ACTIVATION_CONTEXT;

struct _TP_CALLBACK_INSTANCE;

typedef struct _TP_CALLBACK_ENVIRON_V1
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ long Padding_1;
  /* 0x0008 */ struct _TP_POOL* Pool;
  /* 0x0010 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x0018 */ void* CleanupGroupCancelCallback /* function */;
  /* 0x0020 */ void* RaceDll;
  /* 0x0028 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0030 */ void* FinalizationCallback /* function */;
  union
  {
    union
    {
      /* 0x0038 */ unsigned long Flags;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0038 */ unsigned long LongFunction : 1; /* bit position: 0 */
          /* 0x0038 */ unsigned long Persistent : 1; /* bit position: 1 */
          /* 0x0038 */ unsigned long Private : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ s;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x003c */ long __PADDING__[1];
} TP_CALLBACK_ENVIRON_V1, *PTP_CALLBACK_ENVIRON_V1; /* size: 0x0040 */

struct HINSTANCE__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

struct threadmbcinfostruct;

struct localeinfo_struct
{
  /* 0x0000 */ struct threadlocaleinfostruct* locinfo;
  /* 0x0008 */ struct threadmbcinfostruct* mbcinfo;
}; /* size: 0x0010 */

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
    /* 0x0050 */ unsigned short* wlocale;
    /* 0x0058 */ int* refcount;
    /* 0x0060 */ int* wrefcount;
  } /* size: 0x0020 */ lc_category[6];
  /* 0x0108 */ int lc_clike;
  /* 0x010c */ int mb_cur_max;
  /* 0x0110 */ int* lconv_intl_refcount;
  /* 0x0118 */ int* lconv_num_refcount;
  /* 0x0120 */ int* lconv_mon_refcount;
  /* 0x0128 */ struct lconv* lconv;
  /* 0x0130 */ int* ctype1_refcount;
  /* 0x0138 */ unsigned short* ctype1;
  /* 0x0140 */ const unsigned short* pctype;
  /* 0x0148 */ const unsigned char* pclmap;
  /* 0x0150 */ const unsigned char* pcumap;
  /* 0x0158 */ struct __lc_time_data* lc_time_curr;
}; /* size: 0x0160 */

struct lconv
{
  /* 0x0000 */ char* decimal_point;
  /* 0x0008 */ char* thousands_sep;
  /* 0x0010 */ char* grouping;
  /* 0x0018 */ char* int_curr_symbol;
  /* 0x0020 */ char* currency_symbol;
  /* 0x0028 */ char* mon_decimal_point;
  /* 0x0030 */ char* mon_thousands_sep;
  /* 0x0038 */ char* mon_grouping;
  /* 0x0040 */ char* positive_sign;
  /* 0x0048 */ char* negative_sign;
  /* 0x0050 */ char int_frac_digits;
  /* 0x0051 */ char frac_digits;
  /* 0x0052 */ char p_cs_precedes;
  /* 0x0053 */ char p_sep_by_space;
  /* 0x0054 */ char n_cs_precedes;
  /* 0x0055 */ char n_sep_by_space;
  /* 0x0056 */ char p_sign_posn;
  /* 0x0057 */ char n_sign_posn;
  /* 0x0058 */ unsigned short* _W_decimal_point;
  /* 0x0060 */ unsigned short* _W_thousands_sep;
  /* 0x0068 */ unsigned short* _W_int_curr_symbol;
  /* 0x0070 */ unsigned short* _W_currency_symbol;
  /* 0x0078 */ unsigned short* _W_mon_decimal_point;
  /* 0x0080 */ unsigned short* _W_mon_thousands_sep;
  /* 0x0088 */ unsigned short* _W_positive_sign;
  /* 0x0090 */ unsigned short* _W_negative_sign;
}; /* size: 0x0098 */

struct __lc_time_data;

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _INST_ID
{
  /* 0x0000 */ wchar_t sData[39];
  /* 0x004e */ char Padding_2[2];
  /* 0x0050 */ unsigned long dwSize;
} INST_ID, *PINST_ID; /* size: 0x0054 */

typedef struct _SYSTEMTIME
{
  /* 0x0000 */ unsigned short wYear;
  /* 0x0002 */ unsigned short wMonth;
  /* 0x0004 */ unsigned short wDayOfWeek;
  /* 0x0006 */ unsigned short wDay;
  /* 0x0008 */ unsigned short wHour;
  /* 0x000a */ unsigned short wMinute;
  /* 0x000c */ unsigned short wSecond;
  /* 0x000e */ unsigned short wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME; /* size: 0x0010 */

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

struct HKEY__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

typedef struct _iobuf
{
  /* 0x0000 */ char* _ptr;
  /* 0x0008 */ int _cnt;
  /* 0x000c */ long Padding_3;
  /* 0x0010 */ char* _base;
  /* 0x0018 */ int _flag;
  /* 0x001c */ int _file;
  /* 0x0020 */ int _charbuf;
  /* 0x0024 */ int _bufsiz;
  /* 0x0028 */ char* _tmpfname;
} iobuf, *Piobuf; /* size: 0x0030 */

struct enckey
{
  /* 0x0000 */ unsigned long keys[3];
}; /* size: 0x000c */

struct SKUNameId
{
  /* 0x0000 */ unsigned long id;
  /* 0x0004 */ long Padding_4;
  /* 0x0008 */ const char* guid;
}; /* size: 0x0010 */

typedef struct _lldiv_t
{
  /* 0x0000 */ __int64 quot;
  /* 0x0008 */ __int64 rem;
} lldiv_t, *Plldiv_t; /* size: 0x0010 */

struct OSINFO1
{
  /* 0x0000 */ unsigned long dwBase;
  /* 0x0004 */ unsigned long dwPlatformId;
  /* 0x0008 */ wchar_t* lpProductType;
  /* 0x0010 */ wchar_t* lpProductSuite[3];
}; /* size: 0x0028 */

class COS
{
  union
  {
    /* 0x0000 */ const struct OSINFO1 m_os[4];
    /* 0x0000 */ const unsigned long m_dwOSMask[32];
    /* 0x0000 */ const unsigned short m_wSuiteMask[32];
  }; /* size: 0x00a0 */
}; /* size: 0x0001 */

typedef struct _ldiv_t
{
  /* 0x0000 */ long quot;
  /* 0x0004 */ long rem;
} ldiv_t, *Pldiv_t; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ long Padding_5;
  /* 0x0008 */ void* lpSecurityDescriptor;
  /* 0x0010 */ int bInheritHandle;
  /* 0x0014 */ long __PADDING__[1];
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x0018 */

struct DynamicSetting
{
  /* 0x0000 */ unsigned long setting;
  /* 0x0004 */ long Padding_6;
  /* 0x0008 */ void* getter /* function */;
}; /* size: 0x0010 */

typedef struct _M128
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128, *PM128; /* size: 0x0010 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

struct ConstantSetting
{
  /* 0x0000 */ unsigned long setting;
  /* 0x0004 */ unsigned long values[23];
}; /* size: 0x0060 */

typedef struct _XMM_SAVE_AREA32
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128 FloatRegisters[8];
  /* 0x00a0 */ struct _M128 XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XMM_SAVE_AREA32, *PXMM_SAVE_AREA32; /* size: 0x0200 */

struct tagPARAMDESC
{
  /* 0x0000 */ struct tagPARAMDESCEX* pparamdescex;
  /* 0x0008 */ unsigned short wParamFlags;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

union tagCY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Lo;
      /* 0x0004 */ long Hi;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 int64;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct tagDEC
{
  /* 0x0000 */ unsigned short wReserved;
  union
  {
    struct
    {
      /* 0x0002 */ unsigned char scale;
      /* 0x0003 */ unsigned char sign;
    }; /* size: 0x0002 */
    /* 0x0002 */ unsigned short signscale;
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned long Hi32;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long Lo32;
      /* 0x000c */ unsigned long Mid32;
    }; /* size: 0x0008 */
    /* 0x0008 */ unsigned __int64 Lo64;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

struct tagVARIANT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short vt;
      /* 0x0002 */ unsigned short wReserved1;
      /* 0x0004 */ unsigned short wReserved2;
      /* 0x0006 */ unsigned short wReserved3;
      union
      {
        /* 0x0008 */ __int64 llVal;
        /* 0x0008 */ long lVal;
        /* 0x0008 */ unsigned char bVal;
        /* 0x0008 */ short iVal;
        /* 0x0008 */ float fltVal;
        /* 0x0008 */ double dblVal;
        /* 0x0008 */ short boolVal;
        /* 0x0008 */ long scode;
        /* 0x0008 */ union tagCY cyVal;
        /* 0x0008 */ double date;
        /* 0x0008 */ wchar_t* bstrVal;
        /* 0x0008 */ struct IUnknown* punkVal;
        /* 0x0008 */ struct IDispatch* pdispVal;
        /* 0x0008 */ struct tagSAFEARRAY* parray;
        /* 0x0008 */ unsigned char* pbVal;
        /* 0x0008 */ short* piVal;
        /* 0x0008 */ long* plVal;
        /* 0x0008 */ __int64* pllVal;
        /* 0x0008 */ float* pfltVal;
        /* 0x0008 */ double* pdblVal;
        /* 0x0008 */ short* pboolVal;
        /* 0x0008 */ long* pscode;
        /* 0x0008 */ union tagCY* pcyVal;
        /* 0x0008 */ double* pdate;
        /* 0x0008 */ wchar_t** pbstrVal;
        /* 0x0008 */ struct IUnknown** ppunkVal;
        /* 0x0008 */ struct IDispatch** ppdispVal;
        /* 0x0008 */ struct tagSAFEARRAY** pparray;
        /* 0x0008 */ struct tagVARIANT* pvarVal;
        /* 0x0008 */ void* byref;
        /* 0x0008 */ char cVal;
        /* 0x0008 */ unsigned short uiVal;
        /* 0x0008 */ unsigned long ulVal;
        /* 0x0008 */ unsigned __int64 ullVal;
        /* 0x0008 */ int intVal;
        /* 0x0008 */ unsigned int uintVal;
        /* 0x0008 */ struct tagDEC* pdecVal;
        /* 0x0008 */ char* pcVal;
        /* 0x0008 */ unsigned short* puiVal;
        /* 0x0008 */ unsigned long* pulVal;
        /* 0x0008 */ unsigned __int64* pullVal;
        /* 0x0008 */ int* pintVal;
        /* 0x0008 */ unsigned int* puintVal;
        struct
        {
          /* 0x0008 */ void* pvRecord;
          /* 0x0010 */ struct IRecordInfo* pRecInfo;
        }; /* size: 0x0010 */
      }; /* size: 0x0010 */
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ struct tagDEC decVal;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

struct tagPARAMDESCEX
{
  /* 0x0000 */ unsigned long cBytes;
  /* 0x0004 */ long Padding_7;
  /* 0x0008 */ struct tagVARIANT varDefaultValue;
}; /* size: 0x0020 */

struct IUnknown
{
}; /* size: 0x0008 */

struct IDispatch
{
}; /* size: 0x0008 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

struct tagSAFEARRAYBOUND
{
  /* 0x0000 */ unsigned long cElements;
  /* 0x0004 */ long lLbound;
}; /* size: 0x0008 */

struct tagSAFEARRAY
{
  /* 0x0000 */ unsigned short cDims;
  /* 0x0002 */ unsigned short fFeatures;
  /* 0x0004 */ unsigned long cbElements;
  /* 0x0008 */ unsigned long cLocks;
  /* 0x000c */ long Padding_8;
  /* 0x0010 */ void* pvData;
  /* 0x0018 */ struct tagSAFEARRAYBOUND rgsabound[1];
}; /* size: 0x0020 */

union FT
{
  union
  {
    /* 0x0000 */ unsigned __int64 ft_scalar;
    /* 0x0000 */ struct _FILETIME ft_struct;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct IRecordInfo
{
}; /* size: 0x0008 */

union tagBINDPTR
{
  union
  {
    /* 0x0000 */ struct tagFUNCDESC* lpfuncdesc;
    /* 0x0000 */ struct tagVARDESC* lpvardesc;
    /* 0x0000 */ struct ITypeComp* lptcomp;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct tagTYPEDESC
{
  union
  {
    /* 0x0000 */ struct tagTYPEDESC* lptdesc;
    /* 0x0000 */ struct tagARRAYDESC* lpadesc;
    /* 0x0000 */ unsigned long hreftype;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short vt;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagIDLDESC
{
  /* 0x0000 */ unsigned __int64 dwReserved;
  /* 0x0008 */ unsigned short wIDLFlags;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagELEMDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdesc;
  union
  {
    /* 0x0010 */ struct tagIDLDESC idldesc;
    /* 0x0010 */ struct tagPARAMDESC paramdesc;
  }; /* size: 0x0010 */
}; /* size: 0x0020 */

struct tagFUNCDESC
{
  /* 0x0000 */ long memid;
  /* 0x0004 */ long Padding_9;
  /* 0x0008 */ long* lprgscode;
  /* 0x0010 */ struct tagELEMDESC* lprgelemdescParam;
  /* 0x0018 */ enum tagFUNCKIND funckind;
  /* 0x001c */ enum tagINVOKEKIND invkind;
  /* 0x0020 */ enum tagCALLCONV callconv;
  /* 0x0024 */ short cParams;
  /* 0x0026 */ short cParamsOpt;
  /* 0x0028 */ short oVft;
  /* 0x002a */ short cScodes;
  /* 0x002c */ long Padding_10;
  /* 0x0030 */ struct tagELEMDESC elemdescFunc;
  /* 0x0050 */ unsigned short wFuncFlags;
  /* 0x0052 */ char __PADDING__[6];
}; /* size: 0x0058 */

struct tagARRAYDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdescElem;
  /* 0x0010 */ unsigned short cDims;
  /* 0x0012 */ char Padding_11[2];
  /* 0x0014 */ struct tagSAFEARRAYBOUND rgbounds[1];
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

struct tagVARDESC
{
  /* 0x0000 */ long memid;
  /* 0x0004 */ long Padding_12;
  /* 0x0008 */ wchar_t* lpstrSchema;
  union
  {
    /* 0x0010 */ unsigned long oInst;
    /* 0x0010 */ struct tagVARIANT* lpvarValue;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct tagELEMDESC elemdescVar;
  /* 0x0038 */ unsigned short wVarFlags;
  /* 0x003a */ char Padding_13[2];
  /* 0x003c */ enum tagVARKIND varkind;
}; /* size: 0x0040 */

struct ITypeComp
{
}; /* size: 0x0008 */

struct tagTLIBATTR
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ enum tagSYSKIND syskind;
  /* 0x0018 */ unsigned short wMajorVerNum;
  /* 0x001a */ unsigned short wMinorVerNum;
  /* 0x001c */ unsigned short wLibFlags;
  /* 0x001e */ char __PADDING__[2];
}; /* size: 0x0020 */

struct tagEXCEPINFO
{
  /* 0x0000 */ unsigned short wCode;
  /* 0x0002 */ unsigned short wReserved;
  /* 0x0004 */ long Padding_14;
  /* 0x0008 */ wchar_t* bstrSource;
  /* 0x0010 */ wchar_t* bstrDescription;
  /* 0x0018 */ wchar_t* bstrHelpFile;
  /* 0x0020 */ unsigned long dwHelpContext;
  /* 0x0024 */ long Padding_15;
  /* 0x0028 */ void* pvReserved;
  /* 0x0030 */ void* pfnDeferredFillIn /* function */;
  /* 0x0038 */ long scode;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

typedef struct _UNWIND_HISTORY_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 ImageBase;
  /* 0x0008 */ struct _RUNTIME_FUNCTION* FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY; /* size: 0x0010 */

typedef struct _GDI_TEB_BATCH
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ long Padding_16;
  /* 0x0008 */ unsigned __int64 HDC;
  /* 0x0010 */ unsigned long Buffer[310];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH; /* size: 0x04e8 */

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

struct tagSTATSTG
{
  /* 0x0000 */ wchar_t* pwcsName;
  /* 0x0008 */ unsigned long type;
  /* 0x000c */ long Padding_17;
  /* 0x0010 */ union _ULARGE_INTEGER cbSize;
  /* 0x0018 */ struct _FILETIME mtime;
  /* 0x0020 */ struct _FILETIME ctime;
  /* 0x0028 */ struct _FILETIME atime;
  /* 0x0030 */ unsigned long grfMode;
  /* 0x0034 */ unsigned long grfLocksSupported;
  /* 0x0038 */ struct _GUID clsid;
  /* 0x0048 */ unsigned long grfStateBits;
  /* 0x004c */ unsigned long reserved;
}; /* size: 0x0050 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

struct tagCABSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_18;
  /* 0x0008 */ wchar_t** pElems;
}; /* size: 0x0010 */

typedef union _UNWIND_CODE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char CodeOffset;
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char UnwindOp : 4; /* bit position: 0 */
        /* 0x0001 */ unsigned char OpInfo : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short FrameOffset;
  }; /* size: 0x0002 */
} UNWIND_CODE, *PUNWIND_CODE; /* size: 0x0002 */

struct tagCACLSID
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_19;
  /* 0x0008 */ struct _GUID* pElems;
}; /* size: 0x0010 */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

struct tagCADBL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_20;
  /* 0x0008 */ double* pElems;
}; /* size: 0x0010 */

struct tagCAUB
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_21;
  /* 0x0008 */ unsigned char* pElems;
}; /* size: 0x0010 */

struct tagCACY
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_22;
  /* 0x0008 */ union tagCY* pElems;
}; /* size: 0x0010 */

typedef struct _MEMORY_BASIC_INFORMATION
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ void* AllocationBase;
  /* 0x0010 */ unsigned long AllocationProtect;
  /* 0x0014 */ long Padding_23;
  /* 0x0018 */ unsigned __int64 RegionSize;
  /* 0x0020 */ unsigned long State;
  /* 0x0024 */ unsigned long Protect;
  /* 0x0028 */ unsigned long Type;
  /* 0x002c */ long __PADDING__[1];
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION; /* size: 0x0030 */

typedef struct _Wx86ThreadState
{
  /* 0x0000 */ unsigned long* CallBx86Eip;
  /* 0x0008 */ void* DeallocationCpu;
  /* 0x0010 */ unsigned char UseKnownWx86Dll;
  /* 0x0011 */ char OleStubInvoked;
  /* 0x0012 */ char __PADDING__[6];
} Wx86ThreadState, *PWx86ThreadState; /* size: 0x0018 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

struct IgnoredModule
{
  /* 0x0000 */ const wchar_t* pszModule;
  /* 0x0008 */ unsigned long cchModule;
  /* 0x000c */ long __PADDING__[1];
}; /* size: 0x0010 */

struct tagCAUL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_24;
  /* 0x0008 */ unsigned long* pElems;
}; /* size: 0x0010 */

struct tagBSTRBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ long Padding_25;
  /* 0x0008 */ unsigned char* pData;
}; /* size: 0x0010 */

struct tagCAH
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_26;
  /* 0x0008 */ union _LARGE_INTEGER* pElems;
}; /* size: 0x0010 */

typedef struct _KSYSTEM_TIME
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long High1Time;
  /* 0x0008 */ long High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME; /* size: 0x000c */

typedef struct _KUSER_SHARED_DATA
{
  /* 0x0000 */ unsigned long TickCountLowDeprecated;
  /* 0x0004 */ unsigned long TickCountMultiplier;
  /* 0x0008 */ volatile struct _KSYSTEM_TIME InterruptTime;
  /* 0x0014 */ volatile struct _KSYSTEM_TIME SystemTime;
  /* 0x0020 */ volatile struct _KSYSTEM_TIME TimeZoneBias;
  /* 0x002c */ unsigned short ImageNumberLow;
  /* 0x002e */ unsigned short ImageNumberHigh;
  /* 0x0030 */ wchar_t NtSystemRoot[260];
  /* 0x0238 */ unsigned long MaxStackTraceDepth;
  /* 0x023c */ unsigned long CryptoExponent;
  /* 0x0240 */ unsigned long TimeZoneId;
  /* 0x0244 */ unsigned long LargePageMinimum;
  /* 0x0248 */ unsigned long Reserved2[7];
  /* 0x0264 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0268 */ unsigned char ProductTypeIsValid;
  /* 0x0269 */ char Padding_27[3];
  /* 0x026c */ unsigned long NtMajorVersion;
  /* 0x0270 */ unsigned long NtMinorVersion;
  /* 0x0274 */ unsigned char ProcessorFeatures[64];
  /* 0x02b4 */ unsigned long Reserved1;
  /* 0x02b8 */ unsigned long Reserved3;
  /* 0x02bc */ volatile unsigned long TimeSlip;
  /* 0x02c0 */ enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  /* 0x02c4 */ long Padding_28;
  /* 0x02c8 */ union _LARGE_INTEGER SystemExpirationDate;
  /* 0x02d0 */ unsigned long SuiteMask;
  /* 0x02d4 */ unsigned char KdDebuggerEnabled;
  /* 0x02d5 */ char Padding_29[3];
  /* 0x02d8 */ volatile unsigned long ActiveConsoleId;
  /* 0x02dc */ volatile unsigned long DismountCount;
  /* 0x02e0 */ unsigned long ComPlusPackage;
  /* 0x02e4 */ unsigned long LastSystemRITEventTickCount;
  /* 0x02e8 */ unsigned long NumberOfPhysicalPages;
  /* 0x02ec */ unsigned char SafeBootMode;
  /* 0x02ed */ char Padding_30[3];
  /* 0x02f0 */ unsigned long TraceLogging;
  /* 0x02f4 */ long Padding_31;
  /* 0x02f8 */ unsigned __int64 Fill0;
  /* 0x0300 */ unsigned __int64 SystemCall[4];
  union
  {
    /* 0x0320 */ volatile struct _KSYSTEM_TIME TickCount;
    struct
    {
      /* 0x0320 */ volatile unsigned __int64 TickCountQuad;
      /* 0x0328 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA; /* size: 0x0330 */

struct tagCAUI
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_32;
  /* 0x0008 */ unsigned short* pElems;
}; /* size: 0x0010 */

struct tagCAFILETIME
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_33;
  /* 0x0008 */ struct _FILETIME* pElems;
}; /* size: 0x0010 */

typedef struct _GS_HANDLER_DATA
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long EHandler : 1; /* bit position: 0 */
          /* 0x0000 */ unsigned long UHandler : 1; /* bit position: 1 */
          /* 0x0000 */ unsigned long HasAlignment : 1; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
      /* 0x0000 */ long CookieOffset;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0004 */ long AlignedBaseOffset;
  /* 0x0008 */ long Alignment;
} GS_HANDLER_DATA, *PGS_HANDLER_DATA; /* size: 0x000c */

struct tagDISPPARAMS
{
  /* 0x0000 */ struct tagVARIANT* rgvarg;
  /* 0x0008 */ long* rgdispidNamedArgs;
  /* 0x0010 */ unsigned int cArgs;
  /* 0x0014 */ unsigned int cNamedArgs;
}; /* size: 0x0018 */

struct tagBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ long Padding_34;
  /* 0x0008 */ unsigned char* pBlobData;
}; /* size: 0x0010 */

struct tagCAC
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_35;
  /* 0x0008 */ char* pElems;
}; /* size: 0x0010 */

struct tagCAI
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_36;
  /* 0x0008 */ short* pElems;
}; /* size: 0x0010 */

struct tagCAL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_37;
  /* 0x0008 */ long* pElems;
}; /* size: 0x0010 */

struct tagCAUH
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_38;
  /* 0x0008 */ union _ULARGE_INTEGER* pElems;
}; /* size: 0x0010 */

struct tagCAFLT
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_39;
  /* 0x0008 */ float* pElems;
}; /* size: 0x0010 */

struct tagCABOOL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_40;
  /* 0x0008 */ short* pElems;
}; /* size: 0x0010 */

struct tagCASCODE
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_41;
  /* 0x0008 */ long* pElems;
}; /* size: 0x0010 */

struct tagCADATE
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_42;
  /* 0x0008 */ double* pElems;
}; /* size: 0x0010 */

struct tagCACLIPDATA
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_43;
  /* 0x0008 */ struct tagCLIPDATA* pElems;
}; /* size: 0x0010 */

struct tagCABSTRBLOB
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_44;
  /* 0x0008 */ struct tagBSTRBLOB* pElems;
}; /* size: 0x0010 */

struct tagCALPSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_45;
  /* 0x0008 */ char** pElems;
}; /* size: 0x0010 */

struct tagCALPWSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_46;
  /* 0x0008 */ wchar_t** pElems;
}; /* size: 0x0010 */

struct tagCAPROPVARIANT
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0004 */ long Padding_47;
  /* 0x0008 */ struct tagPROPVARIANT* pElems;
}; /* size: 0x0010 */

struct tagPROPVARIANT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short vt;
      /* 0x0002 */ unsigned short wReserved1;
      /* 0x0004 */ unsigned short wReserved2;
      /* 0x0006 */ unsigned short wReserved3;
      union
      {
        /* 0x0008 */ char cVal;
        /* 0x0008 */ unsigned char bVal;
        /* 0x0008 */ short iVal;
        /* 0x0008 */ unsigned short uiVal;
        /* 0x0008 */ long lVal;
        /* 0x0008 */ unsigned long ulVal;
        /* 0x0008 */ int intVal;
        /* 0x0008 */ unsigned int uintVal;
        /* 0x0008 */ union _LARGE_INTEGER hVal;
        /* 0x0008 */ union _ULARGE_INTEGER uhVal;
        /* 0x0008 */ float fltVal;
        /* 0x0008 */ double dblVal;
        /* 0x0008 */ short boolVal;
        /* 0x0008 */ long scode;
        /* 0x0008 */ union tagCY cyVal;
        /* 0x0008 */ double date;
        /* 0x0008 */ struct _FILETIME filetime;
        /* 0x0008 */ struct _GUID* puuid;
        /* 0x0008 */ struct tagCLIPDATA* pclipdata;
        /* 0x0008 */ wchar_t* bstrVal;
        /* 0x0008 */ struct tagBSTRBLOB bstrblobVal;
        /* 0x0008 */ struct tagBLOB blob;
        /* 0x0008 */ char* pszVal;
        /* 0x0008 */ wchar_t* pwszVal;
        /* 0x0008 */ struct IUnknown* punkVal;
        /* 0x0008 */ struct IDispatch* pdispVal;
        /* 0x0008 */ struct IStream* pStream;
        /* 0x0008 */ struct IStorage* pStorage;
        /* 0x0008 */ struct tagVersionedStream* pVersionedStream;
        /* 0x0008 */ struct tagSAFEARRAY* parray;
        /* 0x0008 */ struct tagCAC cac;
        /* 0x0008 */ struct tagCAUB caub;
        /* 0x0008 */ struct tagCAI cai;
        /* 0x0008 */ struct tagCAUI caui;
        /* 0x0008 */ struct tagCAL cal;
        /* 0x0008 */ struct tagCAUL caul;
        /* 0x0008 */ struct tagCAH cah;
        /* 0x0008 */ struct tagCAUH cauh;
        /* 0x0008 */ struct tagCAFLT caflt;
        /* 0x0008 */ struct tagCADBL cadbl;
        /* 0x0008 */ struct tagCABOOL cabool;
        /* 0x0008 */ struct tagCASCODE cascode;
        /* 0x0008 */ struct tagCACY cacy;
        /* 0x0008 */ struct tagCADATE cadate;
        /* 0x0008 */ struct tagCAFILETIME cafiletime;
        /* 0x0008 */ struct tagCACLSID cauuid;
        /* 0x0008 */ struct tagCACLIPDATA caclipdata;
        /* 0x0008 */ struct tagCABSTR cabstr;
        /* 0x0008 */ struct tagCABSTRBLOB cabstrblob;
        /* 0x0008 */ struct tagCALPSTR calpstr;
        /* 0x0008 */ struct tagCALPWSTR calpwstr;
        /* 0x0008 */ struct tagCAPROPVARIANT capropvar;
        /* 0x0008 */ char* pcVal;
        /* 0x0008 */ unsigned char* pbVal;
        /* 0x0008 */ short* piVal;
        /* 0x0008 */ unsigned short* puiVal;
        /* 0x0008 */ long* plVal;
        /* 0x0008 */ unsigned long* pulVal;
        /* 0x0008 */ int* pintVal;
        /* 0x0008 */ unsigned int* puintVal;
        /* 0x0008 */ float* pfltVal;
        /* 0x0008 */ double* pdblVal;
        /* 0x0008 */ short* pboolVal;
        /* 0x0008 */ struct tagDEC* pdecVal;
        /* 0x0008 */ long* pscode;
        /* 0x0008 */ union tagCY* pcyVal;
        /* 0x0008 */ double* pdate;
        /* 0x0008 */ wchar_t** pbstrVal;
        /* 0x0008 */ struct IUnknown** ppunkVal;
        /* 0x0008 */ struct IDispatch** ppdispVal;
        /* 0x0008 */ struct tagSAFEARRAY** pparray;
        /* 0x0008 */ struct tagPROPVARIANT* pvarVal;
      }; /* size: 0x0010 */
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ struct tagDEC decVal;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

struct tagCLIPDATA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ long ulClipFmt;
  /* 0x0008 */ unsigned char* pClipData;
}; /* size: 0x0010 */

struct _RTL_CRITICAL_SECTION;

struct IStream
{
}; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ long Padding_48;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PEB
{
  /* 0x0000 */ unsigned char InheritedAddressSpace;
  /* 0x0001 */ unsigned char ReadImageFileExecOptions;
  /* 0x0002 */ unsigned char BeingDebugged;
  /* 0x0003 */ unsigned char SpareBool;
  /* 0x0004 */ long Padding_49;
  /* 0x0008 */ void* Mutant;
  /* 0x0010 */ void* ImageBaseAddress;
  /* 0x0018 */ struct _PEB_LDR_DATA* Ldr;
  /* 0x0020 */ struct _RTL_USER_PROCESS_PARAMETERS* ProcessParameters;
  /* 0x0028 */ void* SubSystemData;
  /* 0x0030 */ void* ProcessHeap;
  /* 0x0038 */ struct _RTL_CRITICAL_SECTION* FastPebLock;
  /* 0x0040 */ void* SparePtr1;
  /* 0x0048 */ void* SparePtr2;
  /* 0x0050 */ unsigned long EnvironmentUpdateCount;
  /* 0x0054 */ long Padding_50;
  /* 0x0058 */ void* KernelCallbackTable;
  /* 0x0060 */ unsigned long SystemReserved[1];
  struct /* bitfield */
  {
    /* 0x0064 */ unsigned long ExecuteOptions : 2; /* bit position: 0 */
    /* 0x0064 */ unsigned long SpareBits : 30; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0068 */ struct _PEB_FREE_BLOCK* FreeList;
  /* 0x0070 */ unsigned long TlsExpansionCounter;
  /* 0x0074 */ long Padding_51;
  /* 0x0078 */ void* TlsBitmap;
  /* 0x0080 */ unsigned long TlsBitmapBits[2];
  /* 0x0088 */ void* ReadOnlySharedMemoryBase;
  /* 0x0090 */ void* ReadOnlySharedMemoryHeap;
  /* 0x0098 */ void** ReadOnlyStaticServerData;
  /* 0x00a0 */ void* AnsiCodePageData;
  /* 0x00a8 */ void* OemCodePageData;
  /* 0x00b0 */ void* UnicodeCaseTableData;
  /* 0x00b8 */ unsigned long NumberOfProcessors;
  /* 0x00bc */ unsigned long NtGlobalFlag;
  /* 0x00c0 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x00c8 */ unsigned __int64 HeapSegmentReserve;
  /* 0x00d0 */ unsigned __int64 HeapSegmentCommit;
  /* 0x00d8 */ unsigned __int64 HeapDeCommitTotalFreeThreshold;
  /* 0x00e0 */ unsigned __int64 HeapDeCommitFreeBlockThreshold;
  /* 0x00e8 */ unsigned long NumberOfHeaps;
  /* 0x00ec */ unsigned long MaximumNumberOfHeaps;
  /* 0x00f0 */ void** ProcessHeaps;
  /* 0x00f8 */ void* GdiSharedHandleTable;
  /* 0x0100 */ void* ProcessStarterHelper;
  /* 0x0108 */ unsigned long GdiDCAttributeList;
  /* 0x010c */ long Padding_52;
  /* 0x0110 */ struct _RTL_CRITICAL_SECTION* LoaderLock;
  /* 0x0118 */ unsigned long OSMajorVersion;
  /* 0x011c */ unsigned long OSMinorVersion;
  /* 0x0120 */ unsigned short OSBuildNumber;
  /* 0x0122 */ unsigned short OSCSDVersion;
  /* 0x0124 */ unsigned long OSPlatformId;
  /* 0x0128 */ unsigned long ImageSubsystem;
  /* 0x012c */ unsigned long ImageSubsystemMajorVersion;
  /* 0x0130 */ unsigned long ImageSubsystemMinorVersion;
  /* 0x0134 */ long Padding_53;
  /* 0x0138 */ unsigned __int64 ImageProcessAffinityMask;
  /* 0x0140 */ unsigned long GdiHandleBuffer[60];
  /* 0x0230 */ void* PostProcessInitRoutine /* function */;
  /* 0x0238 */ void* TlsExpansionBitmap;
  /* 0x0240 */ unsigned long TlsExpansionBitmapBits[32];
  /* 0x02c0 */ unsigned long SessionId;
  /* 0x02c4 */ long Padding_54;
  /* 0x02c8 */ union _ULARGE_INTEGER AppCompatFlags;
  /* 0x02d0 */ union _ULARGE_INTEGER AppCompatFlagsUser;
  /* 0x02d8 */ void* pShimData;
  /* 0x02e0 */ void* AppCompatInfo;
  /* 0x02e8 */ struct _UNICODE_STRING CSDVersion;
  /* 0x02f8 */ const struct _ACTIVATION_CONTEXT_DATA* ActivationContextData;
  /* 0x0300 */ struct _ASSEMBLY_STORAGE_MAP* ProcessAssemblyStorageMap;
  /* 0x0308 */ const struct _ACTIVATION_CONTEXT_DATA* SystemDefaultActivationContextData;
  /* 0x0310 */ struct _ASSEMBLY_STORAGE_MAP* SystemAssemblyStorageMap;
  /* 0x0318 */ unsigned __int64 MinimumStackCommit;
  /* 0x0320 */ void** FlsCallback;
  /* 0x0328 */ struct _LIST_ENTRY FlsListHead;
  /* 0x0338 */ void* FlsBitmap;
  /* 0x0340 */ unsigned long FlsBitmapBits[4];
  /* 0x0350 */ unsigned long FlsHighIndex;
  /* 0x0354 */ long __PADDING__[1];
} PEB, *PPEB; /* size: 0x0358 */

struct IStorage
{
}; /* size: 0x0008 */

struct ITypeInfo
{
}; /* size: 0x0008 */

struct tagVersionedStream
{
  /* 0x0000 */ struct _GUID guidVersion;
  /* 0x0010 */ struct IStream* pStream;
}; /* size: 0x0018 */

struct _ACTIVATION_CONTEXT_DATA;

typedef struct __type_info_node
{
  /* 0x0000 */ void* _MemPtr;
  /* 0x0008 */ struct __type_info_node* _Next;
} _type_info_node, *P_type_info_node; /* size: 0x0010 */

struct VirtualValue
{
  /* 0x0000 */ const wchar_t* pszKey;
  /* 0x0008 */ unsigned int cchKey;
  /* 0x000c */ long Padding_55;
  /* 0x0010 */ const wchar_t* pszValue;
  /* 0x0018 */ unsigned int cchVal;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

typedef struct _OSVERSIONINFOEXW
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ wchar_t szCSDVersion[128];
  /* 0x0114 */ unsigned short wServicePackMajor;
  /* 0x0116 */ unsigned short wServicePackMinor;
  /* 0x0118 */ unsigned short wSuiteMask;
  /* 0x011a */ unsigned char wProductType;
  /* 0x011b */ unsigned char wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW; /* size: 0x011c */

class <CrtImplementationDetails>::NativeDll
{
  union
  {
    /* 0x0000 */ const unsigned int ProcessDetach;
    /* 0x0000 */ const unsigned int ProcessAttach;
    /* 0x0000 */ const unsigned int ThreadAttach;
    /* 0x0000 */ const unsigned int ThreadDetach;
    /* 0x0000 */ const unsigned int ProcessVerifier;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

struct tagTYPEATTR
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ unsigned long dwReserved;
  /* 0x0018 */ long memidConstructor;
  /* 0x001c */ long memidDestructor;
  /* 0x0020 */ wchar_t* lpstrSchema;
  /* 0x0028 */ unsigned long cbSizeInstance;
  /* 0x002c */ enum tagTYPEKIND typekind;
  /* 0x0030 */ unsigned short cFuncs;
  /* 0x0032 */ unsigned short cVars;
  /* 0x0034 */ unsigned short cImplTypes;
  /* 0x0036 */ unsigned short cbSizeVft;
  /* 0x0038 */ unsigned short cbAlignment;
  /* 0x003a */ unsigned short wTypeFlags;
  /* 0x003c */ unsigned short wMajorVerNum;
  /* 0x003e */ unsigned short wMinorVerNum;
  /* 0x0040 */ struct tagTYPEDESC tdescAlias;
  /* 0x0050 */ struct tagIDLDESC idldescType;
}; /* size: 0x0060 */

typedef struct _OSVERSIONINFOA
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ char szCSDVersion[128];
} OSVERSIONINFOA, *POSVERSIONINFOA; /* size: 0x0094 */

struct ISequentialStream
{
}; /* size: 0x0008 */

struct IEnumSTATSTG
{
}; /* size: 0x0008 */

struct ITypeLib
{
}; /* size: 0x0008 */

class std::_Mutex
{
  /* 0x0000 */ void* _Mtx;
}; /* size: 0x0008 */

typedef struct _SYSTEM_INFO
{
  union
  {
    /* 0x0000 */ unsigned long dwOemId;
    struct
    {
      /* 0x0000 */ unsigned short wProcessorArchitecture;
      /* 0x0002 */ unsigned short wReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long dwPageSize;
  /* 0x0008 */ void* lpMinimumApplicationAddress;
  /* 0x0010 */ void* lpMaximumApplicationAddress;
  /* 0x0018 */ unsigned __int64 dwActiveProcessorMask;
  /* 0x0020 */ unsigned long dwNumberOfProcessors;
  /* 0x0024 */ unsigned long dwProcessorType;
  /* 0x0028 */ unsigned long dwAllocationGranularity;
  /* 0x002c */ unsigned short wProcessorLevel;
  /* 0x002e */ unsigned short wProcessorRevision;
} SYSTEM_INFO, *PSYSTEM_INFO; /* size: 0x0030 */

class type_info
{
  /* 0x0000 */ long Padding_56[2];
  /* 0x0008 */ void* _M_data;
  /* 0x0010 */ char _M_d_name[1];
}; /* size: 0x0018 */

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ unsigned long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x001c */ long Padding_57;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0098 */

typedef struct _EXCEPTION_POINTERS
{
  /* 0x0000 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0008 */ struct _CONTEXT* ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS; /* size: 0x0010 */

typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0008 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0010 */

typedef struct _RUNTIME_FUNCTION
{
  /* 0x0000 */ unsigned long BeginAddress;
  /* 0x0004 */ unsigned long EndAddress;
  /* 0x0008 */ unsigned long UnwindData;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION; /* size: 0x000c */

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

typedef struct _IMAGE_OPTIONAL_HEADER64
{
  /* 0x0000 */ unsigned short Magic;
  /* 0x0002 */ unsigned char MajorLinkerVersion;
  /* 0x0003 */ unsigned char MinorLinkerVersion;
  /* 0x0004 */ unsigned long SizeOfCode;
  /* 0x0008 */ unsigned long SizeOfInitializedData;
  /* 0x000c */ unsigned long SizeOfUninitializedData;
  /* 0x0010 */ unsigned long AddressOfEntryPoint;
  /* 0x0014 */ unsigned long BaseOfCode;
  /* 0x0018 */ unsigned __int64 ImageBase;
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
  /* 0x0048 */ unsigned __int64 SizeOfStackReserve;
  /* 0x0050 */ unsigned __int64 SizeOfStackCommit;
  /* 0x0058 */ unsigned __int64 SizeOfHeapReserve;
  /* 0x0060 */ unsigned __int64 SizeOfHeapCommit;
  /* 0x0068 */ unsigned long LoaderFlags;
  /* 0x006c */ unsigned long NumberOfRvaAndSizes;
  /* 0x0070 */ struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64; /* size: 0x00f0 */

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

typedef struct _IMAGE_NT_HEADERS64
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _IMAGE_FILE_HEADER FileHeader;
  /* 0x0018 */ struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64; /* size: 0x0108 */

typedef struct _PEB_FREE_BLOCK
{
  /* 0x0000 */ struct _PEB_FREE_BLOCK* Next;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ long __PADDING__[1];
} PEB_FREE_BLOCK, *PPEB_FREE_BLOCK; /* size: 0x0010 */

typedef struct _UNWIND_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Version : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char Flags : 5; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0001 */ unsigned char SizeOfProlog;
  /* 0x0002 */ unsigned char CountOfCodes;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char FrameRegister : 4; /* bit position: 0 */
    /* 0x0003 */ unsigned char FrameOffset : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0004 */ union _UNWIND_CODE UnwindCode[1];
} UNWIND_INFO, *PUNWIND_INFO; /* size: 0x0006 */

typedef struct _UNWIND_HISTORY_TABLE
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned char Search;
  /* 0x0005 */ char Padding_58[3];
  /* 0x0008 */ unsigned __int64 LowAddress;
  /* 0x0010 */ unsigned __int64 HighAddress;
  /* 0x0018 */ struct _UNWIND_HISTORY_TABLE_ENTRY Entry[12];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE; /* size: 0x00d8 */

struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;

typedef struct _ACTIVATION_CONTEXT_STACK
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NextCookieSequenceNumber;
  /* 0x0008 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
  /* 0x0010 */ struct _LIST_ENTRY FrameListCache;
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK; /* size: 0x0020 */

typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ long Padding_59;
  /* 0x0008 */ const char* FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT; /* size: 0x0010 */

typedef struct _PEB_LDR_DATA
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0005 */ char Padding_60[3];
  /* 0x0008 */ void* SsHandle;
  /* 0x0010 */ struct _LIST_ENTRY InLoadOrderModuleList;
  /* 0x0020 */ struct _LIST_ENTRY InMemoryOrderModuleList;
  /* 0x0030 */ struct _LIST_ENTRY InInitializationOrderModuleList;
  /* 0x0040 */ void* EntryInProgress;
} PEB_LDR_DATA, *PPEB_LDR_DATA; /* size: 0x0048 */

typedef struct _DISPATCHER_CONTEXT
{
  /* 0x0000 */ unsigned __int64 ControlPc;
  /* 0x0008 */ unsigned __int64 ImageBase;
  /* 0x0010 */ struct _RUNTIME_FUNCTION* FunctionEntry;
  /* 0x0018 */ unsigned __int64 EstablisherFrame;
  /* 0x0020 */ unsigned __int64 TargetIp;
  /* 0x0028 */ struct _CONTEXT* ContextRecord;
  /* 0x0030 */ void* LanguageHandler /* function */;
  /* 0x0038 */ void* HandlerData;
  /* 0x0040 */ struct _UNWIND_HISTORY_TABLE* HistoryTable;
  /* 0x0048 */ unsigned long ScopeIndex;
  /* 0x004c */ unsigned long Fill0;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT; /* size: 0x0050 */

struct _RTL_USER_PROCESS_PARAMETERS;

struct _ASSEMBLY_STORAGE_MAP;

typedef struct _TEB
{
  /* 0x0000 */ struct _NT_TIB NtTib;
  /* 0x0038 */ void* EnvironmentPointer;
  /* 0x0040 */ struct _CLIENT_ID ClientId;
  /* 0x0050 */ void* ActiveRpcHandle;
  /* 0x0058 */ void* ThreadLocalStoragePointer;
  /* 0x0060 */ struct _PEB* ProcessEnvironmentBlock;
  /* 0x0068 */ unsigned long LastErrorValue;
  /* 0x006c */ unsigned long CountOfOwnedCriticalSections;
  /* 0x0070 */ void* CsrClientThread;
  /* 0x0078 */ void* Win32ThreadInfo;
  /* 0x0080 */ unsigned long User32Reserved[26];
  /* 0x00e8 */ unsigned long UserReserved[5];
  /* 0x00fc */ long Padding_61;
  /* 0x0100 */ void* WOW32Reserved;
  /* 0x0108 */ unsigned long CurrentLocale;
  /* 0x010c */ unsigned long FpSoftwareStatusRegister;
  /* 0x0110 */ void* SystemReserved1[54];
  /* 0x02c0 */ long ExceptionCode;
  /* 0x02c4 */ long Padding_62;
  /* 0x02c8 */ struct _ACTIVATION_CONTEXT_STACK ActivationContextStack;
  /* 0x02e8 */ unsigned char SpareBytes1[8];
  /* 0x02f0 */ struct _GDI_TEB_BATCH GdiTebBatch;
  /* 0x07d8 */ struct _CLIENT_ID RealClientId;
  /* 0x07e8 */ void* GdiCachedProcessHandle;
  /* 0x07f0 */ unsigned long GdiClientPID;
  /* 0x07f4 */ unsigned long GdiClientTID;
  /* 0x07f8 */ void* GdiThreadLocalInfo;
  /* 0x0800 */ unsigned __int64 Win32ClientInfo[62];
  /* 0x09f0 */ void* glDispatchTable[233];
  /* 0x1138 */ unsigned __int64 glReserved1[29];
  /* 0x1220 */ void* glReserved2;
  /* 0x1228 */ void* glSectionInfo;
  /* 0x1230 */ void* glSection;
  /* 0x1238 */ void* glTable;
  /* 0x1240 */ void* glCurrentRC;
  /* 0x1248 */ void* glContext;
  /* 0x1250 */ unsigned long LastStatusValue;
  /* 0x1254 */ long Padding_63;
  /* 0x1258 */ struct _UNICODE_STRING StaticUnicodeString;
  /* 0x1268 */ wchar_t StaticUnicodeBuffer[261];
  /* 0x1472 */ char Padding_64[6];
  /* 0x1478 */ void* DeallocationStack;
  /* 0x1480 */ void* TlsSlots[64];
  /* 0x1680 */ struct _LIST_ENTRY TlsLinks;
  /* 0x1690 */ void* Vdm;
  /* 0x1698 */ void* ReservedForNtRpc;
  /* 0x16a0 */ void* DbgSsReserved[2];
  /* 0x16b0 */ unsigned long HardErrorMode;
  /* 0x16b4 */ long Padding_65;
  /* 0x16b8 */ void* Instrumentation[16];
  /* 0x1738 */ void* WinSockData;
  /* 0x1740 */ unsigned long GdiBatchCount;
  /* 0x1744 */ unsigned char InDbgPrint;
  /* 0x1745 */ unsigned char FreeStackOnTermination;
  /* 0x1746 */ unsigned char HasFiberData;
  /* 0x1747 */ unsigned char IdealProcessor;
  /* 0x1748 */ unsigned long Spare3;
  /* 0x174c */ long Padding_66;
  /* 0x1750 */ void* ReservedForPerf;
  /* 0x1758 */ void* ReservedForOle;
  /* 0x1760 */ unsigned long WaitingOnLoaderLock;
  /* 0x1764 */ long Padding_67;
  /* 0x1768 */ struct _Wx86ThreadState Wx86Thread;
  /* 0x1780 */ void** TlsExpansionSlots;
  /* 0x1788 */ void* DeallocationBStore;
  /* 0x1790 */ void* BStoreLimit;
  /* 0x1798 */ unsigned long ImpersonationLocale;
  /* 0x179c */ unsigned long IsImpersonating;
  /* 0x17a0 */ void* NlsCache;
  /* 0x17a8 */ void* pShimData;
  /* 0x17b0 */ unsigned long HeapVirtualAffinity;
  /* 0x17b4 */ long Padding_68;
  /* 0x17b8 */ void* CurrentTransactionHandle;
  /* 0x17c0 */ struct _TEB_ACTIVE_FRAME* ActiveFrame;
  /* 0x17c8 */ void* FlsData;
} TEB, *PTEB; /* size: 0x17d0 */

#include <poppack.h>
