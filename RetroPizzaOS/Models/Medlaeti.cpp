#include "Medlaeti.h"

Medlaeti::Medlaeti()
{
    this->name = "";
    this->price = 0;
}

Medlaeti::Medlaeti(string name, int price)
{
    this->name = name;
    this->price = price;
}

ofstream& operator << (ofstream& fout, const Medlaeti& Medlaeti){
    fout << Medlaeti.name;
    fout << Medlaeti.price;
    return fout;
}

ifstream& operator >> (ifstream& fin, Medlaeti& Medlaeti){
    fin >> Medlaeti.name;
    fin >> Medlaeti.price;
    return fin;
}

string Medlaeti::getName()
{
    return this->name;
}

int Medlaeti::getPrice()
{
    return this->price;
}

void Medlaeti::setName(string name)
{
    this->name = name;
}

void Medlaeti::setPrice(int price)
{
    this->price = price;
}
