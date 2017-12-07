#ifndef ADMINMENUCONTROLLER_H
#define ADMINMENUCONTROLLER_H

#include "AdminMenuView.h"
#include "Pizza.h"
#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "GlobalView.h"
#include "conio.h"
#include "Database.h"

using namespace AdminMenuView;
using namespace GlobalView;
using namespace Database;

class AdminMenuController
{
    public:
        AdminMenuController();

    private:
        void init();
};

#endif // ADMINMENUCONTROLLER_H
