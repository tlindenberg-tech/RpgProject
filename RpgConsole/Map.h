#pragma once
#include <iostream>
#include <vector>
#include "Cell.h"
class Map
{
private:
	vector<vector<Cell>> cells;
	int height;
	int width;
public: 
	Map();
	void DisplayMap() const;
	void Initialize();
	~Map() {};

};

