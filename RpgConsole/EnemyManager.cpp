#include "Enemy.h"
#include "EnemyManager.h"
void EnemyManager::CreateEnemy(){
	enemy = RandomEnemy();
	cout << "Un " << enemy->GetName() << " est apparu!" << endl;
	enemy->DisplayStats();
}

std::unique_ptr<Enemy> EnemyManager::RandomEnemy()
{
    int randNum = rand() % 4;
    switch (randNum)
    {
    case 0:
        return std::make_unique<Enemy>("Gobelin", 60, 60, 10, 150);
    case 1:
        return std::make_unique<Enemy>("Skeletton", 60, 60, 10, 150);
    case 2:
        return std::make_unique<Enemy>("Slime", 60, 60, 10, 150);
    default:
        return std::make_unique<Enemy>("Golem", 200, 200, 20, 500);
    }
}

Enemy* EnemyManager::GetEnemy() {
    return enemy.get();
}