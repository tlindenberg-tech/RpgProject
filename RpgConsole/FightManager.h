#pragma once
#include <iostream>
#include <vector>
#include "Warrior.h"
#include "Mage.h"
#include "Enemy.h"

class FightManager
{

public:
	FightManager() {};


	void StartFight(Player& player, Enemy& enemy);
	void ChooseAction(Character& player, Character& enemy);

	~FightManager() {};
};

