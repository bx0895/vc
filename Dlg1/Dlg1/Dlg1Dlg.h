
// Dlg1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CDlg1Dlg �Ի���
class CDlg1Dlg : public CDialogEx
{
// ����
public:
	CDlg1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	float x;
	float y;
	CListBox LBox;
	float z;
	CString s;
	afx_msg void OnBnClickedButton1();
	CString str;
};