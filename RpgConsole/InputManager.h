#pragma once
class InputManager
{
	public:
	InputManager() {};
	void MoveUp(int& rowHero);
	void MoveDown(int& rowHero, int rowCount);
	void MoveRight(int& colHero, int colCount);
	void MoveLeft(int& colHero);
	~InputManager() {};
};