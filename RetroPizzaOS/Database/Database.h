#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <fstream>

using namespace std;

namespace Database {
    string listPizzas();
    void addPizza(string nafn, int aleggID);
    void addAlegg(string nafn, int verd);
    string listAfhendingarstadir();
    void addSize(string);
};

#endif // DATABASE_H
