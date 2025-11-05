#include <iostream>
#include <chrono>
#include <thread>
#include "conio.h"

#include "GameManager.h"
#include "Inventory.h"
using namespace std;

int main() {

	
	
	

	// ENTRER = 13

	/*int input = _getch();
	cout << input;*/

	/*Item item("potion soin", 8, 12, 1);
	item.Display();*/


	/*Player perso("bob", 100, 100, 5);
	perso.DisplayStats();*/



	srand(time(NULL));
	GameManager gameManager;
	gameManager.Initialize();
	gameManager.StartGame();
	




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
	

	/*Map map;
	PlayerManager playermanager;
	int fightState = 0;
	playermanager.CreatePlayer();
	system("cls");
	FightManager fight;
	EnemyManager enemyManager;

	while (map.GetRemainingEnemy()>0)
	{
		map.DisplayMap();
		map.MooveHero(); 
		enemyManager.CreateEnemy();
		Enemy enemy =  *enemyManager.GetEnemy();
		int fightState = fight.StartFight(*playermanager.GetPlayer(), enemy);
		if (fightState == 2) {
			break;
		}
		map.GetHeroCell().RemoveEnemy();
		map.DecrementRemainingEnemy();
		if (map.GetRemainingEnemy() == 0) {
			cout << "Vous avez eradique tous les enemis de la carte !" << endl;
			cout << "Vous avez gagne la partie !" << endl;
			break;
		}
	}*/

	return 0;
}

