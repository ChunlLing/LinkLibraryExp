// ImLinkView.cpp : implementation of the CImLinkView class
//

#include "stdafx.h"
#include "ImLink.h"

#include "ImLinkDoc.h"
#include "ImLinkView.h"

#include "AreaDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImLinkView

IMPLEMENT_DYNCREATE(CImLinkView, CView)

BEGIN_MESSAGE_MAP(CImLinkView, CView)
	//{{AFX_MSG_MAP(CImLinkView)
	ON_COMMAND(ID_REGULAR, OnRegular)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImLinkView construction/destruction

CImLinkView::CImLinkView()
{
	// TODO: add construction code here

}

CImLinkView::~CImLinkView()
{
}

BOOL CImLinkView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CImLinkView drawing

void CImLinkView::OnDraw(CDC* pDC)
{
	CImLinkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CImLinkView printing

BOOL CImLinkView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CImLinkView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CImLinkView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CImLinkView diagnostics

#ifdef _DEBUG
void CImLinkView::AssertValid() const
{
	CView::AssertValid();
}

void CImLinkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImLinkDoc* CImLinkView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImLinkDoc)));
	return (CImLinkDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImLinkView message handlers

void CImLinkView::OnRegular() 
{
	// TODO: Add your command handler code here
	CAreaDlg dlg;
	dlg.DoModal();
}
