// Player.cpp
// ���ߣ������
// �汾��1.2
// ˵����ʵ���� Player ��Ĺ��캯������ع��ܣ����ڳ�ʼ�����״̬��
// �������ڣ�2023-06-01

#include "Player.h"

Player::Player(PLAYER_COLOR c, bool f)
{
	player_color = c;
	is_computer = f;
	goal_achieved = 0;
}
