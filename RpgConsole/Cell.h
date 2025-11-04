#pragma once
#include <iostream>

using namespace std;

class Cell
{
private:
	bool isEnemy;
	bool isHero;

public:
	Cell() : isEnemy(false), isHero(false) {};
	~Cell() {};

	char getSymboll() const ;
	void PlaceHero();
	void RemoveHero();
	bool GetIsEnemy() const;
	void PlaceEnemy();
	void RemoveEnemy();
};



