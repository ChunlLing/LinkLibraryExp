// ImLink.h : main header file for the IMLINK application
//

#if !defined(AFX_IMLINK_H__BAD1B7CA_31B3_4CB7_B7A3_C2272E123C94__INCLUDED_)
#define AFX_IMLINK_H__BAD1B7CA_31B3_4CB7_B7A3_C2272E123C94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CImLinkApp:
// See ImLink.cpp for the implementation of this class
//

class CImLinkApp : public CWinApp
{
public:
	CImLinkApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImLinkApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CImLinkApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMLINK_H__BAD1B7CA_31B3_4CB7_B7A3_C2272E123C94__INCLUDED_)
