#include <iostream>
#include "Mage.h"
#include "Warrior.h"
#include"GameManager.h"
#include "Map.h"
#include "conio.h"

using namespace std;

int main() {
	/*GameManager gameManager;
	gameManager.Initialize();
	gameManager.StartGame();*/
	
	/*char c;
	while (true) {
		c = _getch();
		if (c == 'a') {
			cout << "vous avez appuyé sur a";
		}
		if (c == 'g') {
			cout << "vous avez appuyé sur g";
		}
		
	}*/
	

	Map map;
	PlayerManager playermanager;
	playermanager.CreatePlayer();
	system("cls");

	map.DisplayMap();
	map.MooveHero();

	Enemy enemy;
	FightManager fight;
	fight.StartFight(*playermanager.GetPlayer(), enemy);
	map.GetHeroCell().RemoveEnemy();
	map.DisplayMap();
	map.MooveHero();

	return 0;
}