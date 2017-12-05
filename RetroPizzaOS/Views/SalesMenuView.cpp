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
