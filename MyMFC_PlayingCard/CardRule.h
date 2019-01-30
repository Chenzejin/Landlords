#pragma once
#include "Role.h"
class CCardRule
{
public:
	//�Ƶ�����
	static const int SINGLE=0;//����
	static const int PAIR=1;//��
	static const int THREE=2;//����
	static const int THREE_SINGLE=3;//����һ
	static const int THREE_PAIR=4;//������
	static const int FOUR_SINGLE=5;//�Ĵ�һ
	static const int FOUR_PAIR=6;//�Ĵ���
	static const int SERIES=7;//˳��
	static const int PAIR_SERIES=8;//˳��
	static const int THREE_SINGLE_SERIES=9;//����һ��˳��
	static const int THREE_PAIR_SERIES=10;//�����Ե�˳��
	static const int FOUR_SINGLE_SERIES=11;//�Ĵ�������˳��
	static const int FOUR_PAIR_SERIES=12;//�Ĵ��Ե�˳��
	static const int BOMB=13;//ը��

public:
	static int IsOneCard(CRole* player);//�ж��Ƿ��ǵ�����
	static int IsTwoCard(CRole* player);//�ж��Ƿ���һ��
	static int IsThreeCard(CRole* player);//�ж��Ƿ�������
	static int Isbomb(CRole* player);//�ж��Ƿ���ը��
	
	static int IsThreeWOne(CRole* player);//�ж��Ƿ�������һ
	static int IsThreeWTwo(CRole* player);//�ж��Ƿ���������
	static int IsFourWSingle(CRole* player);//�ж��Ƿ���ը�������������
	static int IsFourWPair(CRole* player);//�ж��Ƿ���ը�������Ե����
	
	static int IsSeries(CRole* player);//�ж��Ƿ���˳��
	static int IsPairSeries(CRole* player);//�ж��Ƿ���˳��
	static int IsThreeWOneSeries(CRole* player);//�ж��Ƿ�������һ��˳��
	static int IsThreeWTwoSeries(CRole* player);//�ж��Ƿ��������Ե�˳��
	static int IsFourWSingleSeries(CRole* player);//�ж��Ƿ���ը����������˳��
	static int IsFourWPairSeries(CRole* player);//�ж��Ƿ���ը�����Ե�˳�� 
public:
	CCardRule(void);
	~CCardRule(void);
};
