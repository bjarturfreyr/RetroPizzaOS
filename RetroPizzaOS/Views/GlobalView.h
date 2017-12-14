#ifndef GLOBALVIEW_H
#define GLOBALVIEW_H


#include <iostream>
#include "GlobalHelpers.h"
#include "Pizza.h"
#include "Medlaeti.h"

using namespace std;
using namespace GlobalHelpers;

namespace GlobalView
{
    void displayHeader();
    void displayMenu(vector<Pizza> listOfPizzas);
    void displayMedlaeti(vector<Medlaeti> listOfMedlaeti);
};

#endif // GLOBALVIEW_H
