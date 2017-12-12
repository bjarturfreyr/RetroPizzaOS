#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

#include "MainMenuView.h"
#include "GlobalHelpers.h"
#include "AdminMenuController.h"
#include "SalesMenuController.h"
#include "BakersMenuController.h"
#include "DeliveryController.h"
#include "GlobalView.h"
#include "Database.h"

using namespace MainMenuView;
using namespace GlobalHelpers;
using namespace GlobalView;

using namespace std;

class MainMenuController
{
    public:
        MainMenuController(Database db);


    protected:

    private:
        void init();
        Database db;
};

#endif // MAINMENUCONTROLLER_H
