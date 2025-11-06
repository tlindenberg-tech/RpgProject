#include "Marchand.h"
#include <string>
#include "Utils.h"
#include "FightManager.h"

void Marchand::Attack(Character& c) {
	string att = "Le " + GetName() + " attaque et vous inflige " + to_string(GetDamage()) + " degats\n";
	DisplayTime(att);
	c.TakeDamage(GetDamage());

}



void Marchand::AddShopItem(const Potion& potion) {
    inventory.push_back(potion);
}

void Marchand::DisplayShop() const {
	system("cls");
    std::cout << "===== Boutique de " << GetName() << " =====\n";
    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". ";
        inventory[i].Display(i);
    }
}


const Potion& Marchand::GetShopItem(int index) {
	if (index >= 0 && index < inventory.size()) {
		return inventory[index];
	}
}

void Marchand::DisplayInventory() const {
	for (int i = 0; i < inventory.size(); ++i) {
		inventory[i].Display(i + 1);
	}
}

void Marchand::RemovePotion(int index) {
	if (index >= 0 && index < inventory.size()) {
		inventory.erase(inventory.begin() + index);
	}
}