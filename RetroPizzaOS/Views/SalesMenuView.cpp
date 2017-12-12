#include "SalesMenuView.h"

void SalesMenuView::displaySalesWelcome()
{
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(11);
    cout << "solumann";
    setColor(15);
    cout << " menu." << endl << endl;
}

void SalesMenuView::displaySalesNavigation()
{
    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad skra nyja pontun." << endl;

    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad breyta pontun." << endl;

    cout << "Veldu '";
    setColor(10);
    cout << "t";
    setColor(15);
    cout << "' til ad fara til baka." << endl;

    cout << "Veldu '";
    setColor(13);
    cout << "h";
    setColor(15);
    cout << "' til ad haetta." << endl;
}


/*void SalesMenuView::displaySalesPizzalist()
{
    cout << "Hvada pizzu ma bjoda der? Veldu numer: " << endl;

    for(int i = 0; i < listOfPizzasOnMenu.size(); i++){
        cout << listOfPizzasOnMenu[i] << endl << endl;
    }
}
*/
void SalesMenuView::displaySalesSize()
{
    cout << "Hvada staerd ma bjoda der? " << endl;
    cout << "Litil (l), Midlungs (m) eda Stor (s): " << endl;
}

void SalesMenuView::velja_size(char size){

    if (size == 'S' || size == 's'){
        cout << "Staerd valin -> Stor " << endl;
    }
    else if(size == 'L' || size == 'l'){
        cout << "Staerd valin -> Litil " << endl;
    }
    else if(size == 'M' || size == 'm'){
        cout << "Staerd valin -> Midlungs " << endl;
    }
    else{
        cout << "Rangt inntak! Reyndu aftur! " << endl;
    }
    cout << endl;
}


void SalesMenuView::addToOrder(){
    cout << "Ma bjoda ther ad baeta vid pontunina? " << endl;
    cout << "j = ja, n = nei" << endl;

}


