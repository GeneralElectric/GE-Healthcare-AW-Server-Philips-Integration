// ACCMDPropPage.cpp : Implementation of the CACCMDPropPage property page class.

#include "pch.h"
#include "framework.h"
#include "ACCMD.h"
#include "ACCMDPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CACCMDPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CACCMDPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CACCMDPropPage, "MFCACTIVEXCONT.ACCMDPropPage.1",
	0x0504c539,0xf9d3,0x4153,0x90,0x9b,0x30,0xd5,0x6d,0x72,0x5d,0x13)

// CACCMDPropPage::CACCMDPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CACCMDPropPage

BOOL CACCMDPropPage::CACCMDPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ACCMD_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// CACCMDPropPage::CACCMDPropPage - Constructor

CACCMDPropPage::CACCMDPropPage() :
	COlePropertyPage(IDD, IDS_ACCMD_PPG_CAPTION)
{
}

// CACCMDPropPage::DoDataExchange - Moves data between page and properties

void CACCMDPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CACCMDPropPage message handlers
