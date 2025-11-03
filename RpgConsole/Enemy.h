#pragma once
#include "Character.h"
class Enemy :
    public Character
{
private :
	int xp;

public:
	Enemy() : Character("Gobelin", 60, 60, 10), xp(150) {};
	void Attack(Character& c) override;
	~Enemy() override {};
	int GetXp() const;
};

