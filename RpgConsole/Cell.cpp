#include "Cell.h"

char Cell::getSymboll() const {
	if (isEnemy && isHero) {
		return 'X';
	}
	if (isEnemy) {
		return 'E';
	}
	if (isHero) {
		return 'H';
	}
	return ' ';
}

void Cell::PlaceHero() {
	isHero = true;
};
void Cell::RemoveHero() {
	isHero = false;
	
}

bool Cell::GetIsEnemy() const {
	return isEnemy;
}

void Cell::PlaceEnemy(){
	isEnemy = true;
}

void Cell::RemoveEnemy() {
	isEnemy = false;
	
}

bool Cell::isEvent() {
	if (GetIsEnemy()) {
		return true;
	}
	return false;
}