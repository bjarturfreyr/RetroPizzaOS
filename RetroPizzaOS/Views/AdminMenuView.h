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
    void displayAddedPizza(Pizza pizza);
    void displayAllPizzaSizes(vector<string> listOfPizzaSizes);
    void displayAllToppings(vector<string> listOfToppings);
}

#endif // ADMINMENUVIEW_H
