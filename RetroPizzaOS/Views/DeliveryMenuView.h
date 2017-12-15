#ifndef DELIVERYMENUVIEW_H
#define DELIVERYMENUVIEW_H

#include <iostream>
#include <vector>
#include "GlobalHelpers.h"
#include "Pantanir.h"
#include "Pontudpizza.h"

using namespace GlobalHelpers;
using namespace std;

namespace DeliveryMenuView
{
    void displayDeliveryMenu();
    void displayDeliveryWelcome1(string afhendingarstadur);
    void displayDeliveryNavigation1();
    void displayAllAfhendingarstadir(vector<string> listOfAfhendingarstadir);
    void displayAllPantanir(vector<Pantanir> listOfPantanir);
    void displayAfhendingPizzas(vector<Pontudpizza> listOfPizzas);
    void displayAfhendaPizzaOptions();
};

#endif // DELIVERYMENUVIEW_H
