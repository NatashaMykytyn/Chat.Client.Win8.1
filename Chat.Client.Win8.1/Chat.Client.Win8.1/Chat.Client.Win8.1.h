
// Chat.Client.Win8.1.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CChatClientWin81App:
// � ���������� ������� ������ ��. Chat.Client.Win8.1.cpp
//

class CChatClientWin81App : public CWinApp
{
public:
	CChatClientWin81App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CChatClientWin81App theApp;