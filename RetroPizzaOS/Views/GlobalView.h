#ifndef GLOBALVIEW_H
#define GLOBALVIEW_H


#include <iostream>
#include "GlobalHelpers.h"
#include "Pizza.h"

using namespace std;
using namespace GlobalHelpers;

namespace GlobalView
{
    void displayHeader();
    void displayMenu(vector<Pizza> listOfPizzas);
};

#endif // GLOBALVIEW_H
