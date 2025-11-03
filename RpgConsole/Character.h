#pragma once
#include <iostream>

using namespace std;
class Character
{
protected:
	string name;
	int pv;
	int pvMax;
	int damage;

public:
	Character(string name, int pv, int pvMax, int damage) : name(name), pv(pv), pvMax(pvMax), damage(damage) {}
	virtual void DisplayStats() const;
	
	string GetName() const;
	int GetPv() const;
	int GetPvMax() const;
	int GetDamage() const;
	bool IsAlive() const;

	virtual void Attack(Character& c);
	void SetPv(Character& c) const;
	virtual ~Character() {};

};

