#pragma once
#include <iostream>
using namespace std;
class Potion
{
private:
	string name;
	float price;
	int index;
	int healAmount;


public:
	Potion(const string& n, float p, int index, int heal) : name(n), price(p), index(index), healAmount(heal) {}
	virtual void Display(int index) const;
	string GetName() const;
	int GetIndex() const;
	float GetPrice() const;
	int GetHealAmount() const;

};