// ImLinkView.h : interface of the CImLinkView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMLINKVIEW_H__2F6E1910_B3EE_4F38_9746_664ADA206CAC__INCLUDED_)
#define AFX_IMLINKVIEW_H__2F6E1910_B3EE_4F38_9746_664ADA206CAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CImLinkView : public CView
{
protected: // create from serialization only
	CImLinkView();
	DECLARE_DYNCREATE(CImLinkView)

// Attributes
public:
	CImLinkDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImLinkView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CImLinkView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImLinkView)
	afx_msg void OnRegular();
	afx_msg void OnArea();
	afx_msg void OnExtension();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ImLinkView.cpp
inline CImLinkDoc* CImLinkView::GetDocument()
   { return (CImLinkDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMLINKVIEW_H__2F6E1910_B3EE_4F38_9746_664ADA206CAC__INCLUDED_)
