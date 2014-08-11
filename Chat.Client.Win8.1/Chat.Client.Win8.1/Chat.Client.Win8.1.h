
// Chat.Client.Win8.1.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CChatClientWin81App:
// О реализации данного класса см. Chat.Client.Win8.1.cpp
//

class CChatClientWin81App : public CWinApp
{
public:
	CChatClientWin81App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CChatClientWin81App theApp;