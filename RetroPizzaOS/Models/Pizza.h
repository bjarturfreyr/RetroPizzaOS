#ifndef PIZZA_H
#define PIZZA_H

#include<string>
#include<iostream>
#include <vector>
#include "Alegg.h"
using namespace std;


class Pizza
{
    public:
        Pizza();
        Pizza(int numer_pizzu, string nafn, double verd, vector<Alegg> alegg);

        string getNafn();
        double getVerd();
        int getnumber();
        vector<Alegg> getAlegg();

        friend ofstream& operator << (ofstream& out, const Pizza& pizza);
        friend ifstream& operator >> (ifstream& in, Pizza& pizza);



    private:
        string nafn;
        double verd;
        int aleggsFjoldi;
        vector<Alegg> alegg;
        int numer_pizzu;
};

#endif // PIZZA_H
