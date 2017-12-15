#ifndef PONTUDPIZZA_H
#define PONTUDPIZZA_H

#include <string>
#include <iostream>
#include <vector>
#include "Alegg.h"

using namespace std;


class Pontudpizza
{
    public:
        Pontudpizza();
        Pontudpizza(string nafn, int verd, vector<string> alegg, string status);

        string getNafn();
        int getVerd();
        vector<string> getAlegg();
        string getStatus();

        void setName(string nafn);
        void setVerd(int verd);
        void setAlegg(vector<string> alegg);
        void setStatus(string status);

        friend ofstream& operator << (ofstream& out, const Pontudpizza& pontudpizza);
        friend ifstream& operator >> (ifstream& in, Pontudpizza& pontudpizza);

    private:
        string nafn;
        int verd;
        vector<string> alegg;
        string status;
};

#endif // PONTUDPIZZA_H
