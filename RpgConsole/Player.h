#pragma once
#include "Character.h"
class Player :
    public Character
{
private:
	int lvl;
	int exp;
	int expRequire;
public:
	Player() {};
	~Player() {};
};

