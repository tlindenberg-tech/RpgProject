#pragma once
#include "Item.h"
#include <vector>
class Inventory
{
private:
	std::vector<std::unique_ptr<Item>> items;
public: 
	void DisplayInventory() const;
	void UseItem();
	void GetItem();
	void AddItem(std::unique_ptr<Item> item);
};

