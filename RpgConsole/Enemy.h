#pragma once
#include "Character.h"
class Enemy :
    public Character
{
private :
	int xp;

public:
	Enemy() ;
	Enemy(string name, int pv, int pvMax, int damage, int xp) : Character(name, pv, pvMax, damage), xp(xp) {};
	virtual void Attack(Character& c) override;
	~Enemy() override {};
	int GetXp() const;
};

