#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    //Allt sem þú villt að gerist í byrjun (constructor)
    init(); //Forritið kallar á sitt eigið 'init' í byrjun.
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init(){

    char selection = '\0';
    while (selection != 'h' && selection != 'a' && selection != 'b' && selection != 's'){

        clearScreen();
        displayMenuNavigation(); //Kallar í MainMenuView

        cin >> selection; //Controllerin sem við erum í sér um að taka inn input.

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
