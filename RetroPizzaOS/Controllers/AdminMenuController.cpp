#include "AdminMenuController.h"

AdminMenuController::AdminMenuController()
{
    init();
}

void AdminMenuController::init(){
    char input;

    while(input != 'h'){
        clearScreen();
        displayAdminWelcome();
        displayAdminNavigation();

        cin >> input;

        if(input == 'b'){
            string staerd;
            cin >> staerd;
            addSize(staerd);
        }

        else if(input == 'l'){
            clearScreen();
            displayAdminPizzaList();
            getch(); //Press any key to continue..
        }

        else if(input == 't'){
            MainMenuController mmc;
        }

        else {
            //bye
        }
    }
}



