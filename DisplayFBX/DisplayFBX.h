
// DisplayFBX.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDisplayFBXApp: 
// �йش����ʵ�֣������ DisplayFBX.cpp
//

class CDisplayFBXApp : public CWinApp
{
public:
	CDisplayFBXApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDisplayFBXApp theApp;