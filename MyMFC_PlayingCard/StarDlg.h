// StarDlg.h : header file
//

#pragma once


// CStarDlg dialog
class CStarDlg : public CDialog
{
private: 
	
	CRgn   m_MainRgn;
	int m_nStarButton_X;//��ʼ������X����
	int m_nStarButton_Y;//��ʼ������Y����
	int m_nExitButton_X;//�˳�������X����
	int m_nExitButton_Y;//�˳�������Y����
	BOOL m_bInStar;//�Ƿ��ڿ�ʼ�����ľ�����
	BOOL m_bInExit;//�Ƿ����˳������ľ�����
	RECT m_rStarGame;//��ʼ�����ľ���
	RECT m_rExitGame;//�˳������ľ���
	RECT m_rWindow;//���ڵľ���
	HDC m_hStarDC_1;
	HDC m_hStarDC_2;
	HDC m_hExitDC_1;
	HDC m_hExitDC_2;
	HDC m_hGameBack;//����
	HDC m_hFrontDC;//ǰDC
	HDC m_hBackDC;//��DC
private:
	BOOL BitmapToDC(HDC DestDC,char* FileName,int Bitmap_Width,int Bitmap_Height);
// Construction
public:
	CStarDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MYMFC_PLAYINGCARD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
   
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags,CPoint point);
	afx_msg void OnMouseMove(UINT nFlags,CPoint point);
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	DECLARE_MESSAGE_MAP()
};
