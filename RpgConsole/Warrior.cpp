#include "Warrior.h"

void Warrior::Attack(Character& c) {
	string att = "Vous brandissez votre epee et infligez " + to_string(GetDamage()) + " degats au " + c.GetName() + '\n';
	DisplayTime(att);
	c.TakeDamage(GetDamage());
}