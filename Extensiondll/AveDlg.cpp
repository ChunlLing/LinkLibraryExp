// AveDlg.cpp : implementation file
//

#include "stdafx.h"
//#include "Extensiondll.h"
#include "AveDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAveDlg dialog


CAveDlg::CAveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAveDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAveDlg)
	m_ave = _T("");
	m_num1 = 0;
	m_num2 = 0;
	//}}AFX_DATA_INIT
}


void CAveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAveDlg)
	DDX_Text(pDX, IDC_AVE, m_ave);
	DDX_Text(pDX, IDC_NUMBER1, m_num1);
	DDX_Text(pDX, IDC_NUMBER2, m_num2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAveDlg, CDialog)
	//{{AFX_MSG_MAP(CAveDlg)
	ON_BN_CLICKED(IDC_CALCU, OnCalcu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAveDlg message handlers

void CAveDlg::OnCalcu() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	double ave = (double)(m_num1 + m_num2) / 2;
	m_ave.Format("%5.1f", ave);
	UpdateData(FALSE);
}
