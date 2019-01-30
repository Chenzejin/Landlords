#include "StdAfx.h"
#include "CardRule.h"

CCardRule::CCardRule(void)
{
}

CCardRule::~CCardRule(void)
{
}
//�Ƿ��ǵ�����
int CCardRule::IsOneCard(CRole* player)
{
	if(player->m_nDisCardCount==1)
	{
		return SINGLE;
	}
	return -1;
}
//�Ƿ���һ��
int CCardRule::IsTwoCard(CRole *player)
{
	if(player->m_nDisCardCount==2)
	{
		for(int i=0;i<13;i++)
		{
			if(player->m_nDisCardTable[i]==2)
			{
				return PAIR;
			}
		}
	}
	return -1;
}
//�Ƿ�������
int CCardRule::IsThreeCard(CRole *player)
{
	if(player->m_nDisCardCount==3)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==3)
			{
				return THREE;
			}
		}
	}
	return -1;
}
//�ж��Ƿ���ը��
int CCardRule::Isbomb(CRole *player)
{
	if(player->m_nDisCardCount==4)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==4)
			{
				return BOMB;
			}
		}
	}else if(player->m_nDisCardCount==2)
	{
		if(player->m_nDisCardTable[13]==1 && player->m_nCardTable[14]==1)
		{
			return BOMB;
		}
	}
	return -1;
}
//�ж��Ƿ�������һ
int CCardRule::IsThreeWOne(CRole *player)
{
	if(player->m_nDisCardCount==4)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==3)
			{
				return THREE_SINGLE;
			}
		}
	}
	return -1;
}
//�ж��Ƿ�������һ��
int CCardRule::IsThreeWTwo(CRole *player)
{
	if(player->m_nDisCardCount==5)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==3)
			{
				for(int j=0;j<14;j++)
				{
					if(player->m_nDisCardTable[j]==2)
					{
						return THREE_PAIR;
					}
				}
			}
		}
	}
	return -1;
}
//�ж��Ƿ���ը��������
int CCardRule::IsFourWSingle(CRole *player)
{
	int SingleCount=0;//����������
	if(player->m_nDisCardCount==6)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==4)
			{
				for(int j=0;j<14;j++)
				{
					if(player->m_nDisCardTable[j]==1)
					{
						SingleCount++;
					}
				}
				if(SingleCount==2)
				{
					return FOUR_SINGLE;
				}else
				{
					return -1;
				}
			}
		}
	}else
	{
		return -1;
	}
	return -1;
}
//�ж��Ƿ���ը��������
int CCardRule::IsFourWPair(CRole* player)
{
	int count=0;//�Ե���Ŀ
	if(player->m_nDisCardCount==8)
	{
		for(int i=0;i<14;i++)
		{
			if(player->m_nDisCardTable[i]==4)
			{
				for(int j=0;j<14;j++)
				{
					if(player->m_nDisCardTable[j]==2)
					{
						count++;
					}
				}
				if(count==2)
				{
					return FOUR_PAIR;
				}else
				{
					return -1;
				}
			}
		}
	}
	return -1;
}
//�ж��Ƿ���˳��
int CCardRule::IsSeries(CRole *player)
{
	
	if(player->m_nDisCardCount<5)
	{
		return -1;
	}
	for(int i=12;i<14;i++)
	{
		if(player->m_nDisCardTable[i]!=0)
		{
			return -1;
		}
	}
	for(int i=0;i<12;i++)
	{
		if(player->m_nDisCardTable[i]==1)
		{
			for(int j=i;j<i+player->m_nDisCardCount;j++)
			{
				if(player->m_nDisCardTable[j]!=1)
				{
					return -1;
				}
			}
			return SERIES;
		}
	}
return -1;
}

