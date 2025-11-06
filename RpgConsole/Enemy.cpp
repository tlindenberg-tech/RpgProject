#include "Enemy.h"
#include "Utils.h"
void Enemy::Attack(Character& c) {
	string att = "Le " + GetName() + " attaque et vous inflige " + to_string(GetDamage()) + " degats\n";
	DisplayTime(att);
	c.TakeDamage(GetDamage());
}

int Enemy::GetXp() const {
	return xp;
}