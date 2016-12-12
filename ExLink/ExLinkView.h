// ExLinkView.h : interface of the CExLinkView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXLINKVIEW_H__FE66D2B3_E7C5_4973_9258_2EBF8CD24B29__INCLUDED_)
#define AFX_EXLINKVIEW_H__FE66D2B3_E7C5_4973_9258_2EBF8CD24B29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CExLinkView : public CView
{
protected: // create from serialization only
	CExLinkView();
	DECLARE_DYNCREATE(CExLinkView)

// Attributes
public:
	CExLinkDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExLinkView)
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
	virtual ~CExLinkView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CExLinkView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ExLinkView.cpp
inline CExLinkDoc* CExLinkView::GetDocument()
   { return (CExLinkDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXLINKVIEW_H__FE66D2B3_E7C5_4973_9258_2EBF8CD24B29__INCLUDED_)
