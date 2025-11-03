#include "Character.h"

void Character::DisplayStats() const
{
	cout << "----------------" << endl;
	cout << "|Name: " << name << endl;
	cout << "|PV: " << pv << "/" << pvMax << endl;
	cout << "|Damage: " << damage << endl;
	cout << "----------------" << endl;
}
string Character::GetName() const
{
	return name;
}

int Character::GetPv() const{
	return pv;
}

void Character::Heal(int heal) {
	pv += heal;
}

bool Character::IsAlive() const {
	return pv > 0;
}

int Character::GetPvMax() const{
	return pvMax;
}
int Character::GetDamage() const{
	return damage;
}

void Character::TakeDamage(int damage)  {
	pv -= damage;
	if (pv < 0) {
		pv = 0;
	}
}

void Character::Attack(Character& c) {
	cout << "Le Personnage attaque" << endl;
	TakeDamage(c.GetDamage());
}