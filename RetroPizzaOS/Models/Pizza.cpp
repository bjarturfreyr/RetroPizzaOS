#include "Pizza.h"

Pizza::Pizza(string nafn, double verd, string alegg){
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
    out << pizza.nafn << ", " << pizza.verd << ", " << pizza.alegg << endl;

    return out;
}
