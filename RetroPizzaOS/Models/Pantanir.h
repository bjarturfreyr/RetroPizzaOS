#ifndef PANTANIR_H
#define PANTANIR_H

#include <string>
#include <iostream>
#include <vector>
#include "Pizza.h"
#include "Medlaeti.h"
using namespace std;


class Pantanir
{
    public:
        Pantanir();
        Pantanir(vector<Pizza> pizzur, vector<Medlaeti> medlaeti, string athugasemd, int afhendingarstadur, bool sent, bool greitt);

        vector<Pizza> getPizzur();
        vector<Medlaeti> getMedlaeti();
        string getAthugasemd();
        int getAfhendingarstadur();
        bool getSent();
        bool getGreitt();

        void setPizzur(vector<Pizza> pizzur);
        void setMedlaeti(vector<Medlaeti> medlaeti);
        void setAthugasemd(string athugasemd);
        void setAfhendingarstadur(int afhendingarstadur);
        void setSent(bool sent);
        void setGreitt(bool greitt);

    private:
        vector<Pizza> pizzur;
        vector<Medlaeti> medlaeti;
        string athugasemd;
        int afhendingarstadur;
        bool sent;
        bool greitt;
};

#endif // PANTANIR_H
