#pragma once
#include <iostream>
enum class objectType
{
	PLAYER,
	NPC,
	MONEY,
	LIMIT,
	CAR,
	DEFAULT
};
class Map
{
public:
	
	int filas;
	int columnas;
	objectType m_Type;
	//void printMap();
};