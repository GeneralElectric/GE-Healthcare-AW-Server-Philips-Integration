#pragma once

// ACCMDCtrl.h : Declaration of the CACCMDCtrl ActiveX Control class.


// CACCMDCtrl : See ACCMDCtrl.cpp for implementation.

class CACCMDCtrl : public COleControl
{
	DECLARE_DYNCREATE(CACCMDCtrl)

// Constructor
public:
	CACCMDCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CACCMDCtrl();

	DECLARE_OLECREATE_EX(CACCMDCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CACCMDCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CACCMDCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CACCMDCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
		dispidCallBatch = 1
	};
	void CallBatch(BSTR cmd);
};

