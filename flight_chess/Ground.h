// Ground.h
// 作者：刘黎可
// 版本：1.1
// 说明：定义了 Ground 类，该类用于表示飞行棋棋盘上的节点，每个节点代表棋盘上的一个位置。
// 创建日期：2023-06-01

#ifndef GROUND_H_
#define GROUND_H_

enum GROUND_COLOR { GYellow, GBlue, GRed, GGreen, GWhite };

class Ground
{
public:

	Ground();
	Ground(int x_, int y_, int posi, Ground * nex, Ground * nex_, GROUND_COLOR gc);

	int x;
	int y;
	int position;
	GROUND_COLOR ground_color;

	Ground *next;
	Ground *next_;
};

#endif