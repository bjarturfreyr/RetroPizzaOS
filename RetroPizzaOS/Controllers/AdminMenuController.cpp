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
            displayAdminPizzaList(listOfPizzasOnMenu);
            getch(); //Press any key to continue..
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
    getch();
}

void AdminMenuController::createAfhendingarstadur()
{
    cout << "Nafn: ";
    string name;
    cin >> name;
    db.addAfhendingarstadir(name);

    cout << "Thu baettir vid afhendingarstad med nafninu " << name << endl;
    getch();
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
    getch();
}

void AdminMenuController::createAlegg()
{
    cout << "Nafn: ";
    string name;
    cin >> name;
    db.addAlegg(name);

    cout << "Thu baettir vid alegg med nafninu " << name << endl;
    getch();
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
            cin >> aleggChoice;
            cout << "Thu valdir " << db.getAleggByID(aleggChoice) << endl;
    }

    int sizeprice = db.getPizzaPriceBySizeID(mySize);
    totalpizzaprice = sizeprice + ((toppingcount * 50) * (sizeprice/500));

    cout << "Pizzan kostar: " << totalpizzaprice;

    getch();

    /*
    vector<Alegg> alegg = this->db.getAllToppingsOnDatabase();
    cout << db.displayToppingList();


    cout << "Hversu morg alegg ma bjoda ther: ";
    int toppingcount;
    cin >> toppingcount;
    cout << endl;

    vector<Alegg> myAlegg;

    for(int i = 0; i < toppingcount; i++)
    {
        cout << "Hvada alegg langar thig i: ";
        int myCoice;
        cin >> myCoice;
        cout << endl;
        myAlegg.push_back(alegg[i]);
        price += 50;
    }

*/

//    Pizza pizza(0, name,price, myAlegg);
   // displayAddedPizza(pizza);


    //this->db.addPizzaToMenu(pizza);
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



