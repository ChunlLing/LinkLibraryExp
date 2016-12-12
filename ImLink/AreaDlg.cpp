// AreaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ImLink.h"

#include "Regulardll.h"
#include "AreaDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAreaDlg dialog


CAreaDlg::CAreaDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAreaDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAreaDlg)
	m_input = 0.0;
	m_square = 0.0;
	//}}AFX_DATA_INIT
}


void CAreaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAreaDlg)
	DDX_Text(pDX, IDC_INPUT, m_input);
	DDX_Text(pDX, IDC_SQUARE, m_square);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAreaDlg, CDialog)
	//{{AFX_MSG_MAP(CAreaDlg)
	ON_BN_CLICKED(IDC_CALU, OnCalu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAreaDlg message handlers

void CAreaDlg::OnCalu() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	m_square = AreaSquare(m_input);
	UpdateData(false);
}
