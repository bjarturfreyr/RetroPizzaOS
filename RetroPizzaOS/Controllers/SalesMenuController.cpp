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

        cin >> selection;




        if (selection == 's') {
            char answer;
            homeorget();
            do{
                displaySalesWhatYouWannaDo();
                char whatyouwant;
                cin >> whatyouwant;

                if(whatyouwant == 'm'){
                    ///MATSEDILLINN
                }
                else if(whatyouwant == 'b'){

                    createPizzaForUser();
                    cout << endl;
                    cout << "Ma bjoda der ad baeta vid pontunina?" << endl;
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
    cout << "Ma bjoda ther ad saekja = 1 eda fa sent heim = 2?" << endl;
    cout << "Veldu numer: ";
    cin >> saekjasott;
    if(saekjasott == 1){
            cout << "Veldu afhendingarstad: " << endl;
    vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
    displayAllAfhendingarstadir(allafhendingarstadir);
    cout << "Afhendingarstadur: ";
    int get;
    cin >> get;
    cout << "Thu hefur valid stadinn " << endl;
    }
    else{
        cout << "Pizzan verður send heim eftir 10minotur " << endl;
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
}
