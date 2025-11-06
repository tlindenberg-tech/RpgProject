#include "Mage.h"

void Mage::Attack(Character& c) {
	string att = "Vous lancez une boule de feu et infligez " + to_string(GetDamage()) + " degats au " + c.GetName() + '\n';
	DisplayTime(att);
	c.TakeDamage(GetDamage());
}