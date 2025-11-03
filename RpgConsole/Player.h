#pragma once
#include "Character.h"
#include "Enemy.h"
class Player :
    public Character
{
	int exp;
	int expRequire;
	int lvl;
public:
	Player(string name, int pv, int pvMax, int damage) : Character(name, pv, pvMax, damage), exp(0), expRequire(100), lvl(1) {}
	int GetLevel() const;
	void LevelUp();
	void TakeXp(int xpEnemy);
	int GetXp() const;
	void DisplayStats() const override;
	int GetXpRequire() const;

	~Player() override {};

};

