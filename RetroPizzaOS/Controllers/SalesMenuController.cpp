#include "SalesMenuController.h"

SalesMenuController::SalesMenuController()
{
    init();
}

void SalesMenuController::init()
{
    char selection;


    while(selection != 'h'){
        clearScreen();
        displaySalesWelcome();
        displaySalesNavigation();

        sign();
        cin >> selection;




        if (selection == 's') {
            char answer;
            homeorget();
            do{
                displaySalesWhatYouWannaDo();
                char whatyouwant;
                sign();
                cin >> whatyouwant;

                if(whatyouwant == 'm'){
                    //db.getListOfPizzasOnMenu();
                    getch();
                    //openMenu();
                }
                else if(whatyouwant == 'b'){

                    createPizzaForUser();
                    cout << endl;
                    cout << "Ma bjoda der ad baeta vid pontunina? (j) = ja, (n) = nei" << endl;
                    cin >> answer;
                }
            }while(answer == 'j');
        }

        else if (selection == 'b') {
            //breyta pontun
        }

        else if (selection == 't') {

            MainMenuController mmc(this->db);
        }


        else {

        }
    }
    exit(0);
}

void SalesMenuController::homeorget(){

    int saekjasott;
    displayHomeOrGet();
    cout << "Ma bjoda ther ad saekja = 1 eda fa sent heim = 2?" << endl;
    cout << "Veldu numer: ";
    sign();
    cin >> saekjasott;
    if(saekjasott == 1){
    cout << "Veldu afhendingarstad: " << endl;
    vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
    displayAllAfhendingarstadir(allafhendingarstadir);
    cout << "Afhendingarstadur numer: ";
    int get;
    sign();
    cin >> get;
    cout << "Thu hefur valid stadinn " << endl;
    }
    else{
        cout << "Pizzan verdur send heim eftir 10 minutur! " << endl;
    }
}

void SalesMenuController::displayAllAfhendingarstadir(vector<string>listOfAfhendingarstadir){
    for (int i = 0; i < listOfAfhendingarstadir.size(); i++){
    cout << i+1 << ": " << listOfAfhendingarstadir[i] << endl;
    }
}


void SalesMenuController::createPizzaForUser()
{
    int totalpizzaprice = 0;
    vector<string>  allPizzaSizes = db.getAllPizzaSizesOnDatabase();
    displayAllPizzaSizes(allPizzaSizes);
    cout << "Size: ";
    int mySize;
    sign();
    cin >> mySize;
    cout << endl;

    vector<string> allToppings = db.getAllToppingsOnDatabase();
    displayAllToppings(allToppings);
    cout << "Hversu morg alegg ma bjoda ther: ";
    int toppingcount;
    sign();
    cin >> toppingcount;


    vector <string> myAlegg;
    int aleggChoice;


    for (int i = 0; i < toppingcount; i++){
        cout << "Alegg " << i+1 << ": ";
        sign();
        cin >> aleggChoice;
        cout << "Thu valdir " << db.getAleggByID(aleggChoice) << endl;
    }

    int sizeprice = db.getPizzaPriceBySizeID(mySize);
    totalpizzaprice = sizeprice + ((toppingcount * 50) * (sizeprice/500));

    cout << "Pizzan kostar: " << totalpizzaprice;

    getch();
}

/*
void SalesMenuController::openMenu(){
    cout  << "Hvada pizzu ma bjoda ther: ";
    int val;
    cin >> val;
    cout << endl;
    vector <Pizza> allPizzasOnMenu = db.getListOfPizzasOnMenu();
    displayAllPizzasOnMenu(allPizzasOnMenu);

}

void SalesMenuController::displayAllPizzasOnMenu(vector<Pizza>listOfPizzasOnMenu){
    for (int i = 0; i < listOfPizzasOnMenu.size(); i++){
//    cout << i+1 << ": " << listOfPizzasOnMenu[i] << endl;
    }
}
*/
