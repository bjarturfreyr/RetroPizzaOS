#ifndef GLOBALHELPERS_H
#define GLOBALHELPERS_H

#include <stdlib.h> //System file sem gefur okkur "clear" skipunina fyrir terminal.
#include <windows.h>
#include <iostream>

using namespace std;

namespace GlobalHelpers {
    void clearScreen();
    void setColor(int color);
    void sign();
};

#endif // GLOBALHELPERS_H
