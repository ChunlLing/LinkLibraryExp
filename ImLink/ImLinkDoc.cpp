// ImLinkDoc.cpp : implementation of the CImLinkDoc class
//

#include "stdafx.h"
#include "ImLink.h"

#include "ImLinkDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImLinkDoc

IMPLEMENT_DYNCREATE(CImLinkDoc, CDocument)

BEGIN_MESSAGE_MAP(CImLinkDoc, CDocument)
	//{{AFX_MSG_MAP(CImLinkDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImLinkDoc construction/destruction

CImLinkDoc::CImLinkDoc()
{
	// TODO: add one-time construction code here

}

CImLinkDoc::~CImLinkDoc()
{
}

BOOL CImLinkDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CImLinkDoc serialization

void CImLinkDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CImLinkDoc diagnostics

#ifdef _DEBUG
void CImLinkDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImLinkDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImLinkDoc commands
