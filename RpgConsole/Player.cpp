#include "Enemy.h"
#include "Player.h"
#include <conio.h>
void Player::LevelUp() {
	lvl++;
	exp -= expRequire;
	expRequire *= 1.2;
	pvMax *= 1.1;
	pv = pvMax;
	damage *= 1.1;
	cout << "Vous augmentez d'un niveau." << endl;
	cout << "Vous etes maintenant niveau " << lvl << endl << endl;
}

void Player::TakeXp(int xpEnemy) {
	exp += xpEnemy;

	if (exp > expRequire) {
		while (exp > expRequire) {
			LevelUp();
		}
	}

}

int Player::GetLevel() const {
	return lvl;
}

int Player::GetXpRequire() const {
	return expRequire;
}

int Player::GetXp() const {
	return exp;
}

Inventory& Player::GetInventory() {
	return inventory;
}

void Inventory::RemoveItem(int index) {
	if (index >= 0 && index < items.size()) {
		items.erase(items.begin() + index);
	}
}

void Player::DisplayStats() const {

	cout << " ----------------" << endl;
	cout << "| Mes Statistiques" << endl;
	cout << " ----------------" << endl;
	cout << "| Nom : " << GetName() << endl;
	cout << "| Niveau : " << GetLevel() << endl;
	cout << "| Money : " << GetMoney() << endl;
	cout << "| Experience : " << GetXp() << '/' << GetXpRequire() << endl;
	cout << "| Sante : " << GetPv() << '/' << GetPvMax() << endl;
	cout << "| Attaque : " << GetDamage() << endl;
	cout << "----------------" << endl;
}

void Player::ChooseItem() {
	inventory.DisplayInventory();
	cout << "Choisissez l'index de l'objet a utiliser (-1 pour annuler) : ";
	int index;
	std::cin >> index;
	if (index == -1) {
		std::cout << "Action annulee." << std::endl;
		return;
	}
	char confirm;
	std::cout << "Etes-vous sur de vouloir utiliser cet objet ? (y/n) : ";
	confirm = _getch();
	std::cout << confirm << std::endl;
	if (confirm != 'y' && confirm != 'Y') {
		std::cout << "Action annulee." << std::endl;
		return;
	}
	UseInventoryItem(index);
}

void Player::UseInventoryItem(int index) {
	system("cls");
	std::unique_ptr<Potion> potion = inventory.GetItem(index-1);
	if (!potion) {
		std::cout << "Objet invalide !" << std::endl;
		return;
	}
	std::cout << "Vous utilisez : " << potion->GetName() << std::endl;

	if (potion) {
		int heal = potion->GetHealAmount();
		Heal(heal);
		std::cout << "Vous recuperez " << heal << " PV !" << std::endl;
		std::cout << "PV actuels : " << GetPv() << "/" << GetPvMax() << std::endl;
		this->GetInventory().RemoveItem(index - 1);
	}
	else {
		std::cout << "Cet objet n’a pas d’effet connu." << std::endl;
	}
}

int Player::GetMoney() const {
	return money;
}

void Player::AddMoney(int amount) {
	money += amount;
}