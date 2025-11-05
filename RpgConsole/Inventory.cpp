#include "Inventory.h"

void Inventory::DisplayInventory() const {
	cout << "----- Inventaire -----" << endl;
	cout << "| Vous avez " << items.size() << " objets dans votre inventaire." << endl;
	for (int i = 0; i< items.size(); i++) {
		cout << "| ";
		items[i].get()->Display();
	}
}

void Inventory::AddItem(std::unique_ptr<Item> item) {
	items.push_back(std::move(item));
}

