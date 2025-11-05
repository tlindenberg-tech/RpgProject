#include "Enemy.h"
#include "Utils.h"
void Enemy::Attack(Character& c) {
	string att = "Le Gobelin attaque et vous inflige " + to_string(GetDamage()) + " degats\n";
	DisplayTime(att);
	TakeDamage(c.GetDamage());
}

int Enemy::GetXp() const {
	return xp;
}