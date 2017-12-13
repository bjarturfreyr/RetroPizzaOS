#ifndef ADMINMENUVIEW_H
#define ADMINMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"

using namespace GlobalHelpers;

using namespace std;

namespace AdminMenuView{
    void displayAdminWelcome();
    void displayAdminNavigation();
    void displayAdminPizzaList(vector<Pizza> listOfPizzasOnMenu);
    void displayAdminToppinglist(vector<Alegg> listOfAleggOnMenu);
    void displayAddedPizza(Pizza pizza);
}

#endif // ADMINMENUVIEW_H
