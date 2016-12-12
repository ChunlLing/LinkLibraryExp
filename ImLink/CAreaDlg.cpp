// CAreaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ImLink.h"
#include "CAreaDlg.h"

#include "Areadll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCAreaDlg dialog


CCAreaDlg::CCAreaDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCAreaDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCAreaDlg)
	m_input = 0.0;
	m_circle = 0.0;
	//}}AFX_DATA_INIT
}


void CCAreaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCAreaDlg)
	DDX_Text(pDX, IDC_INPUT, m_input);
	DDX_Text(pDX, IDC_CIRCLE, m_circle);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCAreaDlg, CDialog)
	//{{AFX_MSG_MAP(CCAreaDlg)
	ON_BN_CLICKED(IDC_CALU, OnCalu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCAreaDlg message handlers

void CCAreaDlg::OnCalu() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	CArea s(m_input);
	m_circle = s.AreaEllipse();
	UpdateData(false);
}
