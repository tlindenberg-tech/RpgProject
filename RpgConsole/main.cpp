#include <iostream>
#include "Mage.h"
#include "Warrior.h"
#include"GameManager.h"

using namespace std;

int main() {
	GameManager gameManager;
	gameManager.Initialize();
	gameManager.ChooseClass();

	return 0;
}