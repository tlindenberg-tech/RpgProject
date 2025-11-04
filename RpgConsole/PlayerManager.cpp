#include "PlayerManager.h"

void PlayerManager::CreatePlayer() {
    string name;
    cout << "Entrez le nom de votre personnage : " << endl;
    cin >> name;
	ChooseClass(name);
}

Player* PlayerManager::GetPlayer() {
    return player.get();
}

void PlayerManager::ChooseClass(string name) {
    int chooseClass;
    
    cout << "Choississez votre classe : " << endl;
    cout << "1 Guerrier" << endl;
    cout << "2 Mage" << endl;
    cin >> chooseClass;

    switch (chooseClass)
    {
    case 1:
        cout << "Vous avez choisi la classe Guerrier." << endl;
        player = make_unique<Warrior>(name);
        player->DisplayStats();
        break;
    case 2:
        cout << "Vous avez choisi la classe Mage." << endl;
        player = make_unique<Mage>(name);
        player->DisplayStats();
        break;
    default:
        cout << "Classe invalide." << endl;
        break;
    }
    system("pause");
    cout << "Vous entrez dans le menu principal..." << endl;
}
