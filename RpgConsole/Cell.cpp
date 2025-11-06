#include "Cell.h"

char Cell::getSymboll() const {
	if (isEnemy && isHero) {
		return 'X';
	}
	if (isEnemy) {
		return 'E';
	}
	if (isMarchand) {
		return 'M';
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

void Cell::PlaceMarchand() {
	isMarchand = true;
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

bool Cell::GetMarchand() const {
	return isMarchand;
}

int Cell::isEvent() const {
	if (GetIsEnemy()) {
		return 1;
	}
	if (GetMarchand()) {
		return 2;
	}
	return 0;
}