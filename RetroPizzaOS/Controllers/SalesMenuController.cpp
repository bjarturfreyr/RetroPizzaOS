#include "SalesMenuController.h"

SalesMenuController::SalesMenuController()
{
    init();
}

void SalesMenuController::init()
{
    char selection = '\0';
    //char size;
    //char type;

    while(selection != 'h' && selection != 't' && selection != 's' && selection != 'b'){
        clearScreen();
        displaySalesWelcome();
        displaySalesNavigation();

        cin >> selection;
    }

    if (selection == 's') {
        //skra nyja pontun
    }

    else if (selection == 't') {
        MainMenuController mmc;
    }

    else if (selection == 'b') {
        //breyta pontun
    }

    else {
        //bye
    }
}

