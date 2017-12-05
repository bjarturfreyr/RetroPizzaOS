#include "AdminMenuController.h"
#include "AdminMenuView.h"


AdminMenuController::AdminMenuController()
{
    init();
}

void AdminMenuController::init(){
    displayAdminMenu();

    while(true){
        displayAdminNavigation();

        char input;
        cin >> input;

        if(input == 'b'){
            cout << "adding a pitsa" << endl;
        }
        else if(input == 'l'){
            cout << "viewing pitsas" << endl;
        }
        else if(input == 't'){
            MainMenuController mmc;
        }
        else{
            cout << "invalid input" << endl;
        }

    }
}



