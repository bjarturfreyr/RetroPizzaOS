#ifndef GLOBALHELPERS_H
#define GLOBALHELPERS_H

#include <stdlib.h> //System file sem gefur okkur "clear" skipunina fyrir terminal.
#include <windows.h>

namespace GlobalHelpers {
    void clearScreen();
    void setColor(int color);
};

#endif // GLOBALHELPERS_H
