// ACCMD.cpp : Implementation of CACCMDApp and DLL registration.

#include "pch.h"
#include "framework.h"
#include "ACCMD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CACCMDApp theApp;

const GUID CDECL _tlid = {0x272e832c,0x464a,0x4583,{0xbb,0xf6,0x4e,0x29,0x13,0x39,0xaa,0x00}};
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CACCMDApp::InitInstance - DLL initialization

BOOL CACCMDApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CACCMDApp::ExitInstance - DLL termination

int CACCMDApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
