#include "Alegg.h"

Alegg::Alegg()
{
    this->name = "";
    this->price = 50;
}

Alegg::Alegg(string name)
{
    this->name = name;
    this->price = 50;
}

ofstream& operator << (ofstream& fout, const Alegg& alegg){
    fout << alegg.name;
    return fout;
}

ifstream& operator >> (ifstream& fin, Alegg& alegg){
    fin >> alegg.name;
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
