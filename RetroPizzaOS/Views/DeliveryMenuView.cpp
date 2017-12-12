#include "DeliveryMenuView.h"

void DeliveryMenuView::displayDeliveryWelcome()
{
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(11);
    cout << "afhendingar";
    setColor(15);
    cout << " menu." << endl << endl;

    cout << "A hvada afhendingarstad viltu vera a? " << endl;
    cout << "K = Koparvogur" << endl;
    cout << "G = Grafarrvogur" << endl;
    cout << "V = Vesturbaer" << endl;
    cout << "H = Hafnafjordur" << endl;
    cout << "S = Selfoss" << endl;

    cout << endl;
    cout << endl;
}

void DeliveryMenuView::displayDeliveryNavigation(){
    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad velja afhendingastad." << endl;
    setColor(15);

    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad fa lista af tilbunum pontunum fyrir dennan stad." << endl;

    cout << "Veldu '";
    setColor(10);
    cout << "c";
    setColor(15);
    cout << "' til ad fa upp tiltekna pontun." << endl;

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
