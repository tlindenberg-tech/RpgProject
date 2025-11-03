#pragma once
#include <iostream>
#include <memory>
#include "PlayerManager.h"
#include "EnemyManager.h"
#include "FightManager.h"

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
	PlayerManager playerManager;
	EnemyManager enemyManager;
	FightManager fightManager;

public:
    GameManager() : isRunning(false){};
    ~GameManager() {};
	void StartGame();
    void Initialize();
    void ShowMenu();
    void Combat();
    void Shutdown();
};

