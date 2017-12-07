#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    //Allt sem �� villt a� gerist � byrjun (constructor)
    init(); //Forriti� kallar � sitt eigi� 'init' � byrjun.
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init(){

    char selection = '\0';
    while (selection != 'h' && selection != 'a' && selection != 'b' && selection != 's'){

        clearScreen();
        displayMenuNavigation(); //Kallar � MainMenuView

        cin >> selection; //Controllerin sem vi� erum � s�r um a� taka inn input.

    }

    if (selection == 'a'){
        AdminMenuController amc;
    }

    else if (selection == 'b'){
        BakersMenuController bmc;
    }

    else if (selection == 's'){
        SalesMenuController smc;
    }

    else {
        //try again
    }
}
