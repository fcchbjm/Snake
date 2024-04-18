#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>

#define POS_X 24
#define POS_Y 5

#define WALL L'□'
#define BODY L'●'
#define FOOD L'★'

//蛇的方向
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//蛇的状态
//正常，撞墙，撞到自己，正常退出
enum GAME_STATUS
{
	OK,//正常
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//撞到自己
	END_NORMAL//正常退出
};

//蛇身的节点类型
typedef struct SnakeNode
{
	//坐标
	int x;
	int y;
	//指向下一个节点的指针
	struct SnakeNode* next;
}SnakeNode, * pSnakeNode;

//typedef struct SnakeNode* pSnakeNode

//贪吃蛇
typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//蛇的状态
	int _food_weight;//一个食物的分数
	int _score;//总分数
	int _sleep_time;//休息时间 - 时间短，速度快；时间长，速度慢
}Snake,* pSnake;

//函数的声明

//定位光标位置
void SetPos(short x, short y);

//游戏的初始化
void GameStart(pSnake ps);

//欢迎界面的打印
void WelcomeToGame();

//创建地图
void CreateMap();

//初始化蛇身
void InitSnake(pSnake ps);

//创建食物
void CreateFood(pSnake ps);

//游戏运行的逻辑
void GameRun(pSnake ps);

//蛇的移动-走一步
void SnakeMove(pSnake ps);

//判断下一个坐标是否是食物
int NextIsFood(pSnakeNode pn, pSnake ps);

//下一个位置是食物，就吃掉食物
void EatFood(pSnakeNode pn, pSnake ps);

//下一个位置不是食物
void NoFood(pSnakeNode pn, pSnake ps);

//检测蛇是否撞墙
void KillByWall(pSnake ps);

//检测蛇是否撞到自己
void KillBySelf(pSnake ps);

//游戏善后的工作
void GameEnd(pSnake ps);
