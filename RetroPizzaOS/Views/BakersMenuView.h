#ifndef BAKERSMENUVIEW_H
#define BAKERSMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"
#include "Pizza.h"
#include "Alegg.h"
#include "Pontudpizza.h"

using namespace std;
using namespace GlobalHelpers;

namespace BakersMenuView{
    void displayBakersNavigation();
    void displayBakersWelcome(string afhendingarstadur);
    void displayUnbakedPizzas(vector<Pontudpizza> listOfPizzas);
    void displaySpecificUnbakedPizzaByID(vector<Pontudpizza> listOfPizzas, int id);
    void displayBakePizzaOptions();
};

#endif // BAKERSMENUVIEW_H
