#pragma once

// ACCMDPropPage.h : Declaration of the CACCMDPropPage property page class.


// CACCMDPropPage : See ACCMDPropPage.cpp for implementation.

class CACCMDPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CACCMDPropPage)
	DECLARE_OLECREATE_EX(CACCMDPropPage)

// Constructor
public:
	CACCMDPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_ACCMD };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

