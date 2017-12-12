#ifndef MEDLAETI_H
#define MEDLAETI_H


#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Medlaeti{

private:
    string name;
    int price;

public:
    Medlaeti();
    Medlaeti(string name, int price);

    friend ifstream& operator >>(ifstream& fin, Medlaeti& Medlaeti);
    friend ofstream& operator <<(ofstream& fout, const Medlaeti& Medlaeti);

    string getName();
    int getPrice();
    void setName(string name);
    void setPrice(int price);
 };
#endif // MEDLAETI_H
