#include "BakersMenuView.h"

void BakersMenuView::displayBakersWelcome(string afhendingarstadur){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(14);
    cout << "bakara";
    setColor(15);
    cout << " felagi." << endl << endl;
    cout << "Thu ert a afhendingarstadnum: " << afhendingarstadur << endl << endl;
}

void BakersMenuView::displayBakersNavigation(){

    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad velja afhendingarstad." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad fa upp lista af pontudum pizzum." << endl;


    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad fa upp tiltekna pantada pizzu." << endl;


    cout << "Veldu '";
    setColor(6);
    cout << "n";
    setColor(15);
    cout << "' til ad merkja pizzu i vinnslu eda tilbuna." << endl;


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

void BakersMenuView::displayUnbakedPizzas(vector<Pizza> listOfPizzas)
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

void BakersMenuView::displaySpecificUnbakedPizzaByID(vector<Pizza> listOfPizzas, int id)
{
    id -= 1;
    for(int i = 0; i == id; i++)
    {
        cout << listOfPizzas[i].getNafn() << endl;
        for(int j = 0; j < listOfPizzas[i].getAlegg().size(); j++) {
            cout << listOfPizzas[i].getAlegg()[j] << endl;
        }
    }
}
