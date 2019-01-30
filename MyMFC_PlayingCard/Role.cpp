#include "StdAfx.h"
#include "Role.h"
#include "CardRule.h"
CRole::CRole(CCardMap* cardMap)
{
	m_nCardType=-1;

	m_nCardCount=0;

	m_nDisCardCount=0;

	m_pCardMap=cardMap;

	m_nSource=0;
	m_nWin=0;
	m_nFail=0;
	

	m_bPass=FALSE;
	
}

CRole::~CRole(void)
{}
void CRole::CleanUp()
{
	for(int i=0;i<m_nCardCount;i++)
	  for(int j=0;j<i;j++)
	  {
		  if(m_cCard[i].m_nNumber<m_cCard[j].m_nNumber)
		  {
			  CCard temp=m_cCard[i];
			  m_cCard[i]=m_cCard[j];
			  m_cCard[j]=temp;
		  }
	  }
}

//���Ʒ���δ���Ƶı���
void CRole::ScanToCardTable()
{
	for(int i=0;i<15;i++)
	{
		m_nCardTable[i]=0;
	}
	for(int j=0;j<m_nCardCount;j++)
	{
		m_nCardTable[m_cCard[j].m_nNumber-3]++;
	}
	
}
//�����ѳ�����
void CRole::DeleteDisCard()
{
	for(int i=0;i<20;i++)
	{
		if(m_cDisCard[i].m_nNumber!=NULL)
		{
			m_cDisCard[i].m_nNumber=0;
			m_cDisCard[i].m_nColor=0;
		}
	}
}
//��������ŵ����Ƶı���
void CRole::ScanToDisCardTable()
{
   for(int i=0;i<15;i++)
   {
	   m_nDisCardTable[i]=0;
   }
   for(int i=0;i<m_nDisCardCount;i++)
   {
	   m_nDisCardTable[m_cDisCard[i].m_nNumber-3]++;
   }
}
BOOL CRole::SendCard(CardType &type)
{
	return TRUE;
}

BOOL CRole::DirectnessPlay(CardType &type)
{

	return TRUE;
}
void CRole::UnDisplayCard()
{
	for(int i=0;i<m_nCardCount;i++)
	{
		for(int k=0;k<m_nDisCardCount;k++)
		{
			if(m_cCard[i].m_nColor==m_cDisCard[k].m_nColor &&
				m_cCard[i].m_nNumber==m_cDisCard[k].m_nNumber)
			{
				m_cCard[i].m_nNumber=NULL;
			}
		}
	}
	int count=0;
	for(int i=0;i<m_nCardCount;i++)
	{
		if(m_cCard[i].m_nNumber!=NULL)
		{
			m_cCard[count]=m_cCard[i];
			count++;
		}
	}
	m_nCardCount=count;
}