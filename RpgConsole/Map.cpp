#include "Map.h"


Map::Map()
{
	rowCount = 8;
	colCount = 8;
	rowHero = 7;
	colHero = 3;
	cells = vector<vector<Cell>>(rowCount, vector<Cell>(colCount));
	//cells[8][8];
	cells[rowHero][colHero].PlaceHero();
	RandomEnemy();

}

void Map::DisplayMap() const {
	
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

void Map::MooveHero() {
	char a;
	int b;
	while (cells[rowHero][colHero].GetIsEnemy() == false) {
		a = _getch();  // ignore le premier caractere qui est 224 ou Ó ??
		//cout << a;

		b = _getch();
		cells[rowHero][colHero].RemoveHero();

		switch (b) {
		case 72:    // key up

			if (rowHero > 0) {
				rowHero--;
			}
			break;
		case 80:    // key down
			if (rowHero < colCount-1) {
				rowHero++;
			}
			break;
		case 77:    // key right
			if (colHero < rowCount-1) {
				colHero++;
			}
			break;
		case 75:    // key left
			if (colHero > 0) {
				colHero--;
			}

			break;
		
		
		}
		cells[rowHero][colHero].PlaceHero();
		system("cls");
		DisplayMap();
		
	}
}

int Map::GetRemainingEnemy()const  {
	return remainingEnemy;
}

int Map::GenerateRandomNumber(int min, int max) {
	return min + rand() % (max - min);
}

void Map::RandomEnemy() {
	int placedEnemy = 0;
	int totalEnemy = 4;

	while (placedEnemy < totalEnemy) {
		int row = GenerateRandomNumber(0, rowCount);
		int col = GenerateRandomNumber(0, colCount);

		bool isSafeZone = false;
		for (int j = -1; j <= 1; ++j) {
			for (int k = -1; k <= 1; ++k) {
				if (row == rowHero + j && col == colHero + k) {
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

