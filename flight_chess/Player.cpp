// Player.cpp
// 作者：刘黎可
// 版本：1.2
// 说明：实现了 Player 类的构造函数和相关功能，用于初始化玩家状态。
// 创建日期：2023-06-01

#include "Player.h"

Player::Player(PLAYER_COLOR c, bool f)
{
	player_color = c;
	is_computer = f;
	goal_achieved = 0;
}
