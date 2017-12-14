#include "MainMenuView.h"

void MainMenuView::displayMenuNavigation()
{
    setColor(15);
    cout << "Veldu '";
    setColor(12);
    cout << "u";
    setColor(15);
    cout << "' fyrir umsjon." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' fyrir bakara." << endl;


    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' fyrir solumann." << endl;


    cout << "Veldu '";
    setColor(9);
    cout << "a";
    setColor(15);
    cout << "' fyrir afhendingu." << endl;


    cout << "Veldu '";
    setColor(13);
    cout << "h";
    setColor(15);
    cout << "' til ad haetta." << endl;
}
