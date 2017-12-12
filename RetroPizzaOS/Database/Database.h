#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <fstream>
#include "Pizza.h"
#include <vector>

using namespace std;

class Database {
    public:
    Database();
    vector<Pizza> getListOfPizzasOnMenu();
    void addPizzaToMenu(const Pizza& pizza);
    void addAlegg(string nafn, int verd);
    string listAfhendingarstadir();
    void addPizzaToUnbakedListInStoreLocation(Pizza pizza, string storeLocation);
    void addSize(string);

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
};

#endif // DATABASE_H
