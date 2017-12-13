#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <fstream>
#include "Pizza.h"
#include <vector>
#include <cstddef>
#include <stdlib.h>

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
    int getPizzaPriceBySizeID(int mySize);
    vector<string> displayToppingList();
    void getaleggformypizza(int myChoice);
    void addPizzaSize(string name, int price);
    void addAlegg(string name);
    void addAfhendingarstadir(string name);
    void addMedlaeti(string name, int price);


    //afhending
    void addPizzaToKopavogur(const Pizza& pizza);
    vector<Pizza> getAllPizzasFromKopavogur();

    void hfjorder(const Pizza& pizza);
    void hfjmenu();

    void vsborder(const Pizza& pizza);
    void vsbmenu();

    void grafarvogurorder(const Pizza& pizza);
    void grafarvogurmenu();

    void selfossorder(const Pizza& pizza);
    void selfossmenu();

    private:
    //afhending
    vector<Pizza> kopavogur;
    vector<Pizza> hfj;
    vector<Pizza> vsb;
    vector<Pizza> grafarvogur;
    vector<Pizza> selfoss;
    vector<Alegg> aleggs;
};

#endif // DATABASE_H
