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

    private:
        void init();
};

#endif // SALESMENUCONTROLLER_H