// ExLinkView.cpp : implementation of the CExLinkView class
//

#include "stdafx.h"
#include "ExLink.h"

#include "ExLinkDoc.h"
#include "ExLinkView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExLinkView

IMPLEMENT_DYNCREATE(CExLinkView, CView)

BEGIN_MESSAGE_MAP(CExLinkView, CView)
	//{{AFX_MSG_MAP(CExLinkView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExLinkView construction/destruction

CExLinkView::CExLinkView()
{
	// TODO: add construction code here

}

CExLinkView::~CExLinkView()
{
}

BOOL CExLinkView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CExLinkView drawing

void CExLinkView::OnDraw(CDC* pDC)
{
	CExLinkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(10, 10, "�����εı߳�Ϊ10������������������");
}

/////////////////////////////////////////////////////////////////////////////
// CExLinkView printing

BOOL CExLinkView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CExLinkView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CExLinkView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CExLinkView diagnostics

#ifdef _DEBUG
void CExLinkView::AssertValid() const
{
	CView::AssertValid();
}

void CExLinkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExLinkDoc* CExLinkView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExLinkDoc)));
	return (CExLinkDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExLinkView message handlers

void CExLinkView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	typedef double ( * GETDT)(double x);				// ����һ��ָ������ָ������
	GETDT GetDT;										// ����һ��ָ������ָ������
	FARPROC lpfn = NULL;
	HINSTANCE hinst = NULL;
	hinst = ::LoadLibrary("Regulardll.dll");				// ��̬����DLL
	if (hinst == NULL) 
	{
		MessageBox("���ܼ��ض�̬���ӿ⣡");
		return;
	}
	lpfn = GetProcAddress(hinst, "AreaSquare");			// ��ȡ����AreaSquare()�ĵ�ַ
	if (lpfn == NULL) 
	{
		MessageBox("���ܼ�������ĺ�����");
	}
	else 
	{
		GetDT = (GETDT)lpfn;						// ����ת��
		CString str;
		double s = ( * GetDT)(10);
		str.Format("����������� %6.2f", s);
		AfxMessageBox(str, MB_OK, 0);
		FreeLibrary(hinst);							// ж��DLL
	}				

	CView::OnLButtonDown(nFlags, point);
}
