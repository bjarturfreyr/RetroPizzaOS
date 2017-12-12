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

        }
        else if (input == 'a')
        {

        }
        else if (input == 'v')
        {
            //í tölvu hjá Guðrún Heiða
        }
        else if (input == 'n')
        {
            // BÚA TIL AFHENDINGARSTAÐIR?
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
}

void AdminMenuController::createPizzaToMenu()
{

    cout << "Name: ";
    string name;
    cin >> name;
    cout << endl;
    cout << "Price: ";
         double price;
    vector<Alegg> alegg;
    // TODO: Implement getAllToppingsOnDatabase()
    // vector<Alegg> alegg = this->db.getAllToppingsOnDatabase();
    displayAdminToppinglist(alegg);


    cout << "How Many Toppings: ";
         int toppingcount;
    cin >> toppingcount;
    cout << endl;

    vector<Alegg> myAlegg;

    for(int i = 0; i < toppingcount; i++)
    {
        cout << "Which one do you want: ";
        int myCoice;
        cin >> myCoice;
        cout << endl;
        myAlegg.push_back(alegg[myCoice]);
    }

    Pizza pizza(0, name,price, myAlegg);
    displayAddedPizza(pizza);


    this->db.addPizzaToMenu(pizza);
}

