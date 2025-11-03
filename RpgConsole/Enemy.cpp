#include "Enemy.h"
void Enemy::Attack(Character& c) {
	cout << "Le Gobelin attaque" << endl;
	TakeDamage(c.GetDamage());
}

int Enemy::GetXp() const {
	return xp;
}