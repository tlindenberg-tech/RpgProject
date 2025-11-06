#pragma once
#include "Potion.h"
#include <vector>
class Inventory
{
private:
	std::vector<std::unique_ptr<Potion>> items;
public: 
	void DisplayInventory() const;
	unique_ptr<Potion> GetItem(int index);
	void AddItem(std::unique_ptr<Potion> item);
	void RemoveItem(int index);
	Inventory() {};
	~Inventory() {};
	
};

// classe marchand qui herite de character et qui a un inventaire de potions a vendre ?
