#include "StdAfx.h"
#include "PlayCard.h"
#include "time.h"
CPlayCard::CPlayCard(void)
{
}

CPlayCard::~CPlayCard(void)
{
}
void CPlayCard::initCard()
{
	//����ʮ�����ƶ���ֵ
	for(int i=0;i<13;i++)
	{
		//����
		m_cCard[i*4+0].m_nColor=CCard::SPADE;
		m_cCard[i*4+0].m_nNumber=i+3;
       //����
		m_cCard[i*4+1].m_nColor=CCard::HEART;
		m_cCard[i*4+1].m_nNumber=i+3;
		//÷��
		m_cCard[i*4+2].m_nColor=CCard::CLUB;
		m_cCard[i*4+2].m_nNumber=i+3;
		//����
		m_cCard[i*4+3].m_nColor=CCard::DIAMOND;
		m_cCard[i*4+3].m_nNumber=i+3;
	}
	m_cCard[52].m_nColor=CCard::SMALLBOSS;
	m_cCard[52].m_nNumber=16;
	m_cCard[53].m_nColor=CCard::BIGBOSS;
	m_cCard[53].m_nNumber=17;
}
//ϴ��
void CPlayCard::Shuffle()
{
  srand(time(NULL));
  for(int j=0;j<54;j++)
  {
	int i=rand()%54;
	CCard tempCard=m_cCard[i];
	m_cCard[i]=m_cCard[j];
	m_cCard[j]=tempCard;
  }
}

//����
void CPlayCard::ToDeal(CRole *play_1, CRole *play_2, CRole *play_3)
{
	//�����ķ���
	for(int i=0;i<17;i++)
	{
		play_1->m_cCard[i]=m_cCard[i*3+0];
		play_1->m_nCardCount++;
		
		play_2->m_cCard[i]=m_cCard[i*3+1];
		play_2->m_nCardCount++;
		
		play_3->m_cCard[i]=m_cCard[i*3+2];
		play_3->m_nCardCount++;
	}
	//����
	/*for(int i=0;i<17;i++)
	{
		play_1->m_cCard[i]=m_cCard[i];
		play_1->m_nCardCount++;
				
		play_2->m_cCard[i]=m_cCard[i+17];
		play_2->m_nCardCount++;

		play_3->m_cCard[i]=m_cCard[i+34];
		play_3->m_nCardCount++;
	}*/
}
//�ֵ�����
void CPlayCard::ToDealLord(CRole *play)
{
	for(int i=0;i<3;i++)
	{
		play->m_cCard[17+i]=m_cCard[51+i];
		play->m_nCardCount++;
	}

}