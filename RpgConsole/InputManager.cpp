#include "InputManager.h"

void InputManager::MoveUp(int& row) {
	if (row > 0) {
		row--;
	}
}
void InputManager::MoveDown(int& row, int rowCount) {
	if (row < rowCount - 1) {
		row++;
	}
}
void InputManager::MoveRight(int& col, int colCount) {
	if (col < colCount - 1) {
		col++;
	}
}
void InputManager::MoveLeft(int& col) {
	if (col > 0) {
		col--;
	}
}