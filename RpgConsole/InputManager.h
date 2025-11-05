#pragma once
class InputManager
{
	public:
	InputManager() {};
	void MoveUp(int& row);
	void MoveDown(int& row, int rowCount);
	void MoveRight(int& col, int colCount);
	void MoveLeft(int& col);
	~InputManager() {};
};