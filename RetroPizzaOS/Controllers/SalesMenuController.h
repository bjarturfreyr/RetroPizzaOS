#ifndef SALESMENUCONTROLLER_H
#define SALESMENUCONTROLLER_H

#include "AdminMenuView.h"
#include "SalesMenuView.h"
#include "Database.h"
#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "GlobalView.h"
#include "AfhendingMenuController.h"
#include "Pizza.h"
#include "Medlaeti.h"


using namespace SalesMenuView;
using namespace GlobalView;

class SalesMenuController
{
    public:
        SalesMenuController();
        bool homeorget();
        void displayAllAfhendingarstadir(vector<string>listOfAfhendingarstadir);
        int veljaAfhendingarstad();
        string addAthugasemd();
        bool borganunaedaastadnum();
        //void openMenu();
        //void displayAllPizzasOnMenu(vector<Pizza>listOfPizzasOnMenu);
    private:
        void init();
        Pizza createPizzaForUser();
        Pizza addPizzaForUserFromMenu(int choice);
        Medlaeti addMedlaetiForUserFromMenu(int choice);
        Database db;

};

#endif // SALESMENUCONTROLLER_H
