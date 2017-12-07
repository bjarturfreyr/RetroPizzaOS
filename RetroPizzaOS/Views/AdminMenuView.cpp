#include "AdminMenuView.h"

void AdminMenuView::displayAdminWelcome(){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(12);
    cout << "umsjon";
    setColor(15);
    cout << " menu." << endl << endl;
}

void AdminMenuView::displayAdminNavigation(){
    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad skra pizzu a matsedil." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad skra inn nyja staerd af pizzu." << endl;


    cout << "Veldu '";
    setColor(12);
    cout << "a";
    setColor(15);
    cout << "' til ad skra nyja aleggstegund." << endl;


    cout << "Veldu '";
    setColor(7);
    cout << "v";
    setColor(15);
    cout << "' til ad skra adrar vorur (t.d. gos)." << endl;


    cout << "Veldu '";
    setColor(6);
    cout << "n";
    setColor(15);
    cout << "' til ad skra nyja afhendingarstadi." << endl;


    cout << "Veldu '";
    setColor(8);
    cout << "l";
    setColor(15);
    cout << "' til ad fa lista yfir pizzur a matsedli." << endl;


    cout << "Veldu '";
    setColor(10);
    cout << "t";
    setColor(15);
    cout << "' til ad fara til baka." << endl;


    cout << "Veldu '";
    setColor(13);
    cout << "h";
    setColor(15);
    cout << "' til ad haetta." << endl;
}

void AdminMenuView::displayAdminPizzaList() {
    cout << "Allar pizzur a matsedli:" << endl << endl;
    cout << listPizzas() << endl << endl;
    cout << "Press any key to continue..";
}
