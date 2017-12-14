#include "Database.h"
Database::Database(){
}


void Database::addPizzaToMenu(const Pizza& pizza) {
    ofstream fout;
    fout.open("menu.txt", ios::app);
    if(fout.is_open()){
      fout << pizza;
        fout.close();
    }
}

/*vector<Pizza> Database::getListOfPizzasOnMenu(){
    vector<string>;
    string mymenu;
    ifstream myfile("menu.txt");
    if (myfile.is_open()){
       while(getline(myfile, mymenu)){
        myList.push_back(mymenu);
       }
    myfile.close();
    }
    else {
        cout << "Gat ekki lesid skra! " << endl;
    }
    return myList;
}

*/


vector<string> Database::getAllAfhendingarstadirOnDatabase() {
    vector<string> myList;

    string myAfhendingarstadur;

    ifstream myfile ("afhendingarstadir.txt");
    if (myfile.is_open())
    {
        while (getline (myfile, myAfhendingarstadur))
        {
            myList.push_back(myAfhendingarstadur);
        }
        myfile.close();
    }

    return myList;
}

void Database::addSize(string staerd) {
    ofstream myfile;
    myfile.open ("staerdir.txt", ios::app);
    myfile << endl << staerd;
    myfile.close();
}

void Database::addPizzaToUnbakedListInStoreLocation(Pizza pizza, string storeLocation)
{
    ofstream fout;
    string txt = ".txt";
    storeLocation = storeLocation + txt;
    fout.open(storeLocation.c_str(), ios::app);
    if (fout.is_open()){
        fout << pizza;
        fout.close();
    }
}

vector<string> Database::getAllPizzaSizesOnDatabase()
{
    vector<string> myList;

    string mySize;


    ifstream myfile ("staerdir.txt");
    if (myfile.is_open())
    {
        int i = 0;
        while (getline (myfile, mySize))
        {
            if (i % 2 == 0) {
                myList.push_back(mySize);
            }
            i++;
        }
        myfile.close();
    }

    return myList;
}

/*
string Database::getPizzaSizeByID(int id) {
    string mySize;
    string line;
    ifstream myfile ("staerdir.txt");
    if (myfile.is_open())
    {
        int num2 = 0;
        for (int i = 0; i < mySize; i++) {
            num2 += 2;
        }
        for (int i = 0; i <= num2; i++) {
            getline (myfile,line);
            if (i == num2) {
                mySize = getline(myfile, line);
            }
        }

        myfile.close();
    }

    return mySize;
}
*/

vector<string> Database::getAllToppingsOnDatabase()
{
    vector<string> myList;
    string myTopping;
    ifstream myfile ("alegg.txt");
    if (myfile.is_open())
    {
        while (getline (myfile, myTopping)) {
            myList.push_back(myTopping);
        }
        myfile.close();
    }
    return myList;
}


int Database::getPizzaPriceBySizeID(int mySize){
    int verd = 0;
    string line;
    ifstream myfile ("staerdir.txt");
    if (myfile.is_open())
    {
        int num2 = 1;
        for (int i = 1; i < mySize; i++) {
            num2 += 2;
        }
        for (int i = 0; i <= num2; i++) {
            getline (myfile,line);
            if (i == num2) {
                verd = atoi(line.c_str());
            }
        }

        myfile.close();
    }

    return verd;
}

string Database::getAleggByID(int id){
    id = id - 1;
    string myTopping;
    string line;
    ifstream myfile ("alegg.txt");
    if (myfile.is_open())
    {
        int i = 0;
        while (getline (myfile, line)) {
            if (i == id) {
                myTopping = line;
            }
            i++;
        }
        myfile.close();
    }
    return myTopping;
}

/*
vector<Alegg> Database::getAleggByID(int myID){
    Alegg alegg;

    ifstream fin;
    fin.open("alegg.txt");
    if (fin.is_open()){
        while (fin >> alegg){
                aleggs.push_back(alegg);

        }
        fin.close();
    }
    for (unsigned int i = 0; i < myID; i++){
        if(i == myID){
            return aleggs;
        }
    }
}
*/



void Database::addPizzaSize(string name, int price) {
    ofstream fout;
    fout.open("staerdir.txt", ios::app);
    if (fout.is_open()){
        fout << "\n" << name << "\n" << price;
        fout.close();
    }
}

void Database::addAlegg(string name) {
    ofstream fout;
    fout.open("alegg.txt", ios::app);
    if (fout.is_open()){
        fout << "\n" << name;
        fout.close();
    }
}

void Database::addAfhendingarstadir(string name) {
    ofstream fout;
    fout.open("afhendingarstadir.txt", ios::app);
    if (fout.is_open()){
        fout << "\n" << name;
        fout.close();
    }
}

void Database::addMedlaeti(string name, int price) {
    ofstream fout;
    fout.open("medlaeti.txt", ios::app);
    if (fout.is_open()){
        fout << "\n" << name << "\n" << price;
        fout.close();
    }
}
