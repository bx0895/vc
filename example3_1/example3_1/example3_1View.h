
// example3_1View.h : Cexample3_1View ��Ľӿ�
//

#pragma once


class Cexample3_1View : public CView
{
protected: // �������л�����
	Cexample3_1View();
	DECLARE_DYNCREATE(Cexample3_1View)

// ����
public:
	Cexample3_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample3_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example3_1View.cpp �еĵ��԰汾
inline Cexample3_1Doc* Cexample3_1View::GetDocument() const
   { return reinterpret_cast<Cexample3_1Doc*>(m_pDocument); }
#endif
