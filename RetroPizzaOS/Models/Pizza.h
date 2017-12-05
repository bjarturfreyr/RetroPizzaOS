#ifndef PIZZA_H
#define PIZZA_H

#include<string>
#include<iostream>

using namespace std;


class Pizza
{
    public:
        Pizza(string nafn, double verd, string alegg);
        string get_nafn();
        double get_verd();
        string get_alegg();

        friend ostream& operator << (ostream& out, const Pizza& pizza);


    private:
        string nafn;
        double verd;
        string alegg;
};

#endif // PIZZA_H
