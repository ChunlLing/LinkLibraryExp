// Areadll.h : main header file for the AREADLL DLL
//

#if !defined(AFX_AREADLL_H__A9C7564E_26A6_4E96_B766_5D14EFD67DC6__INCLUDED_)
#define AFX_AREADLL_H__A9C7564E_26A6_4E96_B766_5D14EFD67DC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAreadllApp
// See Areadll.cpp for the implementation of this class
//

class CAreadllApp : public CWinApp
{
public:
	CAreadllApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAreadllApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CAreadllApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AREADLL_H__A9C7564E_26A6_4E96_B766_5D14EFD67DC6__INCLUDED_)

extern "C" class __declspec(dllexport) CArea
{
	public:
		CArea(double x = 0.0);
		~CArea();
		double AreaSquare();
		double AreaEllipse();
	private:
		double a;
		double result;
};
