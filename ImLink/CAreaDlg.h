#if !defined(AFX_CAREADLG_H__4CDEB5F5_2000_4FD1_82C4_EA9F2CA91DC0__INCLUDED_)
#define AFX_CAREADLG_H__4CDEB5F5_2000_4FD1_82C4_EA9F2CA91DC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CAreaDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCAreaDlg dialog

class CCAreaDlg : public CDialog
{
// Construction
public:
	CCAreaDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCAreaDlg)
	enum { IDD = IDD_DIALOG2 };
	double	m_input;
	double	m_circle;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCAreaDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCAreaDlg)
	afx_msg void OnCalu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CAREADLG_H__4CDEB5F5_2000_4FD1_82C4_EA9F2CA91DC0__INCLUDED_)
