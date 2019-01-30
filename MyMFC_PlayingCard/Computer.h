#pragma once
#include "role.h"

class CComputer :public CRole
{
private:
	CRole* m_pRole[2];
public:
	BOOL DirectnessPlay(CardType &type);
	virtual BOOL SendCard(CardType &type,CRole* role_1,CRole* role_2);
	
	BOOL SearchSingle(int number);//����������������
	BOOL AI_SearchSingle(int number);//��������������������
	
	BOOL SearchPair(int number);//����������
	BOOL AI_SearchPair(int number);//��������������
	
	BOOL SearchThree(int number);//�������ŵ�����
	BOOL AI_SearchThree(int number);//��������������������

	BOOL SearchThreeWOne(int number);//��������һ��������
	BOOL AI_SearchThreeWOne(int number);//������������һ��������
	
	BOOL SearchThreeWTwo(int number);//���������Ե�������
	BOOL AI_SearchThreeWTwo(int number);//�������������Ե�������
	
	BOOL SearchBomb(int number);//����ը������
	BOOL AI_SearchBomb(int number);//��������ը����������

	BOOL SearchFourWSingle(int number);//����ը����������������
	BOOL AI_SearchFourWSingle(int number);//��������ը����������������

	BOOL SearchFourWPair(int number);//����ը�����Ե�������
	BOOL AI_SearchFourWPair(int number);//��������ը�����Ե�������
	
	BOOL SearchSeries(int number,int Long);//����˳������
	BOOL AI_SearchSeries(int number,int Long);//��������˳������

	BOOL SearchPairSeries(int number,int Long);//����˳������
	BOOL AI_SearchPairSeries(int number,int Long);//��������˳������

	BOOL SearchThreeWOneSeries(int number,int Long);//��������һ��˳������
	BOOL AI_SearchThreeWOneSeries(int number,int Long);//������������һ��˳������ 
private:
	BOOL DirectnessAI();//����ֱ�ӳ��Ƶ�AI
	BOOL SendCardAI(CRole* role_1,CRole* role_2);//���Ը��Ƶ�AI

public:
	CComputer(CCardMap* cardMap);
	virtual ~CComputer(void);

};
