#include "Alegg.h"

Alegg::Alegg()
{
    this->name = "";
    this->price = 0;
}

Alegg::Alegg(string name, double price)
{
    this->name = name;
    this->price = price;
}


ofstream& operator << (ofstream& fout, Alegg& alegg){
    fout << alegg.name;
    fout << alegg.price;
    return fout;
}

ifstream& operator >> (ifstream& fin, Alegg& alegg){
    fin >> alegg.name;
    fin >> alegg.price;
    return fin;
}



string Alegg::getName()
{
    return this->name;
}

double Alegg::getPrice()
{
    return this->price;
}

void Alegg::setName(string name)
{
    this->name = name;
}

void Alegg::setPrice(double price)
{
    this->price = price;
}




