#pragma once
#include "Player.h"
#include "funtions.h"
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
private:
	int filas;
	int columnas;
	int limitLosSantos = columnas / 3;
	int limitSanFierro = limitLosSantos * 2;
	Player* m_playerPtr = nullptr; // Puntero a Player
public:

	Map();
	objectType** m_Type;
	void initMap();
	void printMap();
};