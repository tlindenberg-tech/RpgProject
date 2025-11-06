#pragma once
#include <iostream>

using namespace std;

class Cell
{
private:
	bool isEnemy;
	bool isHero;
	bool isMarchand;

public:
	Cell() : isEnemy(false), isHero(false), isMarchand(false) {};
	~Cell() {};
	void PlaceMarchand();
	char getSymboll() const ;
	void PlaceHero();
	void RemoveHero();
	bool GetIsEnemy() const;
	void PlaceEnemy();
	void RemoveEnemy();
	int isEvent() const;
	bool GetMarchand() const;

};



