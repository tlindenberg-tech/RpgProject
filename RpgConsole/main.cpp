#include <iostream>
#include <chrono>
#include <thread>
#include "conio.h"

#include "GameManager.h"
#include "Inventory.h"
#include "MarchandManager.h"
using namespace std;

int main() {
	GetAscii();

	//PlayerManager marchandManager;
	//marchandManager.InitializeMarchand();
	//marchandManager.GetPlayer()->DisplayStats();

	//marchandManager.GetPlayer()->ChooseItem();



	//PlayerManager playerManager;
	//playerManager.CreatePlayer();
	//playerManager.GetPlayer()->DisplayStats();
	////playerManager.GetPlayer()->ChooseItem();

	//playerManager.Shop();


	//cout << "\n\nVoici votre inventaire : \n" << endl;
	//playerManager.GetPlayer()->GetInventory().DisplayInventory();
	//playerManager.GetPlayer()->ChooseItem();
	// ENTRER = 13

	


	/*Player perso("bob", 100, 100, 5);
	perso.DisplayStats();*/

	/*char confirm;
	std::cout << "Etes-vous sur de vouloir utiliser cet objet ? (y/n) : ";
	confirm = _getch();
	std::cout << confirm << std::endl;
	if (confirm != 'y' && confirm != 'Y') {
		std::cout << "Action annulee." << std::endl;
		return;
	}*/


	/*string attack = "    ./~\n"
						"(= @@@@@@@ = [}================ = --\n"
						"    `\\_ \n";
	cout << attack;
	this_thread::sleep_for(chrono::milliseconds(1000));
	system("cls");
	string attack2 = "        ./~\n"
		"    (= @@@@@@@ = [}================ = --\n"
		"        `\\_ \n";
	cout << attack2;
	this_thread::sleep_for(chrono::milliseconds(1000));
	system("cls");
	string attack3 = "            ./~\n"
		"        (= @@@@@@@ = [}================ = --\n"
		"            `\\_ \n";
	cout<< attack3;
	this_thread::sleep_for(chrono::milliseconds(1000));
	system("cls");
	string attack4 = "                ./~\n"
		"            (= @@@@@@@ = [}================ = --\n"
		"                `\\_ \n";
	cout << attack4;*/


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

