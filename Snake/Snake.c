#include "Snake.h"

void SetPos(short x, short y)
{
	//获得标准输出设备的句柄
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//定位光标的位置
	COORD pos = { x, y };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 14);
	wprintf(L"欢迎来到贪吃蛇小游戏\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"用 ↑. ↓ . ← . → 来控制蛇的移动，按F3加速，F4减速\n");
	SetPos(25, 15);
	wprintf(L"加速能够得到更高的分数\n");

	SetPos(42, 20);
	system("pause");
	system("cls");
}

void CreateMap()
{
	//上
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');
	}

	//下
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');
	}
	//左
	for (i = 1; i <= 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'□');
	}

	//右
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", L'□');
	}

	getchar();
}


void GameStart(pSnake ps)
{
	//0. 先设置窗口的大小，再光标隐藏
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//影藏光标操作
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = FALSE; //隐藏控制台光标
	SetConsoleCursorInfo(houtput, &CursorInfo);//设置控制台光标状态

	//1. 打印环境界面和功能介绍
	WelcomeToGame();
	//2. 绘制地图
	CreateMap();
	//3. 创建蛇

	//4. 创建食物

	//5. 设置游戏的相关信息

}