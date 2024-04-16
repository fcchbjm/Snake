#pragma once

//�ߵķ���
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//�ߵ�״̬
//������ײǽ��ײ���Լ��������˳�
enum GAME_STATUS
{
	OK,//����
	KILL_BY_WALL,//ײǽ
	KILL_BY_SELF,//ײ���Լ�
	END_NORMAL//�����˳�
};

//����Ľڵ�����
typedef struct SnakeNode
{
	//����
	int x;
	int y;
	//ָ����һ���ڵ��ָ��
	struct SnakeNode* next;
}SnakeNode, * pSnakeNode;

//typedef struct SnakeNode* pSnakeNode

//̰����
typedef struct Snake
{
	pSnakeNode _pSnake;//ָ����ͷ��ָ��
	pSnakeNode _pfood;//ָ��ʳ��ڵ��ָ��
	enum DIRECTION _dir;//�ߵķ���
	enum GAME_STATUS _status;//�ߵ�״̬
	int _food_weight;//һ��ʳ��ķ���
	int _score;//�ܷ���
	int _sleep_time;//��Ϣʱ��
}Snake,* pSnake;

//����������


