#ifndef _OLEAUTO_H
#define _OLEAUTO_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#pragma pack(push,8)
#define WINOLEAUTAPI STDAPI
#define WINOLEAUTAPI_(type) STDAPI_(type)
#define STDOLE_MAJORVERNUM 1
#define STDOLE_MINORVERNUM 0
#define STDOLE_LCID 0
#define VARIANT_NOVALUEPROP 0x01
#define VARIANT_ALPHABOOL 0x02
#define VARIANT_NOUSEOVERRIDE 0x04
#define VARIANT_LOCALBOOL 0x08
#define VAR_TIMEVALUEONLY 0x0001
#define VAR_DATEVALUEONLY 0x0002
#define VAR_VALIDDATE 0x0004
#define VAR_CALENDAR_HIJRI 0x0008
#define VAR_LOCALBOOL 0x0010
#define VAR_FORMAT_NOSUBSTITUTE 0x0020
#define VAR_FOURDIGITYEARS 0x0040
#define VAR_CALENDAR_THAI 0x0080
#define	VAR_CALENDAR_GREGORIAN 0x0100
#define MEMBERID_NIL DISPID_UNKNOWN
#define ID_DEFAULTINST (-2)
#define DISPATCH_METHOD 1
#define DISPATCH_PROPERTYGET 2
#define DISPATCH_PROPERTYPUT 4
#define DISPATCH_PROPERTYPUTREF 8
#define LHashValOfName(l,n) LHashValOfNameSys(SYS_WIN32,l,n)
#define WHashValOfLHashVal(h) ((unsigned short)(0x0000ffff&(h)))
#define IsHashValCompatible(h1,h2) ((BOOL)((0x00ff0000&(h1))==(0x00ff0000&(h2))))
#define ACTIVEOBJECT_STRONG 0
#define ACTIVEOBJECT_WEAK 1
#ifdef NONAMELESSUNION
#define V_UNION(X,Y) ((X)->n1.n2.n3.Y)
#define V_VT(X) ((X)->n1.n2.vt)
#else
#define V_UNION(X,Y) ((X)->Y)
#define V_VT(X) ((X)->vt)
#endif
#define V_BOOL(X) V_UNION(X,boolVal)
#define V_ISBYREF(X) (V_VT(X)&VT_BYREF)
#define V_ISARRAY(X) (V_VT(X)&VT_ARRAY)
#define V_ISVECTOR(X) (V_VT(X)&VT_VECTOR)
#define V_NONE(X) V_I2(X)
#define V_UI1(X) V_UNION(X,bVal)
#define V_UI1REF(X) V_UNION(X,pbVal)
#define V_I2(X) V_UNION(X,iVal)
#define V_UI2(X) V_UNION(X,uiVal)
#define V_I2REF(X) V_UNION(X,piVal)
#define V_I4(X) V_UNION(X,lVal)
#define V_UI4(X) V_UNION(X,ulVal)
#define V_I4REF(X) V_UNION(X,plVal)
#define V_UI4REF(X) V_UNION(X,pulVal)
#define V_I8(X) V_UNION(X,llVal)
#define V_UI8(X) V_UNION(X,ullVal)
#define V_I8REF(X) V_UNION(X,phVal)
#define V_UI8REF(X) V_UNION(X,puhVal)
#define V_R4(X) V_UNION(X,fltVal)
#define V_R4REF(X) V_UNION(X,pfltVal)
#define V_R8(X) V_UNION(X,dblVal)
#define V_R8REF(X) V_UNION(X,pdblVal)
#define V_CY(X) V_UNION(X,cyVal)
#define V_CYREF(X) V_UNION(X,pcyVal)
#define V_DATE(X) V_UNION(X,date)
#define V_DATEREF(X) V_UNION(X,pdate)
#define V_BSTR(X) V_UNION(X,bstrVal)
#define V_BSTRREF(X) V_UNION(X,pbstrVal)
#define V_DISPATCH(X) V_UNION(X,pdispVal)
#define V_DISPATCHREF(X) V_UNION(X,ppdispVal)
#define V_ERROR(X) V_UNION(X,scode)
#define V_ERRORREF(X) V_UNION(X,pscode)
#define V_BOOLREF(X) V_UNION(X,pboolVal)
#define V_UNKNOWN(X) V_UNION(X,punkVal)
#define V_UNKNOWNREF(X) V_UNION(X,ppunkVal)
#define V_VARIANTREF(X) V_UNION(X,pvarVal)
#define V_LPSTR(X) V_UNION(X,pszVal)
#define V_LPSTRREF(X) V_UNION(X,ppszVal)
#define V_LPWSTR(X) V_UNION(X,pwszVal)
#define V_LPWSTRREF(X) V_UNION(X,ppwszVal)
#define V_FILETIME(X) V_UNION(X,filetime)
#define V_FILETIMEREF(X) V_UNION(X,pfiletime)
#define V_BLOB(X) V_UNION(X,blob)
#define V_UUID(X) V_UNION(X,puuid)
#define V_CLSID(X) V_UNION(X,puuid)
#define V_ARRAY(X) V_UNION(X,parray)
#define V_ARRAYREF(X) V_UNION(X,pparray)
#define V_BYREF(X) V_UNION(X,byref)
#if (__STDC__ && !defined(_FORCENAMELESSUNION)) || defined(NONAMELESSUNION)
#define V_DECIMAL(X) ((X)->n1.decVal)
#else
#define V_DECIMAL(X) ((X)->decVal)
#endif
#define V_DECIMALREF(X) V_UNION(X,pdecVal)
#define V_I1(X) V_UNION(X,cVal)
#ifdef _WIN64
#define V_INT_PTR(X) V_I8(X)
#define V_UINT_PTR(X) V_UI8(X)
#define V_INT_PTRREF(X) V_I8REF(X)
#define V_UINT_PTRREF(X) V_UI8REF(X)
#else
#define V_INT_PTR(X) V_I4(X)
#define V_UINT_PTR(X) V_UI4(X)
#define V_INT_PTRREF(X) V_I4REF(X)
#define V_UINT_PTRREF(X) V_UI4REF(X)
#endif

