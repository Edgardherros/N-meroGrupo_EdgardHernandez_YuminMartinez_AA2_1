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
	Map();
	int filas;
	int columnas;
	Map** m_map;
	objectType m_Type;
	void printMap();
};