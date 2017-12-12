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
        int numerpizzu;
        char staerdpizzu;
        char addtoorder;

        do{

//            displaySalesPizzalist();//skra nyja pontun
            cin >> numerpizzu;
            displaySalesSize();
            do{
            cin >> staerdpizzu;
            velja_size(staerdpizzu);
            }while (staerdpizzu != 's' && staerdpizzu != 'S' && staerdpizzu != 'm' && staerdpizzu != 'M' && staerdpizzu != 'l' && staerdpizzu != 'L');


            addToOrder();
            cin >> addtoorder;

        }while(addtoorder == 'j');
    }


    else if (selection == 't') {

        //MainMenuController mmc(this->db);
    }

    else if (selection == 'b') {
        //breyta pontun
    }

    else {

    }
}

