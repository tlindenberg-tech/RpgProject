#include "Potion.h"


int Potion::GetHealAmount() const {
	return healAmount;
}

void  Potion::Display() const {
	cout << " ---------------------" << endl;
	cout << "|Potion Numero " << GetIndex() << " : " << endl;
	cout << "|Nom : " << GetName() << endl;
	cout << "|Soin : " << GetHealAmount() << endl;
	cout << " ---------------------" << endl;
}

