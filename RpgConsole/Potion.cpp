#include "Potion.h"
void  Potion::Display(int index) const {
	cout << " ---------------------" << endl;
	cout << "|Potion Numero " << index << " : " << endl;
	cout << "|Nom : " << GetName() << endl;
	cout << "|Prix : " << GetPrice() << endl;
	cout << "|Soin : " << GetHealAmount() << endl;
	cout << " ---------------------" << endl;
}

string Potion::GetName() const
{
	return name;
}

int Potion::GetIndex() const {
	return index;
}

float Potion::GetPrice() const {
	return price;
}

int Potion::GetHealAmount() const {
	return healAmount;
}