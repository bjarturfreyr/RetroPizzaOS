#ifndef SALESMENUVIEW_H
#define SALESMENUVIEW_H

#include <iostream>
#include "Database.h"

using namespace Database;

using namespace std;

namespace SalesMenuView{
    void displaySalesMenu();
    void displaySalesNavigation();
    void displaySalesPizzalist();
    void displaySalesOffer();

    void velja_size(char size);
    void velja_pizzu(int type);


}

#endif // SALESMENUVIEW_H
