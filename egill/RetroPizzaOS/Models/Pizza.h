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
        Pizza(string nafn, double verd, vector<Alegg> alegg);
        string getNafn();
        double getVerd();
        vector<Alegg> getAlegg();

        friend ostream& operator << (ostream& out, const Pizza& pizza);
        friend istream& operator >> (istream& in, Pizza& pizza);



    private:
        string nafn;
        double verd;
        int aleggsFjoldi;
        vector<Alegg> alegg;
};

#endif // PIZZA_H
