#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <fstream>
#include "Pizza.h"
#include <vector>
#include <cstddef>
#include <stdlib.h>
#include <sstream>
#include <iterator>

using namespace std;

class Database {
    public:
    Database();
    vector<Pizza> getListOfPizzasOnMenu();
    void addPizzaToMenu(const Pizza& pizza);
    vector<string> getAllAfhendingarstadirOnDatabase();
    void addPizzaToUnbakedListInStoreLocation(Pizza pizza, string storeLocation);
    void addSize(string);
    vector<string> getAllPizzaSizesOnDatabase();
    vector<string> getAllToppingsOnDatabase();


    string getPizzaSizeByID(int id);
    int getPizzaPriceBySizeID(int mySize);
    string getAleggByID(int id);


    vector<string> displayToppingList();
    void getaleggformypizza(int myChoice);
    void addPizzaSize(string name, int price);
    void addAlegg(string name);
    void addAfhendingarstadir(string name);
    void addMedlaeti(string name, int price);

    private:
    //afhending
    vector<Alegg> aleggs;

};

#endif // DATABASE_H
