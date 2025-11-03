#pragma once
#include <iostream>
#include <vector>
#include "Warrior.h"
#include "Mage.h"
#include "Enemy.h"

class FightManager
{

public:
	void StartFight(Player& player, Enemy& enemy);
	FightManager() {};
	~FightManager() {};
	void ChooseAction(Character& player, Character& enemy);

};

