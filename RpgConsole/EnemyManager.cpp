#include "EnemyManager.h"
void EnemyManager::CreateEnemy(){
	enemy = std::make_unique<Enemy>();
	cout << "Un " << enemy->GetName() << " est apparu!" << endl;
	enemy->DisplayStats();
}