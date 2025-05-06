#pragma once
#include <iostream>
#include <time.h>
class Player
{
public:
	int m_PosX;
	int m_PosY;
	int money;

	//Player();
	//void playerMoviment();
};
enum class Teclas
{
	VK_ESCAPE,
	VK_UP,
	VK_DOWN, 
	VK_LEFT, 
	VK_RIGHT
};
/*int Random(int vmin, int vmax)
{
	int random = vmin + rand() % (vmax - vmin + 1);
	return random;
	
}*/
