#pragma once
#include <iostream>
#include <memory>

#include "Warrior.h"
#include "Mage.h"
#include "Enemy.h"
using namespace std;
class GameManager
{
private:
    enum class GameState {
        Menu,
        Combat,
        Victory,
        Defeat,
        Quit
    };
    bool isRunning;
    GameState state;
    std::unique_ptr<Player> player;
public:
    GameManager() {};
    ~GameManager() {};
	void StartGame();
    void ChooseClass();
    void Initialize();
    void ShowMenu();
    void Combat();
    void Shutdown();
};

