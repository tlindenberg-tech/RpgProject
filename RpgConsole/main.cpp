#include <iostream>
#include "conio.h"
#include "Mage.h"
#include "Warrior.h"
#include "GameManager.h"
#include "Map.h"
#include "EnemyManager.h"

using namespace std;

int main() {
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