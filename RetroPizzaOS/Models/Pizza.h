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
        Pizza(string nafn, int verd, vector<string> alegg);

        string getNafn();
        int getVerd();
        vector<string> getAlegg();

        void setName(string nafn);
        void setVerd(int verd);
        void setAlegg(vector<string> alegg);

        friend ofstream& operator << (ofstream& out, const Pizza& pizza);
        friend ifstream& operator >> (ifstream& in, Pizza& pizza);

    private:
        string nafn;
        int verd;
        int aleggsFjoldi;
        vector<string> alegg;
};

#endif // PIZZA_H
