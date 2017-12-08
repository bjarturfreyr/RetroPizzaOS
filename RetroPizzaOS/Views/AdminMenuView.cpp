#include "AdminMenuView.h"

void AdminMenuView::displayAdminWelcome(){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(12);
    cout << "umsjon";
    setColor(15);
    cout << " menu." << endl << endl;
}

void AdminMenuView::displayVeldu()
{
    cout << "Budu til heiti a pizzu og svo aleggs ID" << endl;
}

void AdminMenuView::displayContinue()
{
    cout << "Yttu a hvada takka sem er til ad halda afram! " << endl;
}

void AdminMenuView::displayAdminNavigation(){
    setColor(15);
    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad bua til pizzu." << endl;

    cout << "Veldu '";
    setColor(9);
    cout << "l";
    setColor(15);
    cout << "' til ad fa lista yfir pizzur a matsedli." << endl;

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

void AdminMenuView::displayAdminPizzaList() {
    cout << "Allar pizzur a matsedli:" << endl << endl;
    cout << listPizzas();
}
