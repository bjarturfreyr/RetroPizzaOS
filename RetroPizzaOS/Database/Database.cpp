#include "Database.h"

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

void Database::addPizza(string nafn, int aleggID) {
    ofstream myfile;
    myfile.open ("menu.txt", ios::app);
    myfile << endl << nafn << endl << aleggID;
    myfile.close();
}

void Database::addAlegg(string nafn, int verd) {
    int aleggID = 5;//Einhvernveginn finna ID úr file.
    ofstream myfile;
    myfile.open ("alegg.txt", ios::app);
    myfile << nafn << endl << verd << endl << aleggID;
    myfile.close();
}

string Database::listAfhendingarstadir() {
    string listinn;
    string line;
    ifstream myfile ("afhendingarstadir.txt");
    if (myfile.is_open())
    {
        while (getline (myfile,line))
        {
            listinn = listinn + line + "\n";
        }
        myfile.close();
    }

    return listinn;
}


