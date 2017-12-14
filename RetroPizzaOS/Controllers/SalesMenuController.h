#ifndef SALESMENUCONTROLLER_H
#define SALESMENUCONTROLLER_H

#include "AdminMenuView.h"
#include "SalesMenuView.h"
#include "Database.h"
#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "GlobalView.h"
#include "AfhendingMenuController.h"


using namespace SalesMenuView;

class SalesMenuController
{
    public:
        SalesMenuController();
        void homeorget();
        void displayAllAfhendingarstadir(vector<string>listOfAfhendingarstadir);
        //void openMenu();
      //  void displayAllPizzasOnMenu(vector<Pizza>listOfPizzasOnMenu);
    private:
        void init();
        void createPizzaForUser();
        Database db;

};

#endif // SALESMENUCONTROLLER_H
