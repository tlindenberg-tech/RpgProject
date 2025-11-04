#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Enemy.h"
class EnemyManager
{
private:
	std::unique_ptr<Enemy> enemy;

	public:
	EnemyManager() {};
	void CreateEnemy();
	std::unique_ptr<Enemy> RandomEnemy();
	Enemy* GetEnemy();
	~EnemyManager() {};
};


