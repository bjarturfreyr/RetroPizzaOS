#include "AdminMenuController.h"

AdminMenuController::AdminMenuController(Database db)
{
    init();
    this->db = db;
}

void AdminMenuController::init(){
    char input;

    while(input != 'h'){
        clearScreen();
        displayAdminWelcome();
        displayAdminNavigation();

        cin >> input;

        if(input == 'l'){
            clearScreen();
            vector<Pizza> listOfPizzasOnMenu = this->db.getListOfPizzasOnMenu();
            displayAdminPizzaList(listOfPizzasOnMenu);
            getch(); //Press any key to continue..
        }

        else if(input == 't'){
            MainMenuController mmc(this->db);
        }

        else {
            //bye
        }
    }
}



