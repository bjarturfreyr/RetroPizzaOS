#include "MainMenuView.h"

void MainMenuView::displayMenuNavigation()
{
    //View file-ar sj� bara um a� cout-a �egar kalla� er � ��.

    //15 er hv�tt

    setColor(15);
    cout << "Veldu '";
    setColor(12);
    cout << "u";
    setColor(15);
    cout << "' fyrir Umsjon." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' fyrir Bakara." << endl;


    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' fyrir Solumann." << endl;


    cout << "Veldu '";
    setColor(9);
    cout << "a";
    setColor(15);
    cout << "' fyrir Afhendingu." << endl;


    cout << "Veldu '";
    setColor(13);
    cout << "h";
    setColor(15);
    cout << "' til ad haetta." << endl;
}
