#pragma once
#include "Item.h"
class Potion :
    public Item
{
private:
	int healAmount;
public:
	Potion(const string& n, float p, int index, int heal) : Item(n, p, index), healAmount(heal) {};
	void Display() const override;
	int GetHealAmount() const;
};