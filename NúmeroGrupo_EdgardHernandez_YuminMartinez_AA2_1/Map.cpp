#include "Map.h"
#include <iostream>
#include <fstream>
#include <sstream> 

/*Map::Map()
{
	m_map** = new m_map * [19];
	for (int i = 0; i < 19; i++)
	{
		m_map[i]* = new Map[55];
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (i == 0 || j == 0 || i == 18 || j == 54)
			{
				m_map[i][j] = objectType::LIMIT;
			}
			else
			{
				m_map[i][j] = objectType::DEFAULT;
			}
		}
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (m_map[i][j] == objectType::LIMIT)
			{
				std::cout << "X";
			}
			else if (m_map[i][j] == objectType::DEFAULT)
			{
				std::cout << " ";
			}
			else if (m_map[i][j] == objectType::PLAYER)
			{
				std::cout << "P";
			}
			else if (m_map[i][j] == objectType::NPC)
			{
				std::cout << "N";
			}
			else if (m_map[i][j] == objectType::MONEY)
			{
				std::cout << "$";
			}
			else if (m_map[i][j] == objectType::CAR)
			{
				std::cout << "C";
			}

		}
		std::cout << std::endl;
	}
}*/
void Map::initMap()
{
	// Inicializar el mapa
	std::ifstream myFile("config.txt");
	if (!myFile.is_open())
	{
		std::cout << "Error al abrir el archivo" << std::endl;
		return;
	}
	std::string line;
	std::getline(myFile, line);
	std::stringstream ss(line);
	//std::cout << line << " ";
	std::string line2;
	std::getline(myFile, line2);
	//std::cout << line2 << " ";
	std::string line3;
	std::getline(myFile, line3);
	//std::cout << line3 << " ";
	std::string item;
	
	if (std::getline(ss, item, ';')) 
	{
		filas = std::stoi(item);  // convertir "50" a entero
	}
	if (std::getline(ss, item, ';')) 
	{
		columnas = std::stoi(item);  // convertir "70" a entero
	}
	
	std::cout << filas << " " << columnas << std::endl;
		
		myFile.close();
}
	// Leer el txt para inicializar filas y columas
	
