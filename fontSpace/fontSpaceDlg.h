
// fontSpaceDlg.h : header file
//

#pragma once
#include "afxbutton.h"


// CfontSpaceDlg dialog
class CfontSpaceDlg : public CDialogEx
{
// Construction
public:
	CfontSpaceDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FONTSPACE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	void drawFont();
	void drawFontTextOut(HDC& thdc);
	void drawFontTextOutEx(HDC& thdc);

	CMFCButton m_btnTextOut;
	afx_msg void OnBnClickedMfcbutton1();
	CMFCButton m_btnDrawText;
	afx_msg void OnBnClickedDrawText();

private:
	HFONT hFont;
	CFont m_cFont;
	BOOL m_bBtnTextOut;
	BOOL m_bBtnTextOutEx;
public:
	afx_msg void OnBnClickedTextoutEx();
};
