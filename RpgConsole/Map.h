#pragma once
#include <iostream>
#include <vector>
#include "conio.h"
#include "Cell.h"
#include "PlayerManager.h"
class Map
{
private:
	vector<vector<Cell>> cells;
	int rowCount;
	int colCount;
	int rowHero;
	int colHero;
	int remainingEnemy;
public:
	Map();
	void DisplayMap() const;
	void Initialize();
	void PlaceHero();
	Cell* GetCell(int row, int col);
	int ActionHero(PlayerManager& playerManager);
	~Map() {};
	void RandomEnemy();
	static int GenerateRandomNumber(int min, int max);
	int GetRemainingEnemy()const ;
	Cell& GetHeroCell();
	void DecrementRemainingEnemy();
	void QuitShop();

};