#pragma once
#include "Enemy.h"
#include "Potion.h"
class Marchand : public Enemy
{
private:
	vector<Potion> inventory;
public:
	Marchand() : Enemy("Bob le marchand", 200, 200, 500, 800 ) {}
	~Marchand() override{}
	void AddShopItem(const Potion& potion);
	void DisplayShop() const;
	const Potion& GetShopItem(int index);
	void Attack(Character& c) override;
	vector<Potion>& GetInventory() { return inventory; }
	void DisplayInventory() const;
	void RemovePotion(int index);
};
