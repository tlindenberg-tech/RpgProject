#pragma once
#include "Character.h"
class Enemy :
    public Character
{
	Enemy() : Character("Gobelin", 60, 60, 10) {};
	void Attack(Character& c) override;
	~Enemy() override {};
};

