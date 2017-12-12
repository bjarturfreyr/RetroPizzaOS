#ifndef AFHENDINGMENUCONTROLLER_H
#define AFHENDINGMENUCONTROLLER_H

#include "Database.h"

class AfhendingMenuController
{
    public:
        void mainmenu();
        AfhendingMenuController();
        virtual ~AfhendingMenuController();

    protected:

    private:
        void validateafhendingarstadur(char afhendingarstadur);
        Database database;
        Pizza pizza;
};

#endif // AFHENDINGMENUCONTROLLER_H

