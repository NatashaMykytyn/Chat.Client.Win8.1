#pragma once


// ���������� ���� MyContacts

class MyContacts : public CDialogEx
{
	DECLARE_DYNAMIC(MyContacts)

public:
	MyContacts(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~MyContacts();

// ������ ����������� ����
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
