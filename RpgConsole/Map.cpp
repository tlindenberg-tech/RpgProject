#include "Map.h"


Map::Map()
{
	height = 8;
	width = 8;
	cells = vector<vector<Cell>>(height, vector<Cell>(width));
}

void Map::DisplayMap() const {
	
	for (int row = 0; row < height; row++) {
		
		for (int col = 0; col < width; col++) {

			cout << "[" << cells[row][col].getSymboll() << "]";
		}

		cout << "\n";
	}
}