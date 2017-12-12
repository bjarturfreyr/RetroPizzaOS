#ifndef ADMINMENUCONTROLLER_H
#define ADMINMENUCONTROLLER_H

#include <iostream>
#include <vector>
#include "Pizza.h"
#include "Alegg.h"
#include "AdminMenuView.h"
#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "GlobalView.h"
#include "conio.h"
#include "Database.h"

using namespace AdminMenuView;
using namespace GlobalView;

class AdminMenuController
{
    public:
        AdminMenuController(Database db);

    private:
        void init();
        Database db;
};

#endif // ADMINMENUCONTROLLER_H
