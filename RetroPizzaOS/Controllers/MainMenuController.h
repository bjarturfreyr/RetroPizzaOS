#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

#include <iostream>
#include "MainMenuView.h"

using namespace MainMenuView;

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
