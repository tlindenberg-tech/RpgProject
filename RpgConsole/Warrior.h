#pragma once
#include "Player.h"
class Warrior :
    public Player
{
    public:
    Warrior(string name) : Player(name, 150, 150, 25) {}
    ~Warrior() override {};
    void Attack(Character& c) override;
};

