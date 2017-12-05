#include "SalesMenuController.h"
#include "SalesMenuView.h"

SalesMenuController::SalesMenuController()
{
    init();
}

void SalesMenuController::init()
{
    displeySalesMenu();
    char size;
    char type;

        while(true){
        displaySalesNavigation();
        cin >> size;
        velja_size(size);


        displaySalesOffer();

        getMenu();


        cin >> type;
        velja_pizzu(type);
    }
}
void StaffUI::velja_size(char size){


    if (size == 'S' || size == 's'){
        cout << "Staerd valin -> Stor √" << endl;
    }
    else if(size == 'L' || size == 'l'){
        cout << "Staerd valin -> Litil √" << endl;
    }
    else if(size == 'M' || size == 'm'){
        cout << "Staerd valin -> Midlungs √" << endl;
    }
    else{
        cout << "Rangt intak " << endl;
    }
    cout << endl;
}

void StaffUI::velja_pizzu(int type){
    if (type == 1){
        cout << "Pizza valin -> Margarita √" << endl;
    }
    else if(type == 2){
        cout << "Pizza valin -> Hawai √" << endl;
    }
    else if(type == 3){
        cout << "Pizza valin -> Meat n' cheese √" << endl;
    }
    else if(type == 4){
        cout << "Pizza valin -> Gudrun special √" << endl;
    }
    else if(type == 5){
        cout << "Pizza valin -> Danni special √" << endl;
    }
    else if(type == 6){
        cout << "Pizza valin -> Hunakongur special √" << endl;
    }
    else{
        cout << "Pizza ekki a matsedli √" << endl;
    }
    cout << endl;
}
