// ExLink.h : main header file for the EXLINK application
//

#if !defined(AFX_EXLINK_H__DDF90B0D_D2C1_4041_A927_A8F448F22F62__INCLUDED_)
#define AFX_EXLINK_H__DDF90B0D_D2C1_4041_A927_A8F448F22F62__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CExLinkApp:
// See ExLink.cpp for the implementation of this class
//

class CExLinkApp : public CWinApp
{
public:
	CExLinkApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExLinkApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CExLinkApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXLINK_H__DDF90B0D_D2C1_4041_A927_A8F448F22F62__INCLUDED_)
