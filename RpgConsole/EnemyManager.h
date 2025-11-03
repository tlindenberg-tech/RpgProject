#pragma once
#include <vector>
#include <memory>
#include "Enemy.h"
#include <iostream>
class EnemyManager
{
private:
	std::unique_ptr<Enemy> enemy;

	public:
	EnemyManager() {};
	void CreateEnemy();
	~EnemyManager() {};
};


