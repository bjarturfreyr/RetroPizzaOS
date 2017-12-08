#ifndef BAKERSMENUVIEW_H
#define BAKERSMENUVIEW_H

#include <iostream>
#include "Database.h"

using namespace Database;

using namespace std;

namespace BakersMenuView{
    void displayBakersMenu();
    void displayBakersNavigation();
    void displayBakersEnding();
    void displayAfhendingarstadir();

    void Afhendingarstadur(string);
    void displaylistpantanir(string);

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
