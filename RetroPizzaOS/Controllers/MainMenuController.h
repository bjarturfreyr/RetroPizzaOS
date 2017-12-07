#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

#include "MainMenuView.h"
#include "GlobalHelpers.h"
#include "AdminMenuController.h"
#include "SalesMenuController.h"
#include "BakersMenuController.h"
#include "GlobalView.h"

using namespace MainMenuView;
using namespace GlobalHelpers;
using namespace GlobalView;

using namespace std;

class MainMenuController
{
    public:
        MainMenuController();
        virtual ~MainMenuController();

    protected:

    private:
        void init();
};

#endif // MAINMENUCONTROLLER_H
