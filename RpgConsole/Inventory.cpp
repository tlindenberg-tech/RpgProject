#include "Inventory.h"

void Inventory::DisplayInventory()const  {
	cout << "----- Inventaire -----" << endl;
	cout << "| Vous avez " << items.size() << " objets dans votre inventaire." << endl;
	for (int i = 0; i< items.size(); i++) {
		items[i]->Display(i+1);
	}
}



/*void Inventory::UseItem(int index) {
	if (index >= 0 && index < items.size()) {
		cout << "Utiliser l'objet suivant de l'inventaire : ";
		items[index]->Display();
	}
	else {
		cout << "Index d'objet invalide." << endl;
	}
}

*/
void Inventory::AddItem(std::unique_ptr<Potion> item) {
	items.push_back(std::move(item));
}

unique_ptr<Potion> Inventory::GetItem(int index) {
	if (index >= 0 && index < items.size()) {
		return std::move(items[index]);
	}
	return nullptr;
}