#include <chrono>
#include <thread>
#include <conio.h>
#include "PlayerManager.h"
void PlayerManager::CreatePlayer() {
    system("cls");
    string name;
    cout << "Entrez le nom de votre personnage : " << endl;
    
    cin >> name;

	ChooseClass(name);
}



Player* PlayerManager::GetPlayer() {
    return player.get();
}

void PlayerManager::ChooseClass(string name) {
    int chooseClass=-1;
    
    /*cout << "Choississez votre classe : " << endl;
    cout << "1 Guerrier" << endl;
    cout << "2 Mage" << endl;*/
    
    while (chooseClass <1 || chooseClass> 2 )
    {
        system("cls");
        string askClass = "Choississez votre classe : \n1 Guerrier\n2 Mage\n";
        for (char c : askClass) {
            cout << c;
            this_thread::sleep_for(chrono::milliseconds(10));
        }
		chooseClass = _getch() - '0';
		system("cls");

        switch (chooseClass)
            {
            case 1:
                char confirm;
                std::cout << "Etes-vous sur de vouloir utiliser cet objet ? (y/n) : ";
                confirm = _getch();
                if (confirm != 'y' && confirm != 'Y') {
                    std::cout << "Action annulee." << std::endl;
                    ChooseClass(name);
                }
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
    
    system("pause");
    cout << "Bienvenue dans la Foret Enchantee" << endl;
}

//void PlayerManager::BuyPotion(Player* forgeron) {
//    int choice;
//    
//    cout << "Quelle potion voulez vous acheter ? (entrez le numero de la potion)";
//    cin >> choice;
//
//    unique_ptr<Potion> itemChoose = forgeron->GetInventory().GetItem(choice - 1);
//    forgeron->GetInventory().DisplayInventory();
//    cout << "Vous avez bien achete : " << endl;
//    itemChoose->Display(choice-1);
//    forgeron->GetInventory().AddItem(std::move(itemChoose));
//
//}

int PlayerManager::Shop() {
    MarchandManager marchandManager;
	marchandManager.InitializeMarchand();

    cout << "Bienvenue dans la boutique";
	cout << "Que souhaitez vous faire ?" << endl;
    cout << "1 Acheter une potion" << endl;
    cout << "2 Quitter la boutique" << endl;
    cout << "3 Attaquer le marchand" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        BuyPotion(marchandManager.GetMarchand());
        break;
    case 2:
        cout << "Vous quittez la boutique." << endl;
        break;
    case 3:
		return 1;
        system("pause");

    break;
    default:
        cout << "Choix invalide." << endl;
		Shop();
        break;
	}
	return 0;
}

void PlayerManager::BuyPotion(Marchand* marchand) {
    int choice;
	system("cls");
	cout << "Bienvenue chez " << marchand->GetName() << " !" << endl;
	cout << "Vous avez " << player->GetMoney() << " pieces d'or." << endl;
	cout << "====== Shop Inventory ======" << endl;
    marchand->DisplayInventory();
    cout << "Quelle potion voulez vous acheter ? (entrez le numero de la potion)";
    cin >> choice;

    Potion itemChoose = marchand->GetShopItem(choice - 1);
    if (player->GetMoney() >= itemChoose.GetPrice()) {

        unique_ptr<Potion> newPotion = std::make_unique<Potion>(
            itemChoose.GetName(),
            itemChoose.GetPrice(),
            itemChoose.GetIndex(),
            itemChoose.GetHealAmount()
        );
        cout << "Vous avez bien achete : " << endl;
        itemChoose.Display(choice - 1);
        player->GetInventory().AddItem(std::move(newPotion));
        player->AddMoney(-itemChoose.GetPrice());
    }
    else {
        cout << "Vous n'avez pas assez d'argents pour acheter cette potion";
        BuyPotion(marchand);
    }


}