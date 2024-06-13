// Ground.cpp
// 作者：刘黎可
// 版本：1.0
// 说明：实现了 Ground 类的构造函数，用于初始化棋盘节点的状态。
// 创建日期：2023-06-01

#include "Ground.h"

Ground::Ground()
{
	x = 0;
	y = 0;
	position = 0;
	next = nullptr;
	next_ = nullptr;
	ground_color = GYellow;
}

Ground::Ground(int x_, int y_, int posi, Ground * nex, Ground * nex_, GROUND_COLOR gc)
{
	x = x_;
	y = y_;
	position = posi;
	next = nex;
	next_ = nex_;
	ground_color = gc;
}
