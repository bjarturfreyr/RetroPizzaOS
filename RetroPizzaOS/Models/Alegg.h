#ifndef ALEGG_H
#define ALEGG_H

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Alegg{

private:
    string name;
    double price = 50;

public:
    Alegg();
    Alegg(string name);

    friend ifstream& operator >>(ifstream& fin, Alegg& alegg);
    friend ofstream& operator <<(ofstream& fout, const Alegg& alegg);

    string getName();
    double getPrice();
    void setName(string name);
 };

#endif // ALEGG_H
