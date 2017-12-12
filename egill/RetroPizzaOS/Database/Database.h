#ifndef DATABASE_H
#define DATABASE_H

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
    void addSize(string);
    private:
};

#endif // DATABASE_H
