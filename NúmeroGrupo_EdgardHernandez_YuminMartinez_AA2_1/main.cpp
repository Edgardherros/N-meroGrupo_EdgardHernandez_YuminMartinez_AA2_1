#include "Map.h"
#include <iostream>

int main()
{
	//Map map;
	Map** m_map = new Map * [19];
	for (int i = 0; i < 19; i++)
	{
		m_map[i] = new Map[55];
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (i == 0 || j == 0 || i == 18 || j == 54)
			{
				m_map[i][j].m_Type = objectType::LIMIT;
			}
			else
			{
				m_map[i][j].m_Type = objectType::DEFAULT;
			}
		}
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (m_map[i][j].m_Type == objectType::LIMIT)
			{
				std::cout << "X";
			}
			else if (m_map[i][j].m_Type == objectType::DEFAULT)
			{
				std::cout << " ";
			}
			else if (m_map[i][j].m_Type == objectType::PLAYER)
			{
				std::cout << "P";
			}
			else if (m_map[i][j].m_Type == objectType::NPC)
			{
				std::cout << "N";
			}
			else if (m_map[i][j].m_Type == objectType::MONEY)
			{
				std::cout << "$";
			}
			else if (m_map[i][j].m_Type == objectType::CAR)
			{
				std::cout << "C";
			}
			
		}
		std::cout << std::endl;
	}
}
