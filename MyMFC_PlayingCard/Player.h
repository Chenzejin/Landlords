#pragma once
#include "role.h"

class CPlayer :public CRole
{
//˽�з���
private:
     BOOL CheckRule();//�жϳ����Ƿ���Ϲ���
public:
	 virtual BOOL SendCard(CardType &type);
	 virtual BOOL DirectnessPlay(CardType &type);
	 void GoBack();//���˻�ԭ��
public:
	CPlayer(CCardMap* cardMap);
	virtual ~CPlayer(void);
};
