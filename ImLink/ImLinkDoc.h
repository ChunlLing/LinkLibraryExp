// ImLinkDoc.h : interface of the CImLinkDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMLINKDOC_H__0A5AB0C4_8ADD_45F8_A019_BFE005F84D2B__INCLUDED_)
#define AFX_IMLINKDOC_H__0A5AB0C4_8ADD_45F8_A019_BFE005F84D2B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CImLinkDoc : public CDocument
{
protected: // create from serialization only
	CImLinkDoc();
	DECLARE_DYNCREATE(CImLinkDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImLinkDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CImLinkDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImLinkDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMLINKDOC_H__0A5AB0C4_8ADD_45F8_A019_BFE005F84D2B__INCLUDED_)
