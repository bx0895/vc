
// AMFC10.h : AMFC10 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC10App:
// �йش����ʵ�֣������ AMFC10.cpp
//

class CAMFC10App : public CWinApp
{
public:
	CAMFC10App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC10App theApp;