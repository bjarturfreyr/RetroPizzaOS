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

vector<Pizza> Database::getListOfPizzasOnMenu(){
    vector<Pizza> listOfPizzasOnMenu;
    ifstream fin;
    fin.open("menu.txt");
    if (fin.is_open()){
        Pizza pizza;
        while (fin >> pizza){
            listOfPizzasOnMenu.push_back(pizza);
        }
        fin.close();
    }
    else {
        cout << "Unable to read from file! " << endl;
    }
    return listOfPizzasOnMenu;
}

/*
string Database::listPizzas() {

    string pizzalist;
    string line;
    ifstream myfile ("menu.txt");
    if (myfile.is_open())
    {
        while (getline (myfile,line))
        {
            pizzalist = pizzalist + line + "\n";
        }
        myfile.close();
    }

    return pizzalist;
}
*/

/*void Database::addPizza(string nafn, int aleggID) {
    ofstream myfile;
    myfile.open ("menu.txt", ios::app);
    myfile << endl << nafn << endl << aleggID;
    myfile.close();
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

vector<string> Database::getAllToppingsOnDatabase()
{
    vector<string> myList;
    ifstream myfile ("alegg.txt");
    if (myfile.is_open())
    {
        Alegg alegg;
        while (myfile >> alegg) {
            myList.push_back(alegg.getName());
        }
        myfile.close();
    }
    return myList;
}
/*
void Database::getaleggformypizza(int myChoice){
    for (int i = 0; i < aleggs.size(); i++){
        if (aleggs[i].getName() == myChoice){
            cout << aleggs[i] << endl;
        }
    }
}
*/


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
