#include "MainMenuController.h"

MainMenuController::MainMenuController(Database db)
{
    init();
    this->db = db;
}

void MainMenuController::init(){

    char selection = '\0';
    while (selection != 'a' && selection != 'h' && selection != 's' && selection != 'u' && selection != 'b'){

        clearScreen();
        displayHeader();
        displayMenuNavigation(); //Kallar í MainMenuView

        cin >> selection; //Controllerin sem við erum í sér um að taka inn input.

    }

    if (selection == 'u'){
        AdminMenuController amc(this->db);
    }

    else if (selection == 'b'){
        BakersMenuController bmc(this->db);
    }

    else if (selection == 's'){
        SalesMenuController smc;
    }

    else if (selection == 'a'){

        DeliveryMenuController dmc(this->db);
    }

    else if (selection == 'h'){
        exit(0);
    }

    else {
        //try again
    }
}
