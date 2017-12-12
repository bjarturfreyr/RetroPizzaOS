#include "Pizza.h"

Pizza::Pizza(){
    this->nafn = "";
    this->verd = 0;
}

Pizza::Pizza(string nafn, double verd, Alegg alegg){
    this->nafn = nafn;
    this->verd = verd;
    this->alegg = alegg;
}


string Pizza::get_nafn(){
    return this->nafn;
}

double Pizza::get_verd(){
    return this->verd;
}

string Pizza::get_alegg(){
    return this->alegg;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << pizza.nafn;
    out << pizza.verd;
    out << pizza.aleggsFjoldi;
    for(int i = 0; i < pizza.aleggsFjoldi; i++{
        out << pizza.alegg[i];
    }
    return out;
}

istream& operator >> (istream& in, Pizza& pizza){
    in >> pizza.nafn;
    in >> pizza.verd;
    in >> pizza.aleggsFjoldi;
    for(int i = 0; i < pizza.aleggsFjoldi; i++{
        Alegg a;
        in >> a;
        pizza.alegg.push_back(a);
    }

    return in;
}
