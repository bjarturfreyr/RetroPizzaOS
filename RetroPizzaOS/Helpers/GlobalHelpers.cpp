#include "GlobalHelpers.h"

void GlobalHelpers::clearScreen(){
    system("cls");
}

void GlobalHelpers::setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
