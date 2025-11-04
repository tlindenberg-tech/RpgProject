#pragma once
#include <iostream>
#include "Warrior.h"
#include "Mage.h"
using namespace std;
class PlayerManager
{
private:
	std::unique_ptr<Player> player;
public:	
	void CreatePlayer();
	PlayerManager() {};
	~PlayerManager() {};
	void ChooseClass(string name);
	Player* GetPlayer();
};