#define VARCMP_LT 0
#define VARCMP_EQ 1
#define VARCMP_GT 2
#define VARCMP_NULL 3

#define LOCALE_USE_NLS 0x10000000

#define VARIANT_NOUSEROVERRIDE 0x04
#define VARIANT_CALENDAR_HIJRI 0x08
#define VARIANT_CALENDAR_THAI 0x20
#define VARIANT_CALENDAR_GREGORIAN 0x40
#define VARIANT_USE_NLS 0x80

#define NUMPRS_LEADING_WHITE 0x00001
#define NUMPRS_TRAILING_WHITE 0x00002
#define NUMPRS_LEADING_PLUS 0x00004
#define NUMPRS_TRAILING_PLUS 0x00008
#define NUMPRS_LEADING_MINUS 0x00010
#define NUMPRS_TRAILING_MINUS 0x00020
#define NUMPRS_HEX_OCT 0x00040
#define NUMPRS_PARENS 0x00080
#define NUMPRS_DECIMAL 0x00100
#define NUMPRS_THOUSANDS 0x00200
#define NUMPRS_CURRENCY 0x00400
#define NUMPRS_EXPONENT 0x00800
#define NUMPRS_USE_ALL 0x01000
#define NUMPRS_STD 0x01FFF
#define NUMPRS_NEG 0x10000
#define NUMPRS_INEXACT 0x20000

#define VTBIT_I1 (1<<VT_I1)
#define VTBIT_UI1 (1<<VT_UI1)
#define VTBIT_I2 (1<<VT_I2)
#define VTBIT_UI2 (1<<VT_UI2)
#define VTBIT_I4 (1<<VT_I4)
#define VTBIT_UI4 (1<<VT_UI4)
#define VTBIT_I8 (1<<VT_I8)
#define VTBIT_UI8 (1<<VT_UI8)
#define VTBIT_R4 (1<<VT_R4)
#define VTBIT_R8 (1<<VT_R8)
#define VTBIT_CY (1<<VT_CY)
#define VTBIT_DECIMAL (1<<VT_DECIMAL)

#include <oaidl.h>

typedef enum tagREGKIND {
	REGKIND_DEFAULT,
	REGKIND_REGISTER,
	REGKIND_NONE
} REGKIND;
typedef struct tagPARAMDATA {
	OLECHAR *szName;
	VARTYPE vt;
} PARAMDATA,*LPPARAMDATA;
typedef struct tagMETHODDATA {
	OLECHAR *szName;
	PARAMDATA *ppdata;
	DISPID dispid;
	UINT iMeth;
	CALLCONV cc;
	UINT cArgs;
	WORD wFlags;
	VARTYPE vtReturn;
} METHODDATA,*LPMETHODDATA;
typedef struct tagINTERFACEDATA {
	METHODDATA *pmethdata;
	UINT cMembers;
} INTERFACEDATA,*LPINTERFACEDATA;

typedef struct {
	SYSTEMTIME st;
	USHORT wDayOfYear;
} UDATE;

typedef struct {
	int cDig;
	unsigned long dwInFlags;
	unsigned long dwOutFlags;
	int cchUsed;
	int nBaseShift;
	int nPwr10;
} NUMPARSE;

