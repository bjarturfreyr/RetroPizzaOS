#include "AdminMenuController.h"

AdminMenuController::AdminMenuController()
{
    init();
}

void AdminMenuController::init(){
    int aleggID;
    string nafn;
    char input;

    while(input != 'h'){
        clearScreen();
        displayAdminWelcome();
        displayAdminNavigation();

        cin >> input;

        if(input == 'b'){
            displayVeldu();
            cin >> nafn;
            cin >> aleggID;
            addPizza(nafn, aleggID);
        }

        else if(input == 'l'){
            clearScreen();
            displayAdminPizzaList();
            displayContinue();
            getch();
        }

        else if(input == 't'){
            MainMenuController mmc;
        }

        else {
            //bye
        }
    }
}



