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
    Pizza pizza;
    vector<Pizza> myList;
    string mymenu;
    int verd;

    ifstream myfile("menu.txt");
    if (myfile.is_open()){
        int i = 0;
        while(getline(myfile, mymenu)){
            if (i == 0) {
                pizza.setName(mymenu);
            }

            else if (i == 1) {
                verd = atoi(mymenu.c_str());
                pizza.setVerd(verd);
            }

            else if (i == 2) {
                //https://stackoverflow.com/questions/5607589/right-way-to-split-an-stdstring-into-a-vectorstring
                stringstream ss(mymenu);
                istream_iterator<string> begin(ss);
                istream_iterator<string> end;
                vector<string> myalegg(begin, end);
                pizza.setAlegg(myalegg);

                myList.push_back(pizza);
                i = -1;
            }
            i++;
        }
        myfile.close();
    }

    else {
        cout << "Gat ekki lesid skra! " << endl;
    }

    return myList;
}


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

string Database::getAfhendingarstadurByID(int id) {
    id = id - 1;
    string line;
    string myAfhendingarstadur;

    ifstream myfile ("afhendingarstadir.txt");
    if (myfile.is_open())
    {
        int i = 0;
        while(getline(myfile, line))
        {
            if (id == i)
            {
                myAfhendingarstadur = line;
            }
            i++;
        }
        myfile.close();
    }

    return myAfhendingarstadur;
}

void Database::addSize(string staerd) {
    ofstream myfile;
    myfile.open ("staerdir.txt", ios::app);
    myfile << endl << staerd;
    myfile.close();
}

/*
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
*/

void Database::setUnbakedPizzaStatusByID(int afhendingarstadur, int id, string setstatus)
{
    string storelocation = getAfhendingarstadurByID(afhendingarstadur) + "pizzur.txt";
    string line;

    //Lesa allt skjalið í vektor
    ifstream myfile;
    myfile.open(storelocation.c_str());
    vector<string> allfilecontents;
    int i = 1;
    while(getline(myfile, line))
    {
        //breyta status á pizzu númer "id", status er alltaf í fjórðu línu.
        if (i == id*4) {
            line = setstatus;
        }

        allfilecontents.push_back(line);
        i++;
    }
    myfile.close();

    //skrifa nýjann file sem temp með nýjum status
    ofstream temp;
    temp.open("temp.txt");
    for(int i = 0; i < allfilecontents.size(); i++)
    {
        temp << allfilecontents[i] << "\n";
    }
    temp.close();

    //Delete gamla file og rename temp.
    remove(storelocation.c_str());
    rename("temp.txt", storelocation.c_str());
}

void Database::addOrderToSpecificPlace(vector<Pizza> pizzas, vector<Medlaeti> medlatis, string athugasemd, int afhendingarstadurinn, bool sent, bool greitt)
{
    string storelocation = getAfhendingarstadurByID(afhendingarstadurinn) + ".txt";
    ofstream myfile;
    myfile.open(storelocation.c_str(), ios::app);

    //lesa inn pizzur
    for(int i = 0; i < pizzas.size(); i++)
    {
        myfile << pizzas[i];
    }

    //lesa inn medlaeti
    for(int i = 0; i < medlatis.size(); i++)
    {
        myfile << "\n" << medlatis[i].getName();
        myfile << "\n" << medlatis[i].getPrice();
    }

    //lesa inn sent eða sótt
    if (sent == false) {
        myfile << "\n" << "Sótt";
    }
    else {
        myfile << "\n" << "Sent";
    }

    //lesa inn athugasemd
    myfile << "\n" << athugasemd;

    //greitt eða ekki
    myfile << "\n" << greitt;

    //delimiter
    myfile << "\n" << ":";

    myfile.close();

    //setja inn obakadar pizzur
    storelocation = getAfhendingarstadurByID(afhendingarstadurinn) + "pizzur.txt";
    myfile.open(storelocation.c_str(),ios::app);
    for(int i = 0; i < pizzas.size(); i++)
    {
        myfile << pizzas[i];
    }
    myfile << "\n1";
    myfile.close();
}

vector<Pontudpizza> Database::getAllUnbakedPizzasOnLocation(string location)
{
    location = location + "pizzur.txt";
    Pontudpizza pizza;
    vector<Pontudpizza> myList;
    string line;

    string pizzaname;
    int pizzaprice;

    ifstream myfile (location.c_str());

    if (myfile.is_open()){
    int i = 0;
        while(getline(myfile, line)){
            if (i == 0) {
                pizza.setName(line);
            }

            else if (i == 1) {
                pizzaprice = atoi(line.c_str());
                pizza.setVerd(pizzaprice);
            }

            else if (i == 2) {
                //https://stackoverflow.com/questions/5607589/right-way-to-split-an-stdstring-into-a-vectorstring
                stringstream ss(line);
                istream_iterator<string> begin(ss);
                istream_iterator<string> end;
                vector<string> myalegg(begin, end);
                pizza.setAlegg(myalegg);
            }

            else if (i == 3) {
                pizza.setStatus(line);
                myList.push_back(pizza);
                i = -1;
            }
            i++;
        }
    }
    myfile.close();
    return myList;
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

    fout.open((name + ".txt").c_str());
    fout.close();
}

void Database::addMedlaeti(string name, int price) {
    ofstream fout;
    fout.open("medlaeti.txt", ios::app);
    if (fout.is_open()){
        fout << "\n" << name << "\n" << price;
        fout.close();
    }
}

vector<Medlaeti> Database::getAllMedlaetiOnDatabase(){
    Medlaeti medlaeti;
    vector<Medlaeti> myList;

    string mymenu;
    int verd;

    ifstream myfile("medlaeti.txt");
    if (myfile.is_open()){
        int i = 0;
        while(getline(myfile, mymenu)){
            if (i == 0) {
                medlaeti.setName(mymenu);
            }

            else if (i == 1) {
                verd = atoi(mymenu.c_str());
                medlaeti.setPrice(verd);

                myList.push_back(medlaeti);
                i = -1;
            }
            i++;
        }
        myfile.close();
    }

    else {
        cout << "Gat ekki lesid skra! " << endl;
    }

    return myList;

}
