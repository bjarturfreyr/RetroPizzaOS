#ifndef SALESMENUVIEW_H
#define SALESMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"

using namespace Database;
using namespace GlobalHelpers;

using namespace std;

namespace SalesMenuView{
    void displaySalesWelcome();
    void displaySalesNavigation();
    void displaySalesPizzalist();

    void velja_size(char size);
    void velja_pizzu(int type);
}

#endif // SALESMENUVIEW_H
