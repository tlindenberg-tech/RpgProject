#include "GameManager.h"

void GameManager::Initialize() {
    std::cout << "=== Initialisation du jeu ===\n";
    isRunning = true;
    state = GameState::Menu;
}

void GameManager::StartGame() {
    ShowMenu();
    playerManager.CreatePlayer();
    Enemy enemy;

    while (isRunning) {
        switch (state) {
        case GameState::Menu:
            ShowMenu();
            break;
        case GameState::Combat:
            Combat();
            
            break;
        case GameState::Victory:
            std::cout << "Vous avez gagné le combat!\n";
            state = GameState::Menu;
            break;
        case GameState::Defeat:
            std::cout << "Vous avez perdu le combat...\n";
            isRunning = false;
            break;
        case GameState::Quit:
            isRunning = false;
            break;
        }
    }
}

void GameManager::ShowMenu() {
    int choice;
    std::cout << "\n=== Menu Principal ===\n";
    std::cout << "1. Nouvelle partie\n";
    std::cout << "2. Quitter le jeu\n";
    std::cout << "Choisissez une option: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        state = GameState::Combat;
        break;
    case 2:
        state = GameState::Quit;
        break;
    default:
        std::cout << "Option invalide. Veuillez réessayer.\n";
        break;
    }
}

void GameManager::Combat() {
    
    Enemy enemy;
    fightManager.StartFight(*playerManager.GetPlayer(), enemy);
    /*std::cout << "\n=== Combat Commencé ===\n";
    std::cout << "Un " << enemy.GetName() << " apparaît!\n";
    while (playerManager.GetPlayer()->IsAlive() && enemy.IsAlive()) {
        playerManager.GetPlayer()->Attack(enemy);
        if (enemy.IsAlive()) {
            enemy.Attack(*playerManager.GetPlayer());
        }
    }*/
    if (playerManager.GetPlayer()->IsAlive()) {
        state = GameState::Victory;
    } else {
        state = GameState::Defeat;
    }
}



void GameManager::Shutdown() {
    std::cout << "\n=== Fin du jeu ===\n";
}

