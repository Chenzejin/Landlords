#pragma once
#include "Card.h"
#include "Role.h"
class CPlayCard
{
public:
	CCard m_cCard[54];//54����
public:
	void initCard();
	void Shuffle();//ϴ��
	void ToDeal(CRole* play_1,CRole* play_2,CRole* play_3);//����
	void ToDealLord(CRole* play);//�ֵ�����

	void MoveCard();//����ʱ�Ƶ��ƶ�
public:
	CPlayCard(void);
	~CPlayCard(void);
};
