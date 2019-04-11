

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ACCMD.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ACCMDidl_h__
#define __ACCMDidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DACCMD_FWD_DEFINED__
#define ___DACCMD_FWD_DEFINED__
typedef interface _DACCMD _DACCMD;

#endif 	/* ___DACCMD_FWD_DEFINED__ */


#ifndef ___DACCMDEvents_FWD_DEFINED__
#define ___DACCMDEvents_FWD_DEFINED__
typedef interface _DACCMDEvents _DACCMDEvents;

#endif 	/* ___DACCMDEvents_FWD_DEFINED__ */


#ifndef __ACCMD_FWD_DEFINED__
#define __ACCMD_FWD_DEFINED__

#ifdef __cplusplus
typedef class ACCMD ACCMD;
#else
typedef struct ACCMD ACCMD;
#endif /* __cplusplus */

#endif 	/* __ACCMD_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ACCMD_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_ACCMD_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ACCMD_0000_0000_v0_0_s_ifspec;


#ifndef __ACCMDLib_LIBRARY_DEFINED__
#define __ACCMDLib_LIBRARY_DEFINED__

/* library ACCMDLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_ACCMDLib;

#ifndef ___DACCMD_DISPINTERFACE_DEFINED__
#define ___DACCMD_DISPINTERFACE_DEFINED__

/* dispinterface _DACCMD */
/* [uuid] */ 


EXTERN_C const IID DIID__DACCMD;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5688e6be-aa13-4938-93ca-2bf5275d2963")
    _DACCMD : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DACCMDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DACCMD * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DACCMD * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DACCMD * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DACCMD * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DACCMD * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DACCMD * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DACCMD * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DACCMDVtbl;

    interface _DACCMD
    {
        CONST_VTBL struct _DACCMDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DACCMD_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DACCMD_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DACCMD_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DACCMD_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DACCMD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DACCMD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DACCMD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DACCMD_DISPINTERFACE_DEFINED__ */


#ifndef ___DACCMDEvents_DISPINTERFACE_DEFINED__
#define ___DACCMDEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DACCMDEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DACCMDEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4dd6e309-ae91-4b6b-9b97-2cc0beab8ccb")
    _DACCMDEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DACCMDEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DACCMDEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DACCMDEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DACCMDEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DACCMDEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DACCMDEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DACCMDEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DACCMDEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DACCMDEventsVtbl;

    interface _DACCMDEvents
    {
        CONST_VTBL struct _DACCMDEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DACCMDEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DACCMDEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DACCMDEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DACCMDEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DACCMDEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DACCMDEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DACCMDEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DACCMDEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ACCMD;

#ifdef __cplusplus

class DECLSPEC_UUID("dfd50ebd-377f-481b-bfad-9f652f1f10d1")
ACCMD;
#endif
#endif /* __ACCMDLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


