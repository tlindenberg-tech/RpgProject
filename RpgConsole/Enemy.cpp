#include "Enemy.h"
void Enemy::Attack(Character& c) {
	cout << "Le Gobelin attaque" << endl;
	SetPv(c);
	c.DisplayStats();
}