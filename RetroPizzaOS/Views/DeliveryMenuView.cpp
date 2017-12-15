#include "DeliveryMenuView.h"

void DeliveryMenuView::displayDeliveryWelcome1(string afhendingarstadur){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(5);
    cout << "afhending";
    setColor(15);
    cout << " felagi." << endl << endl;
    cout << "Thu ert a afhendingarstadnum: " << afhendingarstadur << endl << endl;
}

void DeliveryMenuView::displayDeliveryNavigation1(){
    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad velja afhendingastad." << endl;
    setColor(15);

/*
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
    setColor(12);
    cout << "u";
    setColor(15);
    cout << "' til ad fa upp tiltekna pontun." << endl;


    cout << "Veldu '";
    setColor(3);
    cout << "m";
    setColor(15);
    cout << "' til ad merkja pontun greidda eda afhenta." << endl;
*/

    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad fa lista af pizzum." << endl;


    cout << "Veldu '";
    setColor(3);
    cout << "m";
    setColor(15);
    cout << "' til ad merkja pizzu greidda eda afhenta." << endl;


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

void DeliveryMenuView::displayAfhendingPizzas(vector<Pontudpizza> listOfPizzas)
{
    for(int i = 0; i < listOfPizzas.size(); i++){
        cout << "------------------" << endl;
        cout << "Pizza " << i+1 << ": " << listOfPizzas[i].getNafn() << endl;
        for(int j = 0; j < listOfPizzas[i].getAlegg().size(); j++) {
            cout << listOfPizzas[i].getAlegg()[j] << endl;
        }
    }
    cout << "------------------" << endl;
}

void DeliveryMenuView::displayAfhendaPizzaOptions()
{
    cout << "Veldu '";
    setColor(8);
    cout << "4";
    setColor(15);
    cout << "' til ad merkja pizzu greidda." << endl;

    cout << "Veldu '";
    setColor(9);
    cout << "5";
    setColor(15);
    cout << "' til ad merkja pizzu afhenta." << endl;
}

void DeliveryMenuView::displayAllAfhendingarstadir(vector<string> listOfAfhendingarstadir)
{
    for(int i = 0; i < listOfAfhendingarstadir.size(); i++){
        cout << i+1 << ": " << listOfAfhendingarstadir[i] << endl;
    }
}

void DeliveryMenuView::displayAllPantanir(vector<Pantanir> listOfPantanir)
{
    for(int i = 0; i < listOfPantanir.size(); i++)
    {
        cout << "------------------------------" << endl;
        cout << "Pontun numer " << i << ":" << endl;
        for (int j = 0; j < listOfPantanir[i].getAmountOfPizzur(); j++)
        {
            //cout <<
        }
    }
}
