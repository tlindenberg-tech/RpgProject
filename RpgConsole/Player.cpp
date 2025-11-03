#include "Player.h"
#include "Enemy.h"
void Player::LevelUp() {
	lvl++;
	exp -= expRequire;
	expRequire *= 1.2;
	damage *= 1.2;
	cout << "Vous augmentez d'un niveau." << endl;
	cout << "Vous etes maintenant niveau " << lvl << endl << endl;
}

void Player::TakeXp(int xpEnemy) {
	exp += xpEnemy;
	if (exp > expRequire) {
		LevelUp();
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

void Player::DisplayStats() const {

	cout << "Votre nom : " << GetName() << endl;
	cout << "Mes Statistiques" << endl;
	cout << "----------------" << endl;
	cout << "| Niveau : " << GetLevel() << endl;
	cout << "| Experience : " << GetXp() << '/' << GetXpRequire() << endl;
	cout << "| Sante : " << GetPv() << '/' << GetPvMax() << endl;
	cout << "| Attaque : " << GetDamage() << endl;
	cout << "----------------" << endl;
}