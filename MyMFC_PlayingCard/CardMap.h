#pragma once
//�Ƶĵ�ͼ��
class CCardMap
{
public:
	//��Ϸ��������
	static const int X=360;
	static const int Y=200;
	//��������
	/***/
	static const int LEFT_POINT_NAME_X=110;
	static const int LEFT_POINT_NAME_Y=510;
	static const int LEFT_POINT_SOURCE_X=235;
	static const int LEFT_POINT_SOURCE_Y=510;
	static const int LEFT_POINT_WIN_X=188;
	static const int LEFT_POINT_WIN_Y=510;

	/***/
	static const int PLAY_POINT_NAME_X=110;
	static const int PLAY_POINT_NAME_Y=526;
	static const int PLAY_POINT_SOURCE_X=235;
	static const int PLAY_POINT_SOURCE_Y=526;
	static const int PLAY_POINT_WIN_X=188;
	static const int PLAY_POINT_WIN_Y=526;

	/***/
	static const int RIGHT_POINT_NAME_X=110;
	static const int RIGHT_POINT_NAME_Y=542;
	static const int RIGHT_POINT_SOURCE_X=235;
	static const int RIGHT_POINT_SOURCE_Y=542;
	static const int RIGHT_POINT_WIN_X=188;
	static const int RIGHT_POINT_WIN_Y=542;

	/***/
	//ѡ��˭�ǵ����Ŀ�������
	static const int CHOOSE_X=300;
	static const int CHOOSE_Y=350;

	//����˭�ǵ�������������
	static const int LEFT_NAME_X=200;
	static const int LEFT_NAME_Y=170;
	static const int CENTER_NAME_X=360;
	static const int CENTER_NAME_Y=280;
	static const int RIGHT_NAME_X=520;
	static const int RIGHT_NAME_Y=170;
	//�����Ƶ�����ϵ
	static const int LORD_X0=300;
	static const int LORD_Y0=40;

	static const int LORD_X1=375;
	static const int LORD_Y1=40;
	
	static const int LORD_X2=445;
	static const int LORD_Y2=40;
	//����������ľ���
	static const int UP_CARD=30;
	//���������
	static const int CENTER_X0=280;
	static const int CENTER_Y0=480;
	//����Ѿ������Ƶķ�����
	static const int CENTER_X1=220;
	static const int CENTER_Y1=370;
	//������������
	static const int LEFT_X0=20;
	static const int LEFT_Y0=40;
	//�������Ѿ������Ƶķ�����
	static const int LEFT_X1=110;
	static const int LEFT_Y1=20;
	//�ұ����������
	static const int RIGHT_X0=710;
	static const int RIGHT_Y0=40;
   //�������Ѿ������Ƶķ�����
	static const int RIGHT_X1=630;
	static const int RIGHT_Y1=20;
	
	
	//�˳���Ϸ��ť������ϵ
	static const int EXIT_X=690;
	static const int EXIT_Y=540;
	//������Ϸ��ť������ϵ
	static const int OK_X=660;
	static const int OK_Y=480;

public:
    int m_nMoveX;//ÿ����λ��ʱ��X����
	int m_nMoveY;//ÿ����λ��ʱ��Y����
	RECT CenterRect[20];//�м���ҷ��Ƶľ���λ��
	RECT CenterDisCardRect[20];//�м���ҳ��Ƶľ���λ��

	RECT LeftRect[20];//�����ҷ��Ƶľ���λ��
	RECT LeftDisCardRect[20];//�����ҳ��Ƶľ���λ��

	RECT RightRect[20];//�ұ���ҷ��Ƶľ���λ��
    RECT RightDisCardRect[20];//�ұ���ҳ��Ƶľ���λ��
public:
	void InitRect();//���³�ʼ���Ƶ�λ�� 
public:
	CCardMap(void);
	~CCardMap(void);
};
