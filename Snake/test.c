#define _CRT_SECURE_NO_WARNINGS 1



#include "Snake.h"

void test(void)
{
	//����̰����

	//pSnakeNode pSnake = NULL;
	Snake snake = { 0 };

	//��ʼ����Ϸ
	//1. ��ӡ��������
	//2. ���ܽ���
	//3. ���Ƶ�ͼ
	//4. ������
	//5. ����ʳ��
	//6. ������Ϸ�������Ϣ
	GameStart(&snake);

	//������Ϸ
	//GameRun();

	//������Ϸ - �ƺ���
	//GameEend();
}

int main()
{
	//���ñ��ػ���
	setlocale(LC_ALL, "");

	test();

	return 0;
}