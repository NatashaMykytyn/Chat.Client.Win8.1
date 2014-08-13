#pragma once


// диалоговое окно MyContacts

class MyContacts : public CDialogEx
{
	DECLARE_DYNAMIC(MyContacts)

public:
	MyContacts(CWnd* pParent = NULL);   // стандартный конструктор
	virtual ~MyContacts();

// Данные диалогового окна
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
