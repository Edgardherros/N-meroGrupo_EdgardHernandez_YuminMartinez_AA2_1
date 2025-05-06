#include "Map.h"
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "Player.h"
#include "NPC.h"
int main()
{
	srand(time(NULL));
	Map map;
	map.initMap();
}
