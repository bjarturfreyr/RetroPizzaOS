#include "AdminMenuController.h"

AdminMenuController::AdminMenuController(Database db)
{
    init();
    this->db = db;
}

void AdminMenuController::init()
{
    char input;

    while(input != 'h')
    {
        clearScreen();
        displayAdminWelcome();
        displayAdminNavigation();

        sign();
        cin >> input;


        if(input == 's')
        {
            createPizzaToMenu();
        }
        else if(input == 'b')
        {
            createPizzaSize();
        }
        else if (input == 'a')
        {
            createAlegg();
        }
        else if (input == 'v')
        {
            createMedlaeti();
        }
        else if (input == 'n')
        {
            createAfhendingarstadur();
        }
        else if(input == 'l')
        {
            clearScreen();
            vector<Pizza> listOfPizzasOnMenu = this->db.getListOfPizzasOnMenu();
            displayMenu(listOfPizzasOnMenu);
            pressAnyKeyToContinue();
        }

        else if(input == 't')
        {
            MainMenuController mmc(this->db);
        }

        else
        {
            //bye
        }
    }
    exit(0);
}

void AdminMenuController::createMedlaeti() {
    cout << "Nafn: ";
    string name;
    cin >> name;
    cout << "Verd: ";
    int price;
    cin >> price;
    db.addMedlaeti(name, price);

    cout << "Thu baettir vid medlaeti med nafninu " << name << " og verdinu " << price << endl;
    pressAnyKeyToContinue();
}

void AdminMenuController::createAfhendingarstadur()
{
    cout << "Nafn: ";
    string name;
    cin >> name;
    db.addAfhendingarstadir(name);

    cout << "Thu baettir vid afhendingarstad med nafninu " << name << endl;
    pressAnyKeyToContinue();
}

void AdminMenuController::createPizzaSize()
{
    cout << "Nafn: ";
    string name;
    cin >> name;
    cout << "Verd: ";
    int price;
    cin >> price;
    db.addPizzaSize(name, price);

    cout << "Thu baettir vid pizzu med nafninu " << name << " og verdinu " << price << endl;
    pressAnyKeyToContinue();
}

void AdminMenuController::createAlegg()
{
    cout << "Nafn: ";
    string name;
    cin >> name;
    db.addAlegg(name);

    cout << "Thu baettir vid alegg med nafninu " << name << endl;
    pressAnyKeyToContinue();
}

void AdminMenuController::createPizzaToMenu()
{
    int totalpizzaprice = 0;

    cout << "Name: ";
    string name;
    cin >> name;
    cout << endl;


    vector<string>  allPizzaSizes = db.getAllPizzaSizesOnDatabase();
    displayAllPizzaSizes(allPizzaSizes);
    cout << "Size: ";
    int mySize;
    cin >> mySize;
    cout << endl;


    vector<string> allToppings = db.getAllToppingsOnDatabase();
    displayAllToppings(allToppings);
    cout << "Hversu morg alegg ma bjoda ther: ";
    int toppingcount;
    cin >> toppingcount;


    vector <string> myAlegg;
    int aleggChoice;


    for (int i = 0; i < toppingcount; i++){
            cout << "Alegg " << i+1 << ": ";
            cin >> aleggChoice;
            string alegg = db.getAleggByID(aleggChoice);
            cout << "Thu valdir " << alegg << endl;
            myAlegg.push_back(alegg);
    }

    int sizeprice = db.getPizzaPriceBySizeID(mySize);
    totalpizzaprice = sizeprice + ((toppingcount * 50) * (sizeprice/500));

    cout << "Pizzan kostar: " << totalpizzaprice;

    Pizza pizza;

    pizza.setName(name);
    pizza.setVerd(totalpizzaprice);
    pizza.setAlegg(myAlegg);

    db.addPizzaToMenu(pizza);

    pressAnyKeyToContinue();
}

void AdminMenuController::addaleggtomenu(int toppingcount){
    vector <string> listmyalegg;
    string alegg;
    for (int i = 0; i < toppingcount; i++){
        cin >> alegg;
        listmyalegg.push_back(alegg);
    }
    for(unsigned int i = 0; i < listmyalegg.size(); i++){
        cout << listmyalegg[i] << " ";
    }
}
