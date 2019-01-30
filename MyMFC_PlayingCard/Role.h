#pragma once
#include "Card.h"
#include "CardMap.h"

//��ɫ��
class CRole
{
public:
	//�Ƶ����ͽṹ
	struct CardType
	{
		int m_nType;
		int m_nValue;
		int m_nLong;
	};
public:
	static const int ALLY=0;//����
	static const int LORD=1;//����
public:
	int m_nSource;
	int m_nWin;
	int m_nFail;
	
	
	int m_nPeople;//��ҵ������ǵ��˻������� 

	CCardMap* m_pCardMap;
    CardType m_MyType;

	BOOL m_bPass;//�Ƿ����
	

	//int m_nPeopleType;//������������
	int m_nCardType;//���Ƶ�����
	
	int m_nCardTable[15];//��¼��δ���Ƶı�
	int m_nCardCount;//��δ���Ƶ�������
	CCard m_cCard[20];//δ������

	int m_nDisCardTable[15];//��¼���Ƶı�
	int m_nDisCardCount;//��¼���Ƶ�����
	CCard m_cDisCard[20];//��¼��������
public:
	virtual BOOL DirectnessPlay(CardType &type);//ֱ�ӳ���
	virtual BOOL SendCard(CardType &type);//����
	virtual void UnDisplayCard();//��ʧ��
	void CleanUp();//������
	void DeleteDisCard();//ɾ���ѳ�����
	void ScanToCardTable();//��������δ���Ƶı��� 
	void ScanToDisCardTable();//�����������Ƶı���
	
public:
	CRole(CCardMap* cardMap);
	virtual ~CRole(void);
};
