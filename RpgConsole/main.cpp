#include <iostream>
#include "Mage.h"
#include "Warrior.h"
#include"GameManager.h"
#include "Map.h"

using namespace std;

int main() {
	//GameManager gameManager;
	//gameManager.Initialize();
	//gameManager.StartGame();


	/*Map map;
	map.DisplayMap();*/


	Enemy enemy;
	PlayerManager playermanager;
	playermanager.CreatePlayer();
	FightManager fight;
	fight.StartFight(*playermanager.GetPlayer(), enemy);

	return 0;
}