#include "FightManager.h"
#include "GameManager.h"
#include "Utils.h"
#include <conio.h>
int FightManager::StartFight(Player& player, Enemy& enemy)
{
	system("cls");

	string start ="Le combat commence entre " + player.GetName() + " et " + enemy.GetName() + "!\n";
	DisplayTime(start);
	//cout << "Le combat commence entre " << player.GetName() << " et " << enemy.GetName() << "!" << endl;
	system("pause");
	while (player.IsAlive() && enemy.IsAlive()) {
		ChooseAction(player, enemy);
	}
	if (player.IsAlive() == false) {
		DisplayTime("Vous etes mort !");
		return 2;
	}
	if (enemy.IsAlive() == false) {
		enemy.DisplayStats();

		string win = "Vous venez de vaincre " + enemy.GetName() + "\n"
			"Vous gagnez " + to_string(enemy.GetXp()) + "xp\n";
		DisplayTime(win);
		/*cout << "Vous venez de vaincre " << enemy.GetName() << endl;
		cout << "Vous gagnez " << enemy.GetXp() << "xp" << endl;*/
		player.TakeXp(enemy.GetXp());
		player.AddMoney(enemy.GetXp() / 10);
		return 1;
	}


	player.DisplayStats();
	return 0;
}


void FightManager::ChooseAction(Player& player, Enemy& enemy) {
	
	player.DisplayStats();
	enemy.DisplayStats();

	int choice = 0;
	int row = 0, col = 0;
	
	while (choice < 49 || choice > 51) {

		cout << " ----------------------------" << endl;
		cout << "|Choisissez l action :" << endl;
		cout << "|1. Attaquer " << enemy.GetName() << endl;
		cout << "|2. Voir mon inventaire       " << endl;
		if (player.GetPv() < player.GetPvMax()) {
			cout << "|3. Utiliser une potion " << endl;
		}
		cout << " ----------------------------" << endl;
		cout << "Mon choix : ";


		choice = _getch();
		system("cls");
	}

	switch (choice)
	{
	case 49:
		player.Attack(enemy);
		if (enemy.IsAlive()) {
			enemy.Attack(player);
		}
		break;
	case 50:
		player.GetInventory().DisplayInventory();

		system("pause");
		break;
	case 51:
		if (player.GetPv() < player.GetPvMax()) {
			player.ChooseItem();
		}
		break;
	default:
		cout << "Choix non proposé";

		break;
	}
}

