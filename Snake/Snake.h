#pragma once

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
	pSnakeNode _pfood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//蛇的状态
	int _food_weight;//一个食物的分数
	int _score;//总分数
	int _sleep_time;//休息时间
}Snake,* pSnake;

//函数的声明


