#include "InputManager.h"

void InputManager::MoveUp(int& rowHero) {
	if (rowHero > 0) {
		rowHero--;
	}
}
void InputManager::MoveDown(int& rowHero, int rowCount) {
	if (rowHero < rowCount - 1) {
		rowHero++;
	}
}
void InputManager::MoveRight(int& colHero, int colCount) {
	if (colHero < colCount - 1) {
		colHero++;
	}
}
void InputManager::MoveLeft(int& colHero) {
	if (colHero > 0) {
		colHero--;
	}
}