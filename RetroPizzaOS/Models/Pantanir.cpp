#include "Pantanir.h"

Pantanir::Pantanir(){
    this->pizzur = pizzur;
    this->medlaeti = medlaeti;
    this->athugasemd = "";
    this->afhendingarstadur = 0;
    this->sent = false;
    this->greitt = false;
}

Pantanir::Pantanir(vector<Pizza> pizzur, vector<Medlaeti> medlaeti, string athugasemd, int afhendingarstadur, bool sent, bool greitt){
    this->pizzur = pizzur;
    this->medlaeti = medlaeti;
    this->athugasemd = athugasemd;
    this->afhendingarstadur = afhendingarstadur;
    this->sent = sent;
    this->greitt = greitt;
}

vector<Pizza> Pantanir::getPizzur(){
    return pizzur;
}

vector<Medlaeti> Pantanir::getMedlaeti(){
    return medlaeti;
}

string Pantanir::getAthugasemd(){
    return athugasemd;
}

int Pantanir::getAfhendingarstadur(){
    return afhendingarstadur;
}

bool Pantanir::getSent(){
    return sent;
}

bool Pantanir::getGreitt(){
    return greitt;
}

void Pantanir::setPizzur(vector<Pizza> pizzur)
{
    this->pizzur = pizzur;
}

void Pantanir::setMedlaeti(vector<Medlaeti> medlaeti)
{
    this->medlaeti = medlaeti;
}

void Pantanir::setAthugasemd(string athugasemd)
{
    this->athugasemd = athugasemd;
}

void Pantanir::setAfhendingarstadur(int afhendingarstadur)
{
    this->afhendingarstadur = afhendingarstadur;
}

void Pantanir::setSent(bool sent)
{
    this->sent = sent;
}

void Pantanir::setGreitt(bool greitt)
{
    this->greitt = greitt;
}
