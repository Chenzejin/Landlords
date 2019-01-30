#pragma once
#include "DrawCard.h"
#include "CardMap.h"
#include "PlayCard.h"
#include "Player.h"
#include "Computer.h"
#include "DrawItem.h"
class CGame
{
public:
	static const int GAME_RUN=50;//��Ϸ����ʱ��
public:
	static const int LEFT=0;//���
	static const int CENTER=1;//�м�
	static const int RIGHT=2;//�ұ�
private:
    int m_nCRemoveX;//�м����
	int m_nCRemoveY;
	int m_nLRemoveX;//������
	int m_nLRemoveY;
	int m_nRRemoveX;//�ұ����
	int m_nRRemoveY;
	int m_nMoveNumber;//�ƶ�������ʱ�������
	int m_nToDealNumber;//���ƴ�����ʱ�������

	HWND m_hWnd;
	RECT m_rExit; 
	RECT m_rSend;
	RECT m_rYes;
	RECT m_rNo;
	int m_nLord;//����
	int m_nStar;//��ʼ���Ƶ���
	int m_nCurrentPlay;//��ǰ���Ƶ���
	BOOL m_bChooseLord;//�Ƿ���ѡ�����״̬
	HDC m_hDestDC;//Ŀ��DC
	HDC m_hBackDC;//���󻺳�DC
	
	BOOL m_bLive;//��Ϸ�Ƿ�����
	BOOL m_bStar;//��Ϸ�Ƿ�ʼ
	BOOL m_bStarPlay;//��Ϸ�Ƿ�ʼ��
	
	CRole::CardType m_tRoleCardType;//
	CDrawCard* m_pDrawCard;
    CDrawItem* m_pDrawItem;
	CCardMap*  m_pCardMap;
    CPlayCard* m_pPlayCard;
	CPlayer* m_pCenter;//�м�����
	CComputer* m_pLeft;//��ߵ����
	CComputer* m_pRight;//�ұߵ����
	
public:
	BOOL MoveCard();//�����ƶ�

	BOOL NewGame();//�µ���Ϸ
	BOOL NewRound();//�µ�һ��
	BOOL produceLord();//��������
	BOOL ToDealLordCard(int who);//�ֵ�����
	int GameLoop();//��Ϸ����������
	int GamePaint();//��Ϸ����
	int GameUpdate();//��Ϸ�߼�����
	int MouseLButtonDown(POINT point);//�������¼�
	int MouseRButtonDown(POINT point);//����Ҽ��¼�

	void InitNumberCount();//��ʼ��ʱ�������
	void PainLordCard();//���Ƶ�����
	void PainPoint();//���Ʒ�����
	void UpCard(POINT point);//�����������ķ���
	void SendCard(POINT point);//����
	
public:
	CGame(HDC hdc,HWND hwnd);
	~CGame(void);
};