//�ж��Ƿ���˳��
int CCardRule::IsPairSeries(CRole *player)
{
	if(player->m_nDisCardCount<6 || player->m_nDisCardCount%2!=0)
	{
		return -1;
	}
	
	for(int i=0;i<14;i++)
	{
		if(player->m_nDisCardTable[i]==2)
		{
			for(int j=i;j<i+player->m_nDisCardCount/2;j++)
			{
				if(player->m_nDisCardTable[j]!=2)
				{
					return -1;
				}
			}
			return PAIR_SERIES;
		}
	}
	return -1;
}
//�ж��Ƿ�������һ��˳��
int CCardRule::IsThreeWOneSeries(CRole *player)
{
	int SingleCount=0;//����������
	if(player->m_nDisCardCount<8 || player->m_nDisCardCount%2!=0)
	{
		return -1;
	}
	for(int i=0;i<14;i++)
	{
		if(player->m_nDisCardTable[i]==3)
		{
			for(int j=i;j<(player->m_nDisCardCount-(player->m_nDisCardCount/4))/3+i;j++)
			{
				if(player->m_nDisCardTable[j]!=3)
				{
					return -1;
				}
			}
			for(int k=0;k<14;k++)
			{
				if(player->m_nDisCardTable[k]==1)
				{
					SingleCount++;
				}
			}
			if(SingleCount==player->m_nDisCardCount/4)
			{
				return THREE_SINGLE_SERIES;
			}else
			{
				return -1;
			}
		}
	}
	return	-1;
}



//�ж��Ƿ��������Ե�˳��
int CCardRule::IsThreeWTwoSeries(CRole *player)
{
	int PairCount=0;//�Ե�����
	if(player->m_nDisCardCount<10 || player->m_nDisCardCount%5!=0)
	{
		return -1;
	}
	for(int i=0;i<14;i++)
	{
		if(player->m_nDisCardTable[i]==3)
		{	
			for(int j=i;j<(player->m_nDisCardCount-(player->m_nDisCardCount/5)*2)/3+i;j++)
			{
				if(player->m_nDisCardTable[j]!=3)
				{
					return -1;
				}
			}
			for(int k=0;k<14;k++)
			{
				if(player->m_nDisCardTable[k]==2)
				{
					PairCount++;
				}
			}
			
			if(PairCount==player->m_nDisCardCount/5)
			{
				return THREE_PAIR_SERIES;
			}else
			{
				return -1;
			}


		}
	}
	return -1;
}
//�ж��Ƿ���ը����������˳��
int CCardRule::IsFourWSingleSeries(CRole *player)
{
	int SingleCount=0;//����������
	if(player->m_nDisCardCount<12 || player->m_nDisCardCount%2!=0)
	{
		return -1;
	}
	for(int i=0;i<14;i++)
	{
		if(player->m_nDisCardTable[i]==4)
		{
			for(int j=i;j<(player->m_nDisCardCount-(player->m_nDisCardCount/6*2))/4+i;j++)
			{
				if(player->m_nDisCardTable[j]!=4)
				{
					return -1;
				}
			}
			for(int k=0;k<14;k++)
			{
				if(player->m_nDisCardTable[k]==1)
				{
					SingleCount++;
				}
			}
			if(SingleCount==player->m_nDisCardCount/6*2)
			{
				return FOUR_SINGLE_SERIES;
			}else
			{
				return -1;
			}
		}
	}
	return -1;
}
//�ж��Ƿ���ը�����Ե�˳��
int CCardRule::IsFourWPairSeries(CRole *player)
{
	//�Ե�����
	int PairCount=0;
	if(player->m_nDisCardCount<16)
	{
		return -1;
	}
	for(int i=0;i<14;i++)
	{
		if(player->m_nDisCardTable[i]==4)
		{
			for(int j=i;j<(player->m_nDisCardCount-(player->m_nDisCardCount/8*4))/4+i;j++)
			{
				if(player->m_nDisCardTable[j]!=4)
				{
					return -1;
				}
			}
			for(int k=0;k<14;k++)
			{
				if(player->m_nDisCardTable[k]==2)
				{
					PairCount++;
				}
			}
			if(PairCount==2)
			{
				return FOUR_PAIR_SERIES;
			}else
			{
				return -1;
			}
		}
	}
	return -1;
}