#if !defined(AFX_AREADLG_H__D0881E71_2B3C_47B1_A56C_3CCA682751A7__INCLUDED_)
#define AFX_AREADLG_H__D0881E71_2B3C_47B1_A56C_3CCA682751A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AreaDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAreaDlg dialog

class CAreaDlg : public CDialog
{
// Construction
public:
	CAreaDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAreaDlg)
	enum { IDD = IDD_DIALOG1 };
	double	m_input;
	double	m_square;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAreaDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAreaDlg)
	afx_msg void OnCalu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AREADLG_H__D0881E71_2B3C_47B1_A56C_3CCA682751A7__INCLUDED_)
