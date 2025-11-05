#pragma once
#include <iostream>
using namespace std;
class Item
{
private:
	string name;
	float price;
	int index;

public:
	Item();
	Item(const string& n, float p, int index) : name(n), price(p), index(index) {}
	virtual void Display() const;
	string GetName() const;
	int GetIndex() const;
	float GetPrice() const;

};