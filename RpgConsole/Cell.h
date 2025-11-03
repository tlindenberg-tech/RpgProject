#pragma once
#include <iostream>

using namespace std;

class Cell
{
private:
	bool isEnemy;

public:
	Cell();
	~Cell();
	void Initialize();
	char getSymboll(const Cell* cell);


};

Cell::Cell()
{
}

Cell::~Cell()
{
}



