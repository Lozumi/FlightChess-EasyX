// Player.h
// 作者：刘黎可
// 版本：1.2
// 说明：定义了 Player 类，该类用于表示飞行棋游戏中的玩家，包括人类玩家和电脑AI玩家。
// 创建日期：2023-06-01

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Chess.h"

enum PLAYER_COLOR { PYellow, PBlue, PRed, PGreen };

class Player
{
public:

	Player(PLAYER_COLOR c, bool f);

	int goal_achieved;
	bool is_computer;
	PLAYER_COLOR player_color;
	Chess chess[4];
};

#endif
