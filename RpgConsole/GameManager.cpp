#include "GameManager.h"

void GameManager::Initialize() {
    std::cout << "=== Initialisation du jeu ===\n";
    isRunning = true;
    state = GameState::Menu;
}

void GameManager::ChooseClass() {
    int chooseClass;
    string name;
    cout << "Entrez le nom de votre personnage : " << endl;
    cin >> name;
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
}

void GameManager::Shutdown() {
    std::cout << "\n=== Fin du jeu ===\n";
    player.reset();
}

