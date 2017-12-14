#include "SalesMenuController.h"

SalesMenuController::SalesMenuController()
{
    init();
}

void SalesMenuController::init()
{
    char selection;
    vector<Pizza> pizzuripontun;
    vector<Medlaeti> medlaetiipontun;
    string athugasemdapontun;
    int afhendingarstadurapontun;
    bool sentapontun;

    while(selection != 'h'){
        clearScreen();
        displaySalesWelcome();
        displaySalesNavigation();

        sign();
        cin >> selection;

        if (selection == 's') {
                char whatyouwant;
                do{
                    clearScreen();
                    displaySalesWhatYouWannaDo();
                    sign();
                    cin >> whatyouwant;
                    if(whatyouwant == 'm'){
                        clearScreen();
                        vector<Pizza> listOfPizzasOnMenu = this->db.getListOfPizzasOnMenu();
                        displayMenu(listOfPizzasOnMenu);
                        pressAnyKeyToContinue();
                    }
                    else if(whatyouwant == 'b'){

                        pizzuripontun.push_back(createPizzaForUser());
                    }

                    else if(whatyouwant == 'v'){
                        int whatmedlaeti;
                        cout << "Vinsamlegast veldu medlaeti." << endl;
                        sign();
                        cin >> whatmedlaeti;
                        medlaetiipontun.push_back(addMedlaetiForUserFromMenu(whatmedlaeti));
                    }

                    else if(whatyouwant == 'n'){
                        int whatpizza;
                        cout << "Vinsamlegast veldu pizzu." << endl;
                        sign();
                        cin >> whatpizza;
                        pizzuripontun.push_back(addPizzaForUserFromMenu(whatpizza));
                    }

                    else if (whatyouwant == 'a'){
                        clearScreen();
                        vector<Medlaeti> listOfMedlaetiOnMenu = this->db.getAllMedlaetiOnDatabase();
                        displayMedlaeti(listOfMedlaetiOnMenu);
                        pressAnyKeyToContinue();
                    }

                    else if (whatyouwant == 'k'){
                        //bye
                    }

                    else{
                        cout << "Rangt inntak! Veldu aftur: " << endl;
                    }

                }while(whatyouwant != 'k');

            sentapontun = homeorget();
            afhendingarstadurapontun = veljaAfhendingarstad();
            athugasemdapontun = addAthugasemd();
            db.addOrderToSpecificPlace(pizzuripontun,medlaetiipontun,athugasemdapontun,afhendingarstadurapontun,sentapontun,false);
        }

        else if (selection == 't') {

            MainMenuController mmc(this->db);
        }


        else {

        }
    }
    exit(0);
}

int SalesMenuController::veljaAfhendingarstad(){
    int choice;
    cout << "Vinsamlegast veldu afhendingarstad." << endl;
    vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
    displayAllAfhendingarstadir(allafhendingarstadir);
    sign();
    cin >> choice;
    return choice;
}

bool SalesMenuController::homeorget(){
    int saekjasott;
    bool sent;
    displayHomeOrGet();
    sign();
    cin >> saekjasott;

    if(saekjasott == 1){
        cout << "Komdu ad na i pizzuna!" << endl;
        sent = false;
    }

    else{
        cout << "Pizzan verdur send heim eftir 10 minutur! " << endl;
        sent = true;
    }

    return sent;
}

string SalesMenuController::addAthugasemd()
{
    string athugasemd;
    cout << "Vinsamlegast skrifadu inn athugasemd ef thu hefur serstakar oskir." << endl;
    cin >> athugasemd;
    return athugasemd;
}

void SalesMenuController::displayAllAfhendingarstadir(vector<string>listOfAfhendingarstadir){
    for (int i = 0; i < listOfAfhendingarstadir.size(); i++){
    cout << i+1 << ": " << listOfAfhendingarstadir[i] << endl;
    }
}

Medlaeti SalesMenuController::addMedlaetiForUserFromMenu(int choice)
{
    choice -= 1;
    Medlaeti mymedlaeti;
    vector<Medlaeti> menu = db.getAllMedlaetiOnDatabase();
    mymedlaeti.setName(menu[choice].getName());
    mymedlaeti.setPrice(menu[choice].getPrice());
    return mymedlaeti;
}

Pizza SalesMenuController::addPizzaForUserFromMenu(int choice)
{
    choice -= 1;
    Pizza mypizza;
    vector<Pizza> menu = db.getListOfPizzasOnMenu();
    mypizza.setName(menu[choice].getNafn());
    mypizza.setVerd(menu[choice].getVerd());
    mypizza.setAlegg(menu[choice].getAlegg());
    return mypizza;
}

Pizza SalesMenuController::createPizzaForUser()
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

    pressAnyKeyToContinue();

    return pizza;
}
