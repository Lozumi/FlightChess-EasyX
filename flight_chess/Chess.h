// Chess.h
// 作者：刘黎可
// 版本：1.1
// 说明：定义了 Chess 类，该类用于表示飞行棋游戏中的单个棋子（飞机）。
// 创建日期：2023-06-01

#ifndef CHESS_H_
#define CHESS_H_

#include "Ground.h"

enum CHESS_COLOR { CRed, CYellow, CBlue, CGreen };

class Chess
{
public:
	Chess();
	Chess(CHESS_COLOR c, int x, Ground* cg);

	int direction;
	int has_finished;
	int is_off;
	int position;
	CHESS_COLOR chess_color;
	Ground* chess_ground;

	void set_off();
	void move(int x);
};

#endif
