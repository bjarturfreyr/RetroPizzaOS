#ifndef DELIVERYMENUCONTROLLER_H
#define DELIVERYMENUCONTROLLER_H

#include <iostream>
#include "DeliveryMenuView.h"
#include "MainMenuController.h"
#include "GlobalHelpers.h"
#include "Database.h"

using namespace DeliveryMenuView;

class DeliveryMenuController
{
    public:
        DeliveryMenuController(Database db);

    private:
        void init();
        void veljaAfhendingarstad();
        Database db;
};

#endif // DELIVERYMENUCONTROLLER_H
