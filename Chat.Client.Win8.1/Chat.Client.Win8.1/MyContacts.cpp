// MyContacts.cpp: ���� ����������
//

#include "stdafx.h"
#include "Chat.Client.Win8.1.h"
#include "MyContacts.h"
#include "afxdialogex.h"
#include "Chat.Client.Win8.1Dlg.h"

// ���������� ���� MyContacts

IMPLEMENT_DYNAMIC(MyContacts, CDialogEx)

MyContacts::MyContacts(CWnd* pParent /*=NULL*/)
	: CDialogEx(MyContacts::IDD, pParent)
{

}

MyContacts::~MyContacts()
{
}

void MyContacts::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyContacts, CDialogEx)
	ON_BN_CLICKED(IDOK, &MyContacts::OnBnClickedOk)
END_MESSAGE_MAP()


// ����������� ��������� MyContacts


void MyContacts::OnBnClickedOk()
{
	// TODO: �������� ���� ��� ����������� �����������
	CDialogEx::OnOK();
}
