#include "MarchandManager.h"

void MarchandManager::InitializeMarchand() {
	marchand = make_unique<Marchand>();
	CreateShopInventory();



}

void MarchandManager::CreateShopInventory() {
	marchand->AddShopItem(Potion("Petite potion de soin", 10.0f, 1, 20));
	marchand->AddShopItem(Potion("Potion de soin", 25.0f, 2, 50));
	marchand->AddShopItem(Potion("Grande potion de soin", 60.0f, 3, 120));
	marchand->AddShopItem(Potion("Potion de regeneration", 100.0f, 4, 200));

}

Marchand* MarchandManager::GetMarchand() {
	return marchand.get();
}