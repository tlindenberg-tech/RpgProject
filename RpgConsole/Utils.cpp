#include "Utils.h"
#include <conio.h>

void DisplayTime(string chaine) {

	for (char c : chaine) {
		cout << c;
		this_thread::sleep_for(chrono::milliseconds(10));
	}
}

void GetAscii() {
	int input = _getch();
	cout << input;
}

//void CenterRow(int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << " ";
//	}
//};
//
//void CenterCol(int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\n"; //25 pour au milieu
//	}
//};