#include "Player.h"
#include "Map.h"
Player::Player( )
{
	m_PosX = Random(1, 50 - 1);
	m_PosY = Random(1, 70 / 3 - 1);
}