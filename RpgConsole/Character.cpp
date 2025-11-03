#include "Character.h"

void Character::DisplayStats() const
{
	cout << "Name: " << name << endl;
	cout << "PV: " << pv << "/" << pvMax << endl;
	cout << "Damage: " << damage << endl;
}
string Character::GetName() const
{
	return name;
}

int Character::GetPv() const{
	return pv;
}


int Character::GetPvMax() const{
	return pvMax;
}
int Character::GetDamage() const{
	return damage;
}

void Character::SetPv(Character& c) const {
	c.pv -= damage;
}

void Character::Attack(Character& c) {
	cout << "Le Personnage attaque" << endl;
	SetPv(c);
	c.DisplayStats();
}