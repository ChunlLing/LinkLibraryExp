#if !defined(AFX_AVEDLG_H__F99DD28C_60AB_451C_8DB7_04111687EFC3__INCLUDED_)
#define AFX_AVEDLG_H__F99DD28C_60AB_451C_8DB7_04111687EFC3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#include "Resource.h"
#endif // _MSC_VER > 1000
// AveDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAveDlg dialog

class AFX_EXT_CLASS CAveDlg : public CDialog
{
// Construction
public:
	CAveDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAveDlg)
//	enum { IDD = IDD_DIALOG1 };
	CString	m_ave;
	int		m_num1;
	int		m_num2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAveDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAveDlg)
	afx_msg void OnCalcu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AVEDLG_H__F99DD28C_60AB_451C_8DB7_04111687EFC3__INCLUDED_)
