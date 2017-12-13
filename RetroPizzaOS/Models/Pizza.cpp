#include "Pizza.h"

Pizza::Pizza(){
    this->nafn = "";
    this->verd = 0;
    this->alegg = alegg;
}

Pizza::Pizza(string nafn, int verd, vector<string> alegg){
    this->nafn = nafn;
    this->verd = verd;
    this->alegg = alegg;
}

string Pizza::getNafn(){
    return nafn;
}

int Pizza::getVerd(){
    return verd;
}

vector<string> Pizza::getAlegg(){
    return alegg;
}

void Pizza::setName(string nafn)
{
    this->nafn = nafn;
}

void Pizza::setVerd(int verd)
{
    this->verd = verd;
}

void Pizza::setAlegg(vector<string> alegg)
{
    this->alegg = alegg;
}

ofstream& operator << (ofstream& out, const Pizza& pizza){
    out << endl << pizza.nafn << endl;
    out << pizza.verd << endl;


    for (int i = 0; i < pizza.alegg.size(); i++) {
        out << pizza.alegg[i] << " ";
    }

    return out;
}

ifstream& operator >> (ifstream& in, Pizza& pizza){
    in >> pizza.nafn;
    in >> pizza.aleggsFjoldi;
    in >> pizza.verd;
    //in >> pizza.alegg;
    /*
    for(int i = 0; i < pizza.aleggsFjoldi; i++){
        Alegg a;
        in >> a;
        pizza.alegg.push_back(a);
    }
    */
    return in;
}
