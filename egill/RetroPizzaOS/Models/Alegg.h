#ifndef ALEGG_H
#define ALEGG_H

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Alegg{

private:
    string name;
    double price;

public:
    Alegg();
    Alegg(string name, double price);

    friend ifstream& operator >>(ifstream& fin, Alegg& alegg);
    friend ofstream& operator <<(ofstream& fout, Alegg& alegg);

    string getName();
    double getPrice();
    void setName(string name);
    void setPrice(double price);
 };

#endif // ALEGG_H
