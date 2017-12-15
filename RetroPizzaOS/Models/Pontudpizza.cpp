#include "Pontudpizza.h"

Pontudpizza::Pontudpizza(){
    this->nafn = "";
    this->verd = 0;
    this->alegg = alegg;
    this->status = "1"; //1 = unbaked, 2 = in oven, 3 = ready
}

Pontudpizza::Pontudpizza(string nafn, int verd, vector<string> alegg, string status){
    this->nafn = nafn;
    this->verd = verd;
    this->alegg = alegg;
    this->status = status;
}

string Pontudpizza::getNafn(){
    return nafn;
}

int Pontudpizza::getVerd(){
    return verd;
}

vector<string> Pontudpizza::getAlegg(){
    return alegg;
}

string Pontudpizza::getStatus(){
    return status;
}

void Pontudpizza::setName(string nafn)
{
    this->nafn = nafn;
}

void Pontudpizza::setVerd(int verd)
{
    this->verd = verd;
}

void Pontudpizza::setAlegg(vector<string> alegg)
{
    this->alegg = alegg;
}

void Pontudpizza::setStatus(string status)
{
    this->status = status;
}

ofstream& operator << (ofstream& out, const Pontudpizza& pontudpizza){
    out << endl << pontudpizza.nafn << endl;
    out << pontudpizza.verd << endl;

    for (int i = 0; i < pontudpizza.alegg.size(); i++) {
        out << pontudpizza.alegg[i] << " ";
    }

    out << pontudpizza.status;

    return out;
}

ifstream& operator >> (ifstream& in, Pontudpizza& pontudpizza){
    in >> pontudpizza.nafn;
    in >> pontudpizza.verd;

    /*
    for(int i = 0; i < pizza.alegg.size(); i++){
        Alegg a;
        in >> a;
        pizza.alegg.push_back(a);
    }
    */

    return in;
}
