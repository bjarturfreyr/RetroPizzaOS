#include "SalesMenuView.h"

void SalesMenuView::displaySalesMenu()
{
    cout << " VELKOMIN A SOLUSIDU RETRO PIZZA" << endl;
}

void SalesMenuView::displaySalesNavigation()
{
        cout << "Hvada staerd ma bjoda ther" << endl;
        cout << "Litil = L" << endl;
        cout << "Midstaerd = M" << endl;
        cout << "Stor = S" << endl;
        cout << endl;
}

void SalesMenuView::displaySalesPizzalist()
{
    cout << "Veldu pizzu" << endl;
    cout << listPizzas() << endl;
}

void SalesMenuView::displaySalesOffer()
{
    cout << "Hvada pizzu ma bjoda ther" << endl;
}

void SalesMenuView::velja_size(char size){


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



void SalesMenuView::velja_pizzu(int type){
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
