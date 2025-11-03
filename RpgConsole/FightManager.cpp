#include "FightManager.h"



void FightManager::StartFight(Player& player, Enemy& enemy)
{
	system("cls");
	cout << "Le combat commence entre " << player.GetName() << " et " << enemy.GetName() << "!" << endl;

	while (player.IsAlive() && enemy.IsAlive()) {
		ChooseAction(player, enemy);
	}
	if (player.IsAlive() == false) {
		cout << "Vous etes mort !";
	}
	if (enemy.IsAlive() == false) {
		enemy.DisplayStats();
		cout << "Vous venez de vaincre " << enemy.GetName() << endl;
		cout << "Vous gagnez " << enemy.GetXp() << "xp" << endl;
		player.TakeXp(enemy.GetXp());
	}


	player.DisplayStats();

}

void FightManager::ChooseAction(Character& player, Character& enemy) {
	
	player.DisplayStats();
	enemy.DisplayStats();

	int choice = 0;
	int row = 0, col = 0;


	do {
		cout << " ----------------------------" << endl;
		cout << "|Choisissez l action :       |" << endl;
		cout << "|1. Attaquer Gobelin         |" << endl;
		if (player.GetPv() < player.GetPvMax()) {
			cout << "|2. Regenerer 10pv           | " << endl;
		}
		cout << " ----------------------------" << endl;
		cout << "Mon choix : ";
		cin >> choice;

	} while (choice < 1 || choice > 2);

	system("cls");
	switch (choice)
	{
	case 1:
		player.Attack(enemy);
		enemy.Attack(player);
		break;
	case 2:
		if (player.GetPv() < player.GetPvMax()) {
			player.Heal(10);
		}
		break;
	default:
		cout << "Choix non proposé";
		break;
	}
}
