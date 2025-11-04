#pragma once
#include <iostream>
#include <memory>
#include "PlayerManager.h"
#include "EnemyManager.h"
#include "FightManager.h"

using namespace std;
enum class GameState {
    Menu,
    Combat,
    Victory,
    Defeat,
    Quit
};
class GameManager
{
private:
    bool isRunning;
    GameState state;
	PlayerManager playerManager;
	EnemyManager enemyManager;
	FightManager fightManager;

public:
    GameManager() : isRunning(false), state(GameState::Menu){};
    ~GameManager() {};
	void StartGame();
    void Initialize();
    void ShowMenu();
    void Combat(Player& player);
    void Shutdown();
};

