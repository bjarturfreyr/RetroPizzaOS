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
#include "Medlaeti.h"
#include <conio.h>

using namespace std;

class Database {
    public:
    Database();
    vector<Pizza> getListOfPizzasOnMenu();
    vector<string> getAllAfhendingarstadirOnDatabase();
    vector<string> getAllPizzaSizesOnDatabase();
    vector<string> getAllToppingsOnDatabase();
    vector<Medlaeti> getAllMedlaetiOnDatabase();
    void getaleggformypizza(int myChoice);
    vector<Pizza> getAllUnbakedPizzasOnLocation(string location);


    string getPizzaSizeByID(int id);
    int getPizzaPriceBySizeID(int mySize);
    string getAleggByID(int id);
    string getAfhendingarstadurByID(int id);


    vector<string> displayToppingList();


    void addPizzaToMenu(const Pizza& pizza);
    void addPizzaToUnbakedListInStoreLocation(Pizza pizza, string storeLocation);
    void addSize(string);
    void addPizzaSize(string name, int price);
    void addAlegg(string name);
    void addAfhendingarstadir(string name);
    void addMedlaeti(string name, int price);
    void addOrderToSpecificPlace(vector<Pizza> pizzas, vector<Medlaeti> medlatis, string athugasemd, int afhendingarstadurinn, bool sent, bool greitt);

    private:
    //afhending
    vector<Alegg> aleggs;

};

#endif // DATABASE_H
