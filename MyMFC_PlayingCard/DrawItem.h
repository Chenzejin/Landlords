#pragma once

class CDrawItem
{
public:
	static const int GAMEBACK=1;//��Ϸ����
	static const int GAMEPASS=2;//��Ϸ�Ĺ��ư�ť
	static const int GAMEOK=3;//��Ϸ�ĳ��ư�ť
	static const int GAMEEXIT=4;//��Ϸ���˳���ť
	static const int CHOOSE=5;//�Ƿ񵱵����İ�ť
	static const int LORD_FACE=6;//��������
	static const int FARMER_FACE=7;//ũ�����
	static const int PASS=8;
public:
	HDC m_hBack;//��Ϸ����DC
	HDC m_hPassButtom;//����DC��ť
	HDC m_hOk;//����DC 
	HDC m_hExit;//�˳���ϷDC
	HDC m_hYesNo;//�Ƿ񵱵��� 
	HDC m_hLordFace;
	HDC m_hFarmerFace;
	HDC m_hPass;//���Ƶ�ͼƬ
	
	//˽�з���
private:
	BOOL BitmapToDC(HDC hdc,char* fileName,int Width,int Height);
public:
	int initDrawItem();
	int DrawGameItem(HDC hdc,int x,int y,int type);
	int DrawMapText(char* text,int x,int y,COLORREF color,int size,HDC hdc);
	
public:
	CDrawItem(void);
	~CDrawItem(void);
};
