#ifndef ADMINMENUVIEW_H
#define ADMINMENUVIEW_H

#include <iostream>
#include "Database.h"
#include "GlobalHelpers.h"

using namespace Database;
using namespace GlobalHelpers;

using namespace std;

namespace AdminMenuView{
    void displayAdminWelcome();
    void displayAdminNavigation();
    void displayAdminPizzaList();
    void displayVeldu();
    void displayContinue();
}

#endif // ADMINMENUVIEW_H
