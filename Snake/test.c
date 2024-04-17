#define _CRT_SECURE_NO_WARNINGS 1



#include "Snake.h"

void test(void)
{
	//创建贪吃蛇

	//pSnakeNode pSnake = NULL;
	Snake snake = { 0 };

	//初始化游戏
	//1. 打印环境界面
	//2. 功能介绍
	//3. 绘制地图
	//4. 创建蛇
	//5. 创建食物
	//6. 设置游戏的相关信息
	GameStart(&snake);

	//运行游戏
	//GameRun();

	//结束游戏 - 善后工作
	//GameEend();
}

int main()
{
	//设置本地环境
	setlocale(LC_ALL, "");

	test();

	return 0;
}