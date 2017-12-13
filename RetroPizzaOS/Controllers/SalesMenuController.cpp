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
           // homeorget();
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

/*void SalesMenuController::homeorget(){
{
    int saekjasott;
    cout << "Ma bjoda ther ad saekja = 1 eda fa sent heim = 2? "
    cin >> saekjasott;
    if(saekjasott == 1){
            cout << "Veldu afhendingarstad: " << endl;
    //ná í txt file
    //velja úr txt file

    }
    else{
        cout << "Thu getur sott pontunina eftir 10minotur " << endl;
    }
}
*/
void SalesMenuController::createPizzaForUser()
{
        int price = 0;
        vector<string>  allPizzaSizes = db.getAllPizzaSizesOnDatabase();
        displayAllPizzaSizes(allPizzaSizes);
        cout << "Size: ";
        int mySize;
        cin >> mySize;
        cout << endl;

        //vector<string> allToppings = db.getAllToppingsOnDatabase();
        vector<string> allToppings = db.getAllPizzaSizesOnDatabase();
        displayAllToppings(allToppings);
        cout << "Hversu morg alegg ma bjoda ther: ";
        int toppingcount;
        cin >> toppingcount;

        vector <string> listmyalegg;
        string alegg;
        cout << "Hvada alegg ma bjoda der?" << endl;
        for (int i = 0; i < toppingcount; i++){
                cin >> alegg;
                for(int i = 0; i < listmyalegg.size(); i++){
                    listmyalegg.push_back(alegg);
                }
        }
        for (int i = 0; i < listmyalegg.size(); i++){
            //cout << listmyalegg[i] << endl;
        }

        price += db.getPizzaPriceBySizeID(mySize);

        cout << "Pizzan kostar: " << price;

        getch();
}
