#pragma once
#include <iostream>
using namespace std;
class Item
{
private:
	string name;
	float price;
	int healAmount;
	int index;

public:
	Item(const string& n, float p, int heal, int index) : name(n), price(p), healAmount(heal), index(index) {}
	void Display() const;

};