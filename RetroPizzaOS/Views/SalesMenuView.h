#ifndef SALESMENUVIEW_H
#define SALESMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"

using namespace GlobalHelpers;

using namespace std;

namespace SalesMenuView{
    void displaySalesWelcome();
    void displaySalesNavigation();
    void displaySalesPizzalist();
    void displaySalesSize();
    void displaySalesWhatYouWannaDo();

    void addToOrder();

    void velja_size(char size);
}

#endif // SALESMENUVIEW_H
