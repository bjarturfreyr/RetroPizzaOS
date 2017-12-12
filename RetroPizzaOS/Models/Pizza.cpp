#include "Pizza.h"

Pizza::Pizza(){
    this->nafn = "";
    this->verd = 0;
}

Pizza::Pizza(int numer_pizzu, string nafn, double verd, vector<Alegg> alegg){
    this->numer_pizzu = numer_pizzu;
    this->nafn = nafn;
    this->verd = verd;
    this->alegg = alegg;
}


int Pizza::getnumber(){
    return this->numer_pizzu;
}

string Pizza::getNafn(){
    return this->nafn;
}

double Pizza::getVerd(){
    return this->verd;
}

vector<Alegg> Pizza::getAlegg(){
    return this->alegg;
}

ofstream& operator << (ofstream& out, const Pizza& pizza){
    out << pizza.numer_pizzu;
    out << pizza.nafn;
    out << pizza.aleggsFjoldi;
    out << pizza.verd;

    for(int i = 0; i < pizza.aleggsFjoldi; i++){
        out << pizza.alegg[i];
    }
    return out;
}

ifstream& operator >> (ifstream& in, Pizza& pizza){
    in >> pizza.numer_pizzu;
    in >> pizza.nafn;
    in >> pizza.aleggsFjoldi;
    in >> pizza.verd;
    for(int i = 0; i < pizza.aleggsFjoldi; i++){
        Alegg a;
        in >> a;
        pizza.alegg.push_back(a);
    }

    return in;
}
