// Regulardll.h : main header file for the REGULARDLL DLL
//

#if !defined(AFX_REGULARDLL_H__FEF26C34_513E_4A42_814E_6975A2B006C1__INCLUDED_)
#define AFX_REGULARDLL_H__FEF26C34_513E_4A42_814E_6975A2B006C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CRegulardllApp
// See Regulardll.cpp for the implementation of this class
//

extern "C" __declspec(dllexport) double AreaEllipse(double r);
extern "C" __declspec(dllexport) double AreaSquare(double x);

class CRegulardllApp : public CWinApp
{
public:
	CRegulardllApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRegulardllApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CRegulardllApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REGULARDLL_H__FEF26C34_513E_4A42_814E_6975A2B006C1__INCLUDED_)
