#include "Snake.h"

void SetPos(short x, short y)
{
	//��ñ�׼����豸�ľ��
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//��λ����λ��
	COORD pos = { x, y };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 14);
	wprintf(L"��ӭ����̰����С��Ϸ\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"�� ��. �� . �� . �� �������ߵ��ƶ�����F3���٣�F4����\n");
	SetPos(25, 15);
	wprintf(L"�����ܹ��õ����ߵķ���\n");

	SetPos(42, 20);
	system("pause");
	system("cls");
}

void CreateMap()
{
	//��
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'��');
	}

	//��
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'��');
	}
	//��
	for (i = 1; i <= 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'��');
	}

	//��
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", L'��');
	}

	getchar();
}


void GameStart(pSnake ps)
{
	//0. �����ô��ڵĴ�С���ٹ������
	system("mode con cols=100 lines=30");
	system("title ̰����");
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//Ӱ�ع�����
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = FALSE; //���ؿ���̨���
	SetConsoleCursorInfo(houtput, &CursorInfo);//���ÿ���̨���״̬

	//1. ��ӡ��������͹��ܽ���
	WelcomeToGame();
	//2. ���Ƶ�ͼ
	CreateMap();
	//3. ������

	//4. ����ʳ��

	//5. ������Ϸ�������Ϣ

}