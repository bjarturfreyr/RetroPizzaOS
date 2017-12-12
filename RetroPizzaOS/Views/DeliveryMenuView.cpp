#include "DeliveryMenuView.h"

void DeliveryMenuView::displayDeliveryWelcome1(){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(5);
    cout << "afhending";
    setColor(15);
    cout << " menu." << endl << endl;
}

void DeliveryMenuView::displayDeliveryNavigation1(){
    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad velja afhendingastad." << endl;
    setColor(15);


    cout << "Veldu '";
    setColor(4);
    cout << "p";
    setColor(15);
    cout << "' til ad fa upp pantanir a afhendingarstad." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad fa upp tilbunar pantanir." << endl;


    cout << "Veldu '";
    setColor(3);
    cout << "m";
    setColor(15);
    cout << "' til ad merkja pontun greidda eda afhenta." << endl;


    cout << "Veldu '";
    setColor(12);
    cout << "u";
    setColor(15);
    cout << "' til ad fa upp tiltekna pontun." << endl;


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
