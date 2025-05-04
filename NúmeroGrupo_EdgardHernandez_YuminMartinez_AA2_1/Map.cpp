#include "Map.h"
#include <iostream>

Map::Map()
{
	// Leer el txt para inicializar filas y columas
	filas = 19;
	columnas = 55;
	m_map = new Map* [filas];
	for (int i = 0; i < filas; i++)
	{
		m_map[i] = new Map[columnas];
	}
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			m_map[i][j].m_map = nullptr;
			if (i == 0 || j == 0 ||i == filas-1 || j == columnas-1)
			{
				m_map[i][j].m_Type = objectType::LIMIT;
			}

		}
	}
}
void Map::printMap()
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (m_map[i][j].m_Type == objectType::LIMIT)
			{
				std::cout << "X";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}
