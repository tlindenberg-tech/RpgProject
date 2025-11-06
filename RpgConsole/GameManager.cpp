#include "GameManager.h"
#include "Map.h"
void GameManager::Initialize() {

    std::cout << "=== Initialisation du jeu ===\n";
    isRunning = true; 
    state = GameState::Menu;
}

void GameManager::StartGame() {

    while (isRunning) {
        switch (state) {
        case GameState::Menu:
            ShowMenu();
            
            break;
		case GameState::Commands:
			system("cls");
            std::cout << "Affichage des commandes du jeu...\n";
			std::cout << "========================================================\n";
            std::cout << "Utilisez les fleches directionnelles pour vous deplacer.\n";
            std::cout << "Appuyez sur 'I' pour ouvrir l'inventaire.\n";
			std::cout << "Appuyez sur 'P' pour afficher vos statistiques.\n";
			std::cout << "========================================================\n";
            std::cout << "Appuyez sur une touche pour revenir au menu principal.\n";
            _getch();
            state = GameState::Menu;
            break;
        case GameState::Combat:
            if (playerManager.GetPlayer() == nullptr) {
			    playerManager.CreatePlayer();
            }
            Combat(*playerManager.GetPlayer());
            break;
        case GameState::Victory:
            std::cout << "Vous avez gagné le combat!\n";
            state = GameState::Menu;
            break;
        case GameState::Defeat:
            std::cout << "Vous avez perdu le combat...\n";
            state = GameState::Menu;
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
    std::cout << "2. Voir les commandes\n";
    std::cout << "3. Quitter le jeu\n";
    std::cout << "Choisissez une option: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        state = GameState::Combat;
        break; 
    case 2:
        state = GameState::Commands;
        break;
    case 3:
        state = GameState::Quit;
        break;
    default:
        std::cout << "Option invalide. Veuillez réessayer.\n";
        break;
    }
}

void GameManager::Combat(Player& player) {
    
    Map map;
	
	int fightState = 0;
	FightManager fight;
	EnemyManager enemyManager;

	while (map.GetRemainingEnemy()>0)
	{
		map.DisplayMap();
		int action = map.ActionHero(playerManager); 


        if (action == 1) {
            enemyManager.CreateEnemy();
            Enemy enemy = *enemyManager.GetEnemy();
            int fightState = fight.StartFight(player, enemy);
            system("pause");
            if (fightState == 2) {
                state = GameState::Defeat;
                break;
            }
            map.GetHeroCell().RemoveEnemy();
            map.DecrementRemainingEnemy();
            
        } else if (action == 2) {
            system("cls");
            int shopResult = playerManager.Shop();
			map.QuitShop();
            if(shopResult == 1) {
				marchandManager.InitializeMarchand();
				Marchand* marchand = marchandManager.GetMarchand();
				fightManager.StartFight(player, *marchand);
                state = GameState::Defeat;
                break;
			}
            continue;
		}

		if (map.GetRemainingEnemy() == 0) {
            cout << "Vous avez eradique tous les enemis de la carte !" << endl;
            cout << "Vous avez gagne la partie !" << endl;
            state = GameState::Victory;
            break;
        }
	}
}



void GameManager::Shutdown() {
    std::cout << "\n=== Fin du jeu ===\n";
}

