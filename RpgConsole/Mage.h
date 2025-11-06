#pragma once
#include "Player.h"
class Mage :
	public Player 
{
public:
    Mage(string name) : Player(name, 120, 120, 30, 1) {}
    ~Mage() override {};
    void Attack(Character& c) override;
};