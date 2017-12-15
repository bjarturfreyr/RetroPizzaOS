#ifndef BAKERSMENUVIEW_H
#define BAKERSMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"
#include "Pizza.h"
#include "Alegg.h"

using namespace std;
using namespace GlobalHelpers;

namespace BakersMenuView{
    void displayBakersNavigation();
    void displayBakersWelcome(string afhendingarstadur);
    void displayUnbakedPizzas(vector<Pizza> listOfPizzas);
    void displaySpecificUnbakedPizzaByID(vector<Pizza> listOfPizzas, int id);
};

#endif // BAKERSMENUVIEW_H
