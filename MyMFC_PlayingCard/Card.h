#pragma once
//����
class CCard
{
public:
    static const int SPADE=0;//����
	static const int HEART=1;//����
	static const int CLUB=2;//÷��
	static const int DIAMOND=3;//���� 
	static const int SMALLBOSS=0;//С��
	static const int BIGBOSS=1;//����
public:
	int m_nColor;
	int m_nNumber;
public:
	CCard(void);
	~CCard(void);
};
