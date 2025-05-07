#pragma once
#include "Map.h"
#include "funtions.h"
class Player
{
	
private:
	int m_PosX;
	int m_PosY;
	int money = 0;
	Player();
	
public:

	int getPosX() const { return m_PosX; }
	int getPosY() const { return m_PosY; }
	
	//void playerMoviment();
};


int Random(int vmin, int vmax)
{

	return vmin + rand() % (vmax - vmin + 1);

}
