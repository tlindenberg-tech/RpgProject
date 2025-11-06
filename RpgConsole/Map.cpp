#include "Map.h"
#include "InputManager.h"

Map::Map()
{
	rowCount = 8;
	colCount = 8;
	rowHero = 7;
	colHero = 3;
	remainingEnemy = 4;
	cells = vector<vector<Cell>>(rowCount, vector<Cell>(colCount));
	//cells[8][8];
	cells[0][3].PlaceMarchand();
	cells[rowHero][colHero].PlaceHero();
	RandomEnemy();

}

void Map::DisplayMap() const {
	system("cls");
	for (int row = 0; row < rowCount; row++) {
		
		for (int col = 0; col < colCount; col++) {
			cout << "[" << cells[row][col].getSymboll() << "]";

		}

		cout << "\n";
	}

}



Cell* Map::GetCell(int row, int col) {
	if (row < 0 || row >= rowCount) {
		return nullptr;
	}
	if (col < 0 || col >= colCount) {
		return nullptr;
	}
	return &cells[row][col];
}

void Map::QuitShop() {
	cells[rowHero][colHero].RemoveHero();
	rowHero++;
	cells[rowHero][colHero].PlaceHero();
}

int Map::ActionHero(PlayerManager& playerManager) {
	char a;
	int b;
	InputManager inputManager;
	int exitChoice = 0;
	while (cells[rowHero][colHero].isEvent() == 0) {
		a = _getch();  // ignore le premier caractere qui est 224 ou Ó ??
		//cout << a;
		if (a == 224) {
			b = _getch();
		}
		else {
			b = a;
		}
		cells[rowHero][colHero].RemoveHero();

		switch (b) {
		case 72:    // key up
			inputManager.MoveUp(rowHero);
			break;
		case 80:    // key down
			inputManager.MoveDown(rowHero, rowCount);
			break;
		case 77:    // key right
			inputManager.MoveRight(colHero, colCount);
			break;
		case 75:    // key left
			inputManager.MoveLeft(colHero);
			break;
		case 105:    // key left
			playerManager.GetPlayer()->GetInventory().DisplayInventory();

			cout << "Appuyez sur Entrer sortir" << endl;
			exitChoice = _getch();
			while(exitChoice != 13) {
				exitChoice = _getch();
			}
			if(exitChoice == 13) {
				system("cls");
			}
			break;
		case 112:    // key p
			playerManager.GetPlayer()->DisplayStats();
			break;
		}
		cells[rowHero][colHero].PlaceHero();
		system("cls");
		DisplayMap();
	}
	return cells[rowHero][colHero].isEvent();
}

int Map::GetRemainingEnemy()const  {
	return remainingEnemy;
}

void Map::DecrementRemainingEnemy() {
	remainingEnemy--;
}

int Map::GenerateRandomNumber(int min, int max) {
	return min + rand() % (max - min);
}

void Map::RandomEnemy() {
	int placedEnemy = 0;

	while (placedEnemy < remainingEnemy) {
		int row = GenerateRandomNumber(0, rowCount);
		int col = GenerateRandomNumber(0, colCount);

		bool isSafeZone = false;
		for (int j = -1; j <= 1; ++j) {
			for (int k = -1; k <= 1; ++k) {
				if (row == rowHero + j && col == colHero + k) {
					isSafeZone = true;
				}
				if (row == 0 + j && col == 3 + k) {
					isSafeZone = true;
				}
			}
		}
		

		if (isSafeZone) {
			continue;
		}

		if (cells[row][col].GetIsEnemy()==false) {
			cells[row][col].PlaceEnemy();
			placedEnemy++;
		}
	}
}

Cell& Map::GetHeroCell() {
	return cells[rowHero][colHero];
}

