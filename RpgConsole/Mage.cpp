#include "Mage.h"

void Mage::Attack(Character& c) {
	string att = "Vous lancez une boule de feu votre epee et infligez " + to_string(GetDamage()) + " degats au " + c.GetName() + '\n';
	DisplayTime(att);
	TakeDamage(c.GetDamage());
}