// ACCMDCtrl.cpp : Implementation of the CACCMDCtrl ActiveX Control class.

#include "pch.h"
#include "framework.h"
#include "ACCMD.h"
#include "ACCMDCtrl.h"
#include "ACCMDPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CACCMDCtrl, COleControl)

// Message map

BEGIN_MESSAGE_MAP(CACCMDCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Dispatch map

BEGIN_DISPATCH_MAP(CACCMDCtrl, COleControl)
	DISP_FUNCTION_ID(CACCMDCtrl, "CallBatch", dispidCallBatch, CallBatch, VT_EMPTY, VTS_BSTR)
END_DISPATCH_MAP()

// Event map

BEGIN_EVENT_MAP(CACCMDCtrl, COleControl)
END_EVENT_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CACCMDCtrl, 1)
	PROPPAGEID(CACCMDPropPage::guid)
END_PROPPAGEIDS(CACCMDCtrl)

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CACCMDCtrl, "MFCACTIVEXCONTRO.ACCMDCtrl.1",
	0xdfd50ebd,0x377f,0x481b,0xbf,0xad,0x9f,0x65,0x2f,0x1f,0x10,0xd1)

// Type library ID and version

IMPLEMENT_OLETYPELIB(CACCMDCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs

const IID IID_DACCMD = {0x5688e6be,0xaa13,0x4938,{0x93,0xca,0x2b,0xf5,0x27,0x5d,0x29,0x63}};
const IID IID_DACCMDEvents = {0x4dd6e309,0xae91,0x4b6b,{0x9b,0x97,0x2c,0xc0,0xbe,0xab,0x8c,0xcb}};

// Control type information

static const DWORD _dwACCMDOleMisc =
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CACCMDCtrl, IDS_ACCMD, _dwACCMDOleMisc)

// CACCMDCtrl::CACCMDCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CACCMDCtrl

BOOL CACCMDCtrl::CACCMDCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ACCMD,
			IDB_ACCMD,
			0,
			_dwACCMDOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CACCMDCtrl::CACCMDCtrl - Constructor

CACCMDCtrl::CACCMDCtrl()
{
	InitializeIIDs(&IID_DACCMD, &IID_DACCMDEvents);
	// TODO: Initialize your control's instance data here.
}

// CACCMDCtrl::~CACCMDCtrl - Destructor

CACCMDCtrl::~CACCMDCtrl()
{
	// TODO: Cleanup your control's instance data here.
}

void CACCMDCtrl::CallBatch(BSTR cmd)
{

	// additional information
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	// set the size of the structures
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	//LPWSTR cmdLine = cmd.GetBuffer(0);

	// start the program up
	CreateProcess(NULL,   // the path
		cmd,            // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si,            // Pointer to STARTUPINFO structure
		&pi             // Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
	);
	// Close process and thread handles. 
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	::SysFreeString(cmd);
	return;
}

// CACCMDCtrl::OnDraw - Drawing function

void CACCMDCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CACCMDCtrl::DoPropExchange - Persistence support

void CACCMDCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}


// CACCMDCtrl::OnResetState - Reset control to default state

void CACCMDCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// CACCMDCtrl message handlers
