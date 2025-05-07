#include "funtions.h"		
#include "Map.h"

 Map::Map()
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

	//std::cout << filas << " " << columnas << std::endl;

	myFile.close();
	
	m_Type = new objectType * [filas];
	for (int i = 0; i < columnas; i++)
	{
		m_Type[i] = new objectType[columnas];
	}
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (i == 0 || j == 0 || i == filas-1 || j == columnas-1 || j == limitLosSantos || j == limitSanFierro)
			{
				m_Type[i][j] = objectType::LIMIT;
			}
			else
			{
				m_Type[i][j] = objectType::DEFAULT;
			}

			
		}
	}
	int x = m_playerPtr->getPosX();
	int y = m_playerPtr->getPosY();
	m_Type[x][y] = objectType::PLAYER;
	

}


void Map::printMap()
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (m_Type[i][j] == objectType::LIMIT)
			{
				std::cout << " X";
			}
			else if (m_Type[i][j] == objectType::DEFAULT)
			{
				std::cout << "  ";
			}
			else if (m_Type[i][j] == objectType::PLAYER)
			{
				std::cout << " P";
			}
			
		}
		std::cout << std::endl;
	}
}
	
	
