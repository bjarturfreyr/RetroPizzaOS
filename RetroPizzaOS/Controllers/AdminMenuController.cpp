#include "AdminMenuController.h"
#include "AdminMenuView.h"


AdminMenuController::AdminMenuController()
{
    init();
}

void AdminMenuController::init(){
    int verd;
    int aleggID;
    string nafn;

    while(true){
        clearScreen();
        displayAdminWelcome();
        displayAdminNavigation();

        char input;
        cin >> input;

        if(input == 'b'){
            cin >> nafn;
            cin >> aleggID;
            addPizza(nafn, aleggID);
        }
        else if(input == 'l'){
            displayAdminPizzaList();
        }
        else if(input == 't'){
            MainMenuController mmc;
        }
        else{
            cout << "invalid input" << endl;
        }

    }
}



