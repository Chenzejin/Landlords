#pragma once

class CDrawCard
{
public:
	static const int g_CARDWIDTH=64;
	static const int g_CARDHEIGHT=89;
private:
	HDC m_hCardDC[15];//15�����Ƶ�DC
//˽�з���
private:
	BOOL BitmapToDC(HDC DestDC,char* fileName,int Bitmap_Width,int Bitmap_Height);
public:
	int initDrawCard();
	//���ƻ�����
	int DrawCard(HDC hdc,int x,int y,int Color,int number);

	//���Ƶı��滭����
	int DrawCard(HDC hdc,int x,int y);
	//��������
	int DrawLordCard(HDC hdc,int index,int Color,int number,BOOL disPlay);
	
public:
	CDrawCard(void);
	~CDrawCard(void);
};
