#ifndef ADMINMENUCONTROLLER_H
#define ADMINMENUCONTROLLER_H

#include <iostream>
#include <vector>
#include <fstream>
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
        void createPizzaToMenu();
        void createPizzaSize();
        void createAlegg();
        void createAfhendingarstadur();
        void createMedlaeti();
        void addaleggtomenu(int numberoftoppings);
        Database db;

};

#endif // ADMINMENUCONTROLLER_H
