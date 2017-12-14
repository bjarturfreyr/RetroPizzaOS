#include "AdminMenuView.h"

void AdminMenuView::displayAdminWelcome(){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(12);
    cout << "umsjon";
    setColor(15);
    cout << " felagi." << endl << endl;
}

void AdminMenuView::displayAdminNavigation(){

    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad skra inn nyja staerd af pizzu." << endl;


    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad skra nyja aleggstegund." << endl;


    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad skra pizzu a matsedil." << endl;


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

void AdminMenuView::displayAddedPizza(Pizza pizza){
    cout << "Thu hefur baett dessari pizzu vid matsedilinn:" << endl;
    cout << pizza.getNafn() << endl;
    cout << pizza.getVerd() << endl;\
    for(int i = 0; i < pizza.getAlegg().size(); i++){
        Alegg a = pizza.getAlegg().at(i);
        cout << a.getName() << endl;
        cout << a.getPrice() << endl;
    }
}

void AdminMenuView::displayAdminPizzaList(vector<Pizza> listOfPizzasOnMenu) {
    cout << "Allar pizzur a matsedli:" << endl << endl;
    for(unsigned int i = 0; i < listOfPizzasOnMenu.size(); i++){
        cout << "Pizza nr." << i+1 << "\t" << listOfPizzasOnMenu[i].getNafn() << "\tPrice: " << listOfPizzasOnMenu[i].getVerd() << endl;
        for(unsigned int j = 0; j < listOfPizzasOnMenu[i].getAlegg().size(); j++){
            //cout << "Alegg nr." << j+1 << "\t" << listOfPizzasOnMenu[i].getAlegg().at(j).getName() << endl;
        }
        cout << endl << endl;
     }
    cout << "Yttu a einhvern takka til ad halda afram..";
}


void AdminMenuView::displayAllPizzaSizes(vector<string> listOfPizzaSizes)
{
    for(int i = 0; i < listOfPizzaSizes.size(); i++){
        cout << i+1 << ": " << listOfPizzaSizes[i] << endl;
    }
}

void AdminMenuView::displayAllToppings(vector<string> listOfToppings)
{
    for(int i = 0; i < listOfToppings.size(); i++){
        cout << i+1 << ": " << listOfToppings[i] << endl;
    }
}

void AdminMenuView::displayMenu(vector<Pizza> listOfPizzas)
{
    for(int i = 0; i < listOfPizzas.size(); i++){
        cout << "------------------" << endl;
        cout << "Pizza " << i+1 << ": " << listOfPizzas[i].getNafn() << endl;
        cout << "Verd" << ": " << listOfPizzas[i].getVerd() << endl;
        for(int j = 0; j < listOfPizzas[i].getAlegg().size(); j++) {
            cout << listOfPizzas[i].getAlegg()[j] << endl;
        }
    }
}
