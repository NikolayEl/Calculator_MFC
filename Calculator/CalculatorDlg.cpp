
// CalculatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCalculatorDlg dialog


CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
	, TempNumber(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	number_1 = 0.0f;
	number_2 = 0.0f;
	sign = '0';
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, TempNumber);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_0, &CCalculatorDlg::OnClicked0)
	ON_BN_CLICKED(IDC_1, &CCalculatorDlg::OnClicked1)
	ON_BN_CLICKED(IDC_2, &CCalculatorDlg::OnClicked2)
	ON_BN_CLICKED(IDC_3, &CCalculatorDlg::OnClicked3)
	ON_BN_CLICKED(IDC_4, &CCalculatorDlg::OnClicked4)
	ON_BN_CLICKED(IDC_5, &CCalculatorDlg::OnClicked5)
	ON_BN_CLICKED(IDC_6, &CCalculatorDlg::OnClicked6)
	ON_BN_CLICKED(IDC_7, &CCalculatorDlg::OnClicked7)
	ON_BN_CLICKED(IDC_8, &CCalculatorDlg::OnClicked8)
	ON_BN_CLICKED(IDC_9, &CCalculatorDlg::OnClicked9)
	ON_BN_CLICKED(IDC_equals, &CCalculatorDlg::OnClickedEquals)
	ON_BN_CLICKED(IDC_MINUS, &CCalculatorDlg::OnClickedMinus)
	ON_BN_CLICKED(IDC_PLUS, &CCalculatorDlg::OnClickedPlus)
END_MESSAGE_MAP()


// CCalculatorDlg message handlers

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




//void CCalculatorDlg::OnBnClickedButton1()
//{
//	// TODO: Add your control notification handler code here
//
//}


void CCalculatorDlg::OnClicked0()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (TempNumber != _T(""))TempNumber = TempNumber + _T("0");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked1()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("1");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked2()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("2");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked3()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("3");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked4()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("4");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked5()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("5");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked6()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("6");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked7()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("7");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked8()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("8");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked9()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	TempNumber = TempNumber + _T("9");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClickedEquals()
{
	// TODO: Add your control notification handler code here
	switch (sign)
	{
	case '+':
		UpdateData(TRUE);
		number_2 = atof(_bstr_t((LPCTSTR)TempNumber));
		number_1 += number_2;
		TempNumber.Format(_T("%.3f"), number_1);
		UpdateData(FALSE);
		break;
	case '-':
		UpdateData(TRUE);
		number_2 = atof(_bstr_t((LPCTSTR)TempNumber));
		number_1 -= number_2;
		TempNumber.Format(_T("%.3f"), number_1);
		UpdateData(FALSE);
		break;
	case '0':

		break;
	}
}


void CCalculatorDlg::OnClickedMinus()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	number_1 = atof(_bstr_t((LPCTSTR)TempNumber));
	TempNumber = "";
	UpdateData(FALSE);
	sign = '-';
}


void CCalculatorDlg::OnClickedPlus()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	number_1 = atof(_bstr_t((LPCTSTR)TempNumber));
	TempNumber = "";
	UpdateData(FALSE);
	sign = '+';
}
