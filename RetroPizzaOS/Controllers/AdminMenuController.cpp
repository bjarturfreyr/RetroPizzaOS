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
<<<<<<< HEAD
            displayVeldu();
            cin >> nafn;
            cin >> aleggID;
            addPizza(nafn, aleggID);
=======
            string staerd;
            cin >> staerd;
            addSize(staerd);
>>>>>>> 59d214df51a3354a3689a51c3363b801ed802fca
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



