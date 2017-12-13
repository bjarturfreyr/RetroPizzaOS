#ifndef BAKERSMENUCONTROLLER_H
#define BAKERSMENUCONTROLLER_H

#include "BakersMenuView.h"

#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "GlobalView.h"
#include "Database.h"

using namespace BakersMenuView;

class BakersMenuController
{
    public:
        BakersMenuController(Database db);

    private:
        void init();
        Database db;
};

#endif // BAKERSMENUCONTROLLER_H
