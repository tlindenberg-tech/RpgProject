#pragma once
#include <iostream>
#include <vector>
#include "Cell.h"
#include "conio.h"

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
	void ActionHero();
	~Map() {};
	void RandomEnemy();
	static int GenerateRandomNumber(int min, int max);
	int GetRemainingEnemy()const ;
	Cell& GetHeroCell();
	void DecrementRemainingEnemy();

};