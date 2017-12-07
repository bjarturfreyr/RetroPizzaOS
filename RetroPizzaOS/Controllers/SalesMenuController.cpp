#include "SalesMenuController.h"
#include "SalesMenuView.h"

SalesMenuController::SalesMenuController()
{
    init();
}

void SalesMenuController::init()
{
    displaySalesMenu();
    char size;
    char type;

        while(true){
        displaySalesNavigation();
        cin >> size;
        velja_size(size);


        displaySalesOffer();

        listPizzas();


        cin >> type;
        velja_pizzu(type);
    }
}

