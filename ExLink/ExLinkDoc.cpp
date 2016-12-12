// ExLinkDoc.cpp : implementation of the CExLinkDoc class
//

#include "stdafx.h"
#include "ExLink.h"

#include "ExLinkDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExLinkDoc

IMPLEMENT_DYNCREATE(CExLinkDoc, CDocument)

BEGIN_MESSAGE_MAP(CExLinkDoc, CDocument)
	//{{AFX_MSG_MAP(CExLinkDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExLinkDoc construction/destruction

CExLinkDoc::CExLinkDoc()
{
	// TODO: add one-time construction code here

}

CExLinkDoc::~CExLinkDoc()
{
}

BOOL CExLinkDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CExLinkDoc serialization

void CExLinkDoc::Serialize(CArchive& ar)
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
// CExLinkDoc diagnostics

#ifdef _DEBUG
void CExLinkDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExLinkDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExLinkDoc commands
