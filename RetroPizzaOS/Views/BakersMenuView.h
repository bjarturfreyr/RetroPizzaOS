#ifndef BAKERSMENUVIEW_H
#define BAKERSMENUVIEW_H

#include <iostream>
#include "Database.h"

using namespace std;

namespace BakersMenuView{
    void displayBakersMenu();
    void displayBakersNavigation(char);
    void displayBakersEnding();
    void displayAfhendingarstadir();
    void displayBakersWelcome();
    void selectPizza(int numerpizzu);

    void bakersGetPizza();

    void villuskilabod();

    void ofnMenu();
    void ofnReddy();
    void ofnNuna();

    void pokkunMenu();
    void pokkunReddy();
    void pokkunNuna();

    void tilbuinMenu();
    void tilbuinReddy();
    void tilbuinNuna();
};

#endif // BAKERSMENUVIEW_H
