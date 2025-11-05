#include "Item.h"
void  Item::Display() const {
	cout << " ---------------------" << endl;
	cout << "|Potion Numero " << index << " : " << endl;
	cout << "|Nom : " << name << endl;
	cout << "|Prix : " << price << endl;
	cout << " ---------------------" << endl;
}

string Item::GetName() const
{
	return name;
}

int Item::GetIndex() const {
	return index;
}

float Item::GetPrice() const {
	return price;
}