WINOLEAUTAPI_(BSTR) SysAllocString(const OLECHAR*);
WINOLEAUTAPI_(int) SysReAllocString(BSTR*,const OLECHAR*);
WINOLEAUTAPI_(BSTR) SysAllocStringLen(const OLECHAR*,unsigned int);
WINOLEAUTAPI_(int) SysReAllocStringLen(BSTR*,const OLECHAR*,unsigned int);
WINOLEAUTAPI_(void) SysFreeString(BSTR);
WINOLEAUTAPI_(unsigned int) SysStringLen(BSTR);
WINOLEAUTAPI_(unsigned int) SysStringByteLen(BSTR);
WINOLEAUTAPI_(BSTR) SysAllocStringByteLen(const char*,unsigned int);
WINOLEAUTAPI_(int) DosDateTimeToVariantTime(unsigned short,unsigned short,double*);
WINOLEAUTAPI_(int) VariantTimeToDosDateTime(double,unsigned short*,unsigned short*);
WINOLEAUTAPI_(int) VariantTimeToSystemTime(double,LPSYSTEMTIME);
WINOLEAUTAPI_(int) SystemTimeToVariantTime(LPSYSTEMTIME, double*);
WINOLEAUTAPI VarDateFromUdate(UDATE*,ULONG,DATE*);
WINOLEAUTAPI VarDateFromUdateEx(UDATE*,LCID,ULONG,DATE*);
WINOLEAUTAPI VarUdateFromDate(DATE,ULONG,UDATE*);
WINOLEAUTAPI SafeArrayAllocDescriptor(unsigned int,SAFEARRAY**);
WINOLEAUTAPI SafeArrayAllocData(SAFEARRAY*);
WINOLEAUTAPI_(SAFEARRAY*) SafeArrayCreate(VARTYPE,unsigned int,SAFEARRAYBOUND*);
WINOLEAUTAPI SafeArrayDestroyDescriptor(SAFEARRAY*);
WINOLEAUTAPI SafeArrayDestroyData(SAFEARRAY*);
WINOLEAUTAPI SafeArrayDestroy(SAFEARRAY*);
WINOLEAUTAPI SafeArrayRedim(SAFEARRAY*,SAFEARRAYBOUND*);
WINOLEAUTAPI_(unsigned int) SafeArrayGetDim(SAFEARRAY*);
WINOLEAUTAPI_(unsigned int) SafeArrayGetElemsize(SAFEARRAY*);
WINOLEAUTAPI SafeArrayGetUBound(SAFEARRAY*,unsigned int,long*);
WINOLEAUTAPI SafeArrayGetLBound(SAFEARRAY*,unsigned int,long*);
WINOLEAUTAPI SafeArrayLock(SAFEARRAY*);
WINOLEAUTAPI SafeArrayUnlock(SAFEARRAY*);
WINOLEAUTAPI SafeArrayAccessData(SAFEARRAY*,void**);
WINOLEAUTAPI SafeArrayUnaccessData(SAFEARRAY*);
WINOLEAUTAPI SafeArrayGetElement(SAFEARRAY*,long*,void*);
WINOLEAUTAPI SafeArrayPutElement(SAFEARRAY*,long*,void*);
WINOLEAUTAPI SafeArrayCopy(SAFEARRAY*,SAFEARRAY**);
WINOLEAUTAPI SafeArrayPtrOfIndex(SAFEARRAY*,long*,void**);
WINOLEAUTAPI_(SAFEARRAY*) SafeArrayCreateVector(VARTYPE,LONG,UINT);
WINOLEAUTAPI_(SAFEARRAY*) SafeArrayCreateVectorEx(VARTYPE,LONG,UINT,LPVOID);
WINOLEAUTAPI SafeArrayAllocDescriptorEx(VARTYPE,UINT,SAFEARRAY**);
WINOLEAUTAPI SafeArrayGetVartype(SAFEARRAY*,VARTYPE*);
WINOLEAUTAPI SafeArraySetRecordInfo(SAFEARRAY*,IRecordInfo*);
WINOLEAUTAPI SafeArrayGetRecordInfo(SAFEARRAY*,IRecordInfo**);
WINOLEAUTAPI SafeArraySetIID(SAFEARRAY*,REFGUID);
WINOLEAUTAPI SafeArrayGetIID(SAFEARRAY*,GUID*);
WINOLEAUTAPI_(void) VariantInit(VARIANTARG*);
WINOLEAUTAPI VariantClear(VARIANTARG*);
WINOLEAUTAPI VariantCopy(VARIANTARG*,VARIANTARG*);
WINOLEAUTAPI VariantCopyInd(VARIANT*,VARIANTARG*);
WINOLEAUTAPI VariantChangeType(VARIANTARG*,VARIANTARG*,unsigned short,VARTYPE);
WINOLEAUTAPI VariantChangeTypeEx(VARIANTARG*,VARIANTARG*,LCID,unsigned short,VARTYPE);
WINOLEAUTAPI VarUI1FromI2(short,unsigned char*);
WINOLEAUTAPI VarUI1FromI4(long,unsigned char*);
WINOLEAUTAPI VarUI1FromR4(float,unsigned char*);
WINOLEAUTAPI VarUI1FromR8(double,unsigned char*);
WINOLEAUTAPI VarUI1FromCy(CY,unsigned char*);
WINOLEAUTAPI VarUI1FromDate(DATE,unsigned char*);
WINOLEAUTAPI VarUI1FromStr(OLECHAR*,LCID,unsigned long,unsigned char*);
WINOLEAUTAPI VarUI1FromDisp(LPDISPATCH,LCID,unsigned char*);
WINOLEAUTAPI VarUI1FromBool(VARIANT_BOOL,unsigned char*);
WINOLEAUTAPI VarI2FromUI1(unsigned char,short*);
WINOLEAUTAPI VarI2FromI4(long,short*);
WINOLEAUTAPI VarI2FromR4(float,short*);
WINOLEAUTAPI VarI2FromR8(double,short*);
WINOLEAUTAPI VarI2FromCy(CY cyIn,short*);
WINOLEAUTAPI VarI2FromDate(DATE,short*);
WINOLEAUTAPI VarI2FromStr(OLECHAR*,LCID,unsigned long,short*);
WINOLEAUTAPI VarI2FromDisp(LPDISPATCH,LCID,short*);
WINOLEAUTAPI VarI2FromBool(VARIANT_BOOL,short*);
WINOLEAUTAPI VarI4FromUI1(unsigned char,long*);
WINOLEAUTAPI VarI4FromI2(short,long*);
WINOLEAUTAPI VarI4FromR4(float,long*);
WINOLEAUTAPI VarI4FromR8(double,long*);
WINOLEAUTAPI VarI4FromCy(CY,long*);
WINOLEAUTAPI VarI4FromDate(DATE,long*);
WINOLEAUTAPI VarI4FromStr(OLECHAR*,LCID,unsigned long,long*);
WINOLEAUTAPI VarI4FromDisp(LPDISPATCH,LCID,long*);
WINOLEAUTAPI VarI4FromBool(VARIANT_BOOL,long*);
WINOLEAUTAPI VarR4FromUI1(unsigned char,float*);
WINOLEAUTAPI VarR4FromI2(short,float*);
WINOLEAUTAPI VarR4FromI4(long,float*);
WINOLEAUTAPI VarR4FromR8(double,float*);
WINOLEAUTAPI VarR4FromCy(CY,float*);
WINOLEAUTAPI VarR4FromDate(DATE,float*);
WINOLEAUTAPI VarR4FromStr(OLECHAR*,LCID,unsigned long,float*);
WINOLEAUTAPI VarR4FromDisp(LPDISPATCH,LCID,float*);
WINOLEAUTAPI VarR4FromBool(VARIANT_BOOL,float*);
WINOLEAUTAPI VarR8FromUI1(unsigned char,double*);
WINOLEAUTAPI VarR8FromI2(short,double*);
WINOLEAUTAPI VarR8FromI4(long,double*);
WINOLEAUTAPI VarR8FromR4(float,double*);
WINOLEAUTAPI VarR8FromCy(CY,double*);
WINOLEAUTAPI VarR8FromDate(DATE,double*);
WINOLEAUTAPI VarR8FromStr(OLECHAR*,LCID,unsigned long,double*);
WINOLEAUTAPI VarR8FromDisp(LPDISPATCH,LCID,double*);
WINOLEAUTAPI VarR8FromBool(VARIANT_BOOL,double*);
WINOLEAUTAPI VarR8FromDec(DECIMAL*,double*);
WINOLEAUTAPI VarDateFromUI1(unsigned char,DATE*);
WINOLEAUTAPI VarDateFromI2(short,DATE*);
WINOLEAUTAPI VarDateFromI4(long,DATE*);
WINOLEAUTAPI VarDateFromR4(float,DATE*);
WINOLEAUTAPI VarDateFromR8(double,DATE*);
WINOLEAUTAPI VarDateFromCy(CY,DATE*);
WINOLEAUTAPI VarDateFromStr(OLECHAR*,LCID,unsigned long,DATE*);
WINOLEAUTAPI VarDateFromDisp(LPDISPATCH,LCID,DATE*);
WINOLEAUTAPI VarDateFromBool(VARIANT_BOOL,DATE*);
WINOLEAUTAPI VarCyFromUI1(unsigned char,CY*);
WINOLEAUTAPI VarCyFromI2(short,CY*);
WINOLEAUTAPI VarCyFromI4(long,CY*);
WINOLEAUTAPI VarCyFromR4(float,CY*);
WINOLEAUTAPI VarCyFromR8(double,CY*);
WINOLEAUTAPI VarCyFromDate(DATE,CY*);
WINOLEAUTAPI VarCyFromStr(OLECHAR*,LCID,unsigned long,CY*);
WINOLEAUTAPI VarCyFromDisp(LPDISPATCH,LCID,CY*);
WINOLEAUTAPI VarCyFromBool(VARIANT_BOOL,CY*);
WINOLEAUTAPI VarBstrFromUI1(unsigned char,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromI2(short,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromI4(long,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromR4(float,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromR8(double,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromCy(CY,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromDate(DATE,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromDisp(LPDISPATCH,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBstrFromBool(VARIANT_BOOL,LCID,unsigned long,BSTR*);
WINOLEAUTAPI VarBoolFromUI1(unsigned char,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI2(short,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI4(long,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromR4(float,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromR8(double,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromDate(DATE,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromCy(CY,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromStr(OLECHAR*,LCID,unsigned long,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromDisp(LPDISPATCH,LCID,VARIANT_BOOL*);
WINOLEAUTAPI VarDecFromR8(double,DECIMAL*);
WINOLEAUTAPI_(ULONG) LHashValOfNameSysA(SYSKIND,LCID,const char*);
WINOLEAUTAPI_(ULONG) LHashValOfNameSys(SYSKIND,LCID,const OLECHAR*);
WINOLEAUTAPI LoadTypeLib(const OLECHAR*,LPTYPELIB*);
WINOLEAUTAPI LoadTypeLibEx(LPCOLESTR,REGKIND,LPTYPELIB*);
WINOLEAUTAPI LoadRegTypeLib(REFGUID,WORD,WORD,LCID,LPTYPELIB*);
WINOLEAUTAPI QueryPathOfRegTypeLib(REFGUID,unsigned short,unsigned short,LCID,LPBSTR);
WINOLEAUTAPI RegisterTypeLib(LPTYPELIB,OLECHAR*,OLECHAR*);
WINOLEAUTAPI UnRegisterTypeLib(REFGUID,WORD,WORD,LCID,SYSKIND);
WINOLEAUTAPI CreateTypeLib(SYSKIND,const OLECHAR*,LPCREATETYPELIB*);
WINOLEAUTAPI DispGetParam(DISPPARAMS*,UINT,VARTYPE,VARIANT*,UINT*);
WINOLEAUTAPI DispGetIDsOfNames(LPTYPEINFO,OLECHAR**,UINT,DISPID*);
WINOLEAUTAPI DispInvoke(void*,LPTYPEINFO,DISPID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
WINOLEAUTAPI CreateDispTypeInfo(INTERFACEDATA*,LCID,LPTYPEINFO*);
WINOLEAUTAPI CreateStdDispatch(IUnknown*,void*,LPTYPEINFO,IUnknown**);
WINOLEAUTAPI RegisterActiveObject(IUnknown*,REFCLSID,DWORD,DWORD*);
WINOLEAUTAPI RevokeActiveObject(DWORD,void*);
WINOLEAUTAPI GetActiveObject(REFCLSID,void*,IUnknown**);
WINOLEAUTAPI SetErrorInfo(unsigned long,LPERRORINFO);
WINOLEAUTAPI GetErrorInfo(unsigned long,LPERRORINFO*);
WINOLEAUTAPI CreateErrorInfo(LPCREATEERRORINFO*);
WINOLEAUTAPI_(unsigned long) OaBuildVersion(void);
WINOLEAUTAPI VectorFromBstr (BSTR, SAFEARRAY **);
WINOLEAUTAPI BstrFromVector (SAFEARRAY *, BSTR *);
WINOLEAUTAPI VarParseNumFromStr(OLECHAR*,LCID,ULONG,NUMPARSE*,BYTE*);
WINOLEAUTAPI VarNumFromParseNum(NUMPARSE*,BYTE*,ULONG,VARIANT*);

WINOLEAUTAPI VarAdd(LPVARIANT, LPVARIANT, LPVARIANT);
WINOLEAUTAPI VarSub(LPVARIANT, LPVARIANT, LPVARIANT);
WINOLEAUTAPI VarMul(LPVARIANT, LPVARIANT, LPVARIANT);
WINOLEAUTAPI VarDiv(LPVARIANT, LPVARIANT, LPVARIANT);

WINOLEAUTAPI VarUI1FromI2(SHORT,BYTE*);
WINOLEAUTAPI VarUI1FromI4(LONG,BYTE*);
WINOLEAUTAPI VarUI1FromI8(LONG64,BYTE*);
WINOLEAUTAPI VarUI1FromR4(FLOAT,BYTE*);
WINOLEAUTAPI VarUI1FromR8(DOUBLE,BYTE*);
WINOLEAUTAPI VarUI1FromDate(DATE,BYTE*);
WINOLEAUTAPI VarUI1FromBool(VARIANT_BOOL,BYTE*);
WINOLEAUTAPI VarUI1FromI1(signed char,BYTE*);
WINOLEAUTAPI VarUI1FromUI2(USHORT,BYTE*);
WINOLEAUTAPI VarUI1FromUI4(ULONG,BYTE*);
WINOLEAUTAPI VarUI1FromUI8(ULONG64,BYTE*);
WINOLEAUTAPI VarUI1FromStr(OLECHAR*,LCID,ULONG,BYTE*);
WINOLEAUTAPI VarUI1FromCy(CY,BYTE*);
WINOLEAUTAPI VarUI1FromDec(DECIMAL*,BYTE*);
WINOLEAUTAPI VarUI1FromDisp(IDispatch*,LCID,BYTE*);

WINOLEAUTAPI VarI2FromUI1(BYTE,SHORT*);
WINOLEAUTAPI VarI2FromI4(LONG,SHORT*);
WINOLEAUTAPI VarI2FromI8(LONG64,SHORT*);
WINOLEAUTAPI VarI2FromR4(FLOAT,SHORT*);
WINOLEAUTAPI VarI2FromR8(DOUBLE,SHORT*);
WINOLEAUTAPI VarI2FromDate(DATE,SHORT*);
WINOLEAUTAPI VarI2FromBool(VARIANT_BOOL,SHORT*);
WINOLEAUTAPI VarI2FromI1(signed char,SHORT*);
WINOLEAUTAPI VarI2FromUI2(USHORT,SHORT*);
WINOLEAUTAPI VarI2FromUI4(ULONG,SHORT*);
WINOLEAUTAPI VarI2FromUI8(ULONG64,SHORT*);
WINOLEAUTAPI VarI2FromStr(OLECHAR*,LCID,ULONG,SHORT*);
WINOLEAUTAPI VarI2FromCy(CY,SHORT*);
WINOLEAUTAPI VarI2FromDec(DECIMAL*,SHORT*);
WINOLEAUTAPI VarI2FromDisp(IDispatch*,LCID,SHORT*);

WINOLEAUTAPI VarI4FromUI1(BYTE,LONG*);
WINOLEAUTAPI VarI4FromI2(SHORT,LONG*);
WINOLEAUTAPI VarI4FromI8(LONG64,LONG*);
WINOLEAUTAPI VarI4FromR4(FLOAT,LONG*);
WINOLEAUTAPI VarI4FromR8(DOUBLE,LONG*);
WINOLEAUTAPI VarI4FromDate(DATE,LONG*);
WINOLEAUTAPI VarI4FromBool(VARIANT_BOOL,LONG*);
WINOLEAUTAPI VarI4FromI1(signed char,LONG*);
WINOLEAUTAPI VarI4FromUI2(USHORT,LONG*);
WINOLEAUTAPI VarI4FromUI4(ULONG,LONG*);
WINOLEAUTAPI VarI4FromUI8(ULONG64,LONG*);
WINOLEAUTAPI VarI4FromStr(OLECHAR*,LCID,ULONG,LONG*);
WINOLEAUTAPI VarI4FromCy(CY,LONG*);
WINOLEAUTAPI VarI4FromDec(DECIMAL*,LONG*);
WINOLEAUTAPI VarI4FromDisp(IDispatch*,LCID,LONG*);

WINOLEAUTAPI VarI8FromUI1(BYTE,LONG64*);
WINOLEAUTAPI VarI8FromI2(SHORT,LONG64*);
WINOLEAUTAPI VarI8FromI4(LONG,LONG64*);
WINOLEAUTAPI VarI8FromR4(FLOAT,LONG64*);
WINOLEAUTAPI VarI8FromR8(DOUBLE,LONG64*);
WINOLEAUTAPI VarI8FromDate(DATE,LONG64*);
WINOLEAUTAPI VarI8FromStr(OLECHAR*,LCID,ULONG,LONG64*);
WINOLEAUTAPI VarI8FromBool(VARIANT_BOOL,LONG64*);
WINOLEAUTAPI VarI8FromI1(signed char,LONG64*);
WINOLEAUTAPI VarI8FromUI2(USHORT,LONG64*);
WINOLEAUTAPI VarI8FromUI4(ULONG,LONG64*);
WINOLEAUTAPI VarI8FromUI8(ULONG64,LONG64*);
WINOLEAUTAPI VarI8FromDec(DECIMAL *pdecIn,LONG64*);
WINOLEAUTAPI VarI8FromInt(INT intIn,LONG64*);
WINOLEAUTAPI VarI8FromCy(CY,LONG64*);
WINOLEAUTAPI VarI8FromDisp(IDispatch*,LCID,LONG64*);

WINOLEAUTAPI VarR4FromUI1(BYTE,FLOAT*);
WINOLEAUTAPI VarR4FromI2(SHORT,FLOAT*);
WINOLEAUTAPI VarR4FromI4(LONG,FLOAT*);
WINOLEAUTAPI VarR4FromI8(LONG64,FLOAT*);
WINOLEAUTAPI VarR4FromR8(DOUBLE,FLOAT*);
WINOLEAUTAPI VarR4FromDate(DATE,FLOAT*);
WINOLEAUTAPI VarR4FromBool(VARIANT_BOOL,FLOAT*);
WINOLEAUTAPI VarR4FromI1(signed char,FLOAT*);
WINOLEAUTAPI VarR4FromUI2(USHORT,FLOAT*);
WINOLEAUTAPI VarR4FromUI4(ULONG,FLOAT*);
WINOLEAUTAPI VarR4FromUI8(ULONG64,FLOAT*);
WINOLEAUTAPI VarR4FromStr(OLECHAR*,LCID,ULONG,FLOAT*);
WINOLEAUTAPI VarR4FromCy(CY,FLOAT*);
WINOLEAUTAPI VarR4FromDec(DECIMAL*,FLOAT*);
WINOLEAUTAPI VarR4FromDisp(IDispatch*,LCID,FLOAT*);

WINOLEAUTAPI VarR8FromUI1(BYTE,double*);
WINOLEAUTAPI VarR8FromI2(SHORT,double*);
WINOLEAUTAPI VarR8FromI4(LONG,double*);
WINOLEAUTAPI VarR8FromI8(LONG64,double*);
WINOLEAUTAPI VarR8FromR4(FLOAT,double*);
WINOLEAUTAPI VarR8FromDate(DATE,double*);
WINOLEAUTAPI VarR8FromBool(VARIANT_BOOL,double*);
WINOLEAUTAPI VarR8FromI1(signed char,double*);
WINOLEAUTAPI VarR8FromUI2(USHORT,double*);
WINOLEAUTAPI VarR8FromUI4(ULONG,double*);
WINOLEAUTAPI VarR8FromUI8(ULONG64,double*);
WINOLEAUTAPI VarR8FromStr(OLECHAR*,LCID,ULONG,double*);
WINOLEAUTAPI VarR8FromCy(CY,double*);
WINOLEAUTAPI VarR8FromDec(DECIMAL*,double*);
WINOLEAUTAPI VarR8FromDisp(IDispatch*,LCID,double*);

WINOLEAUTAPI VarDateFromUI1(BYTE,DATE*);
WINOLEAUTAPI VarDateFromI2(SHORT,DATE*);
WINOLEAUTAPI VarDateFromI4(LONG,DATE*);
WINOLEAUTAPI VarDateFromI8(LONG64,DATE*);
WINOLEAUTAPI VarDateFromR4(FLOAT,DATE*);
WINOLEAUTAPI VarDateFromR8(DOUBLE,DATE*);
WINOLEAUTAPI VarDateFromStr(OLECHAR*,LCID,ULONG,DATE*);
WINOLEAUTAPI VarDateFromI1(signed char,DATE*);
WINOLEAUTAPI VarDateFromUI2(USHORT,DATE*);
WINOLEAUTAPI VarDateFromUI4(ULONG,DATE*);
WINOLEAUTAPI VarDateFromUI8(ULONG64,DATE*);
WINOLEAUTAPI VarDateFromBool(VARIANT_BOOL,DATE*);
WINOLEAUTAPI VarDateFromCy(CY,DATE*);
WINOLEAUTAPI VarDateFromDec(DECIMAL*,DATE*);
WINOLEAUTAPI VarDateFromDisp(IDispatch*,LCID,DATE*);

WINOLEAUTAPI VarCyFromUI1(BYTE,CY*);
WINOLEAUTAPI VarCyFromI2(SHORT sIn,CY*);
WINOLEAUTAPI VarCyFromI4(LONG,CY*);
WINOLEAUTAPI VarCyFromI8(LONG64,CY*);
WINOLEAUTAPI VarCyFromR4(FLOAT,CY*);
WINOLEAUTAPI VarCyFromR8(DOUBLE,CY*);
WINOLEAUTAPI VarCyFromDate(DATE,CY*);
WINOLEAUTAPI VarCyFromStr(OLECHAR*,LCID,ULONG,CY*);
WINOLEAUTAPI VarCyFromBool(VARIANT_BOOL,CY*);
WINOLEAUTAPI VarCyFromI1(signed char,CY*);
WINOLEAUTAPI VarCyFromUI2(USHORT,CY*);
WINOLEAUTAPI VarCyFromUI4(ULONG,CY*);
WINOLEAUTAPI VarCyFromUI8(ULONG64,CY*);
WINOLEAUTAPI VarCyFromDec(DECIMAL*,CY*);
WINOLEAUTAPI VarCyFromStr(OLECHAR*,LCID,ULONG,CY*);
WINOLEAUTAPI VarCyFromDisp(IDispatch*,LCID,CY*);

WINOLEAUTAPI VarBstrFromUI1(BYTE,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromI2(SHORT,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromI4(LONG,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromI8(LONG64,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromR4(FLOAT,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromR8(DOUBLE,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromDate(DATE,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromBool(VARIANT_BOOL,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromI1(signed char,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromUI2(USHORT,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromUI8(ULONG64,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromUI4(ULONG,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromCy(CY,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromDec(DECIMAL*,LCID,ULONG,BSTR*);
WINOLEAUTAPI VarBstrFromDisp(IDispatch*,LCID,ULONG,BSTR*);

WINOLEAUTAPI VarBoolFromUI1(BYTE,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI2(SHORT,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI4(LONG,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI8(LONG64,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromR4(FLOAT,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromR8(DOUBLE,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromDate(DATE,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromStr(OLECHAR*,LCID,ULONG,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromI1(signed char,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromUI2(USHORT,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromUI4(ULONG,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromUI8(ULONG64,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromCy(CY,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromDec(DECIMAL*,VARIANT_BOOL*);
WINOLEAUTAPI VarBoolFromDisp(IDispatch*,LCID,VARIANT_BOOL*);

WINOLEAUTAPI VarI1FromUI1(BYTE,signed char*);
WINOLEAUTAPI VarI1FromI2(SHORT,signed char*);
WINOLEAUTAPI VarI1FromI4(LONG,signed char*);
WINOLEAUTAPI VarI1FromI8(LONG64,signed char*);
WINOLEAUTAPI VarI1FromR4(FLOAT,signed char*);
WINOLEAUTAPI VarI1FromR8(DOUBLE,signed char*);
WINOLEAUTAPI VarI1FromDate(DATE,signed char*);
WINOLEAUTAPI VarI1FromStr(OLECHAR*,LCID,ULONG,signed char*);
WINOLEAUTAPI VarI1FromBool(VARIANT_BOOL,signed char*);
WINOLEAUTAPI VarI1FromUI2(USHORT,signed char*);
WINOLEAUTAPI VarI1FromUI4(ULONG,signed char*);
WINOLEAUTAPI VarI1FromUI8(ULONG64,signed char*);
WINOLEAUTAPI VarI1FromCy(CY,signed char*);
WINOLEAUTAPI VarI1FromDec(DECIMAL*,signed char*);
WINOLEAUTAPI VarI1FromDisp(IDispatch*,LCID,signed char*);

WINOLEAUTAPI VarUI2FromUI1(BYTE,USHORT*);
WINOLEAUTAPI VarUI2FromI2(SHORT,USHORT*);
WINOLEAUTAPI VarUI2FromI4(LONG,USHORT*);
WINOLEAUTAPI VarUI2FromI8(LONG64,USHORT*);
WINOLEAUTAPI VarUI2FromR4(FLOAT,USHORT*);
WINOLEAUTAPI VarUI2FromR8(DOUBLE,USHORT*);
WINOLEAUTAPI VarUI2FromDate(DATE,USHORT*);
WINOLEAUTAPI VarUI2FromStr(OLECHAR*,LCID,ULONG,USHORT*);
WINOLEAUTAPI VarUI2FromBool(VARIANT_BOOL,USHORT*);
WINOLEAUTAPI VarUI2FromI1(signed char,USHORT*);
WINOLEAUTAPI VarUI2FromUI4(ULONG,USHORT*);
WINOLEAUTAPI VarUI2FromUI8(ULONG64,USHORT*);
WINOLEAUTAPI VarUI2FromCy(CY,USHORT*);
WINOLEAUTAPI VarUI2FromDec(DECIMAL*,USHORT*);
WINOLEAUTAPI VarUI2FromDisp(IDispatch*,LCID,USHORT*);

WINOLEAUTAPI VarUI4FromStr(OLECHAR*,LCID,ULONG,ULONG*);
WINOLEAUTAPI VarUI4FromUI1(BYTE,ULONG*);
WINOLEAUTAPI VarUI4FromI2(SHORT,ULONG*);
WINOLEAUTAPI VarUI4FromI4(LONG,ULONG*);
WINOLEAUTAPI VarUI4FromI8(LONG64,ULONG*);
WINOLEAUTAPI VarUI4FromR4(FLOAT,ULONG*);
WINOLEAUTAPI VarUI4FromR8(DOUBLE,ULONG*);
WINOLEAUTAPI VarUI4FromDate(DATE,ULONG*);
WINOLEAUTAPI VarUI4FromBool(VARIANT_BOOL,ULONG*);
WINOLEAUTAPI VarUI4FromI1(signed char,ULONG*);
WINOLEAUTAPI VarUI4FromUI2(USHORT,ULONG*);
WINOLEAUTAPI VarUI4FromUI8(ULONG64,ULONG*);
WINOLEAUTAPI VarUI4FromCy(CY,ULONG*);
WINOLEAUTAPI VarUI4FromDec(DECIMAL*,ULONG*);
WINOLEAUTAPI VarUI4FromDisp(IDispatch*,LCID,ULONG*);

WINOLEAUTAPI VarUI8FromUI1(BYTE,ULONG64*);
WINOLEAUTAPI VarUI8FromI2(SHORT,ULONG64*);
WINOLEAUTAPI VarUI8FromI4(LONG,ULONG64*);
WINOLEAUTAPI VarUI8FromI8(LONG64,ULONG64*);
WINOLEAUTAPI VarUI8FromR4(FLOAT,ULONG64*);
WINOLEAUTAPI VarUI8FromR8(DOUBLE,ULONG64*);
WINOLEAUTAPI VarUI8FromDate(DATE,ULONG64*);
WINOLEAUTAPI VarUI8FromStr(OLECHAR*,LCID,ULONG,ULONG64*);
WINOLEAUTAPI VarUI8FromBool(VARIANT_BOOL,ULONG64*);
WINOLEAUTAPI VarUI8FromI1(signed char,ULONG64*);
WINOLEAUTAPI VarUI8FromUI2(USHORT,ULONG64*);
WINOLEAUTAPI VarUI8FromUI4(ULONG,ULONG64*);
WINOLEAUTAPI VarUI8FromDec(DECIMAL*,ULONG64*);
WINOLEAUTAPI VarUI8FromInt(INT,ULONG64*);
WINOLEAUTAPI VarUI8FromCy(CY,ULONG64*);
WINOLEAUTAPI VarUI8FromDisp(IDispatch*,LCID,ULONG64*);

WINOLEAUTAPI VarDecFromUI1(BYTE,DECIMAL*);
WINOLEAUTAPI VarDecFromI2(SHORT,DECIMAL*);
WINOLEAUTAPI VarDecFromI4(LONG,DECIMAL*);
WINOLEAUTAPI VarDecFromI8(LONG64,DECIMAL*);
WINOLEAUTAPI VarDecFromR4(FLOAT,DECIMAL*);
WINOLEAUTAPI VarDecFromR8(DOUBLE,DECIMAL*);
WINOLEAUTAPI VarDecFromDate(DATE,DECIMAL*);
WINOLEAUTAPI VarDecFromStr(OLECHAR*,LCID,ULONG,DECIMAL*);
WINOLEAUTAPI VarDecFromBool(VARIANT_BOOL,DECIMAL*);
WINOLEAUTAPI VarDecFromI1(signed char,DECIMAL*);
WINOLEAUTAPI VarDecFromUI2(USHORT,DECIMAL*);
WINOLEAUTAPI VarDecFromUI4(ULONG,DECIMAL*);
WINOLEAUTAPI VarDecFromUI8(ULONG64,DECIMAL*);
WINOLEAUTAPI VarDecFromCy(CY,DECIMAL*);
WINOLEAUTAPI VarDecFromDisp(IDispatch*,LCID,DECIMAL*);

WINOLEAUTAPI VarR4CmpR8(float,double);
WINOLEAUTAPI VarR8Pow(double,double,double*);
WINOLEAUTAPI VarR8Round(double,int,double*);
WINOLEAUTAPI VarDecAbs(const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecAdd(const DECIMAL*,const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecCmp(const DECIMAL*,const DECIMAL*);
WINOLEAUTAPI VarDecCmpR8(const DECIMAL*,DOUBLE);
WINOLEAUTAPI VarDecDiv(const DECIMAL*,const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecFix(const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecInt(const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecMul(const DECIMAL*,const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecNeg(const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarDecRound(const DECIMAL*,int,DECIMAL*);
WINOLEAUTAPI VarDecSub(const DECIMAL*,const DECIMAL*,DECIMAL*);
WINOLEAUTAPI VarCyAbs(const CY,CY*);
WINOLEAUTAPI VarCyAdd(const CY,const CY,CY*);
WINOLEAUTAPI VarCyCmp(const CY,const CY);
WINOLEAUTAPI VarCyCmpR8(const CY,DOUBLE);
WINOLEAUTAPI VarCyFix(const CY,CY*);
WINOLEAUTAPI VarCyInt(const CY,CY*);
WINOLEAUTAPI VarCyMul(const CY,CY,CY*);
WINOLEAUTAPI VarCyMulI4(const CY,LONG,CY*);
WINOLEAUTAPI VarCyMulI8(const CY,LONG64,CY*);
WINOLEAUTAPI VarCyNeg(const CY,CY*);
WINOLEAUTAPI VarCyRound(const CY,INT,CY*);
WINOLEAUTAPI VarCySub(const CY,const CY,CY*);
WINOLEAUTAPI VarAdd(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarAnd(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarCat(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarDiv(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarEqv(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarIdiv(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarImp(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarMod(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarMul(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarOr(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarPow(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarSub(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarXor(LPVARIANT,LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarAbs(LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarFix(LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarInt(LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarNeg(LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarNot(LPVARIANT,LPVARIANT);
WINOLEAUTAPI VarRound(LPVARIANT,int,LPVARIANT);
WINOLEAUTAPI VarCmp(LPVARIANT,LPVARIANT,LCID,ULONG);
WINOLEAUTAPI VarBstrCmp(BSTR,BSTR,LCID,ULONG);
WINOLEAUTAPI VarBstrCat(BSTR,BSTR,BSTR*);

#pragma pack(pop)

#endif
