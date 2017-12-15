#include "DeliveryMenuController.h"

string afhendingarstadur;

DeliveryMenuController::DeliveryMenuController(Database db)
{
    init();
    this->db = db;
}

void DeliveryMenuController::veljaAfhendingarstad(){
    vector<string> allAfhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
    displayAllAfhendingarstadir(allAfhendingarstadir);
    cout << "Vinsamlegast veldu afhendingarstad." << endl;
    sign();
    cin >> afhendingarstadur;
    pressAnyKeyToContinue();
}

void DeliveryMenuController::init(){
    char input;

    while(input != 'h'){
        clearScreen();
        displayDeliveryWelcome1();
        displayDeliveryNavigation1();

        sign();
        cin >> input;

        if(input == 'a'){
            veljaAfhendingarstad();
        }

        else if(input == 'p'){
            cout << "Her er listi med ollum pontudum pizzum: " << endl;
            //Fá upp pantanir á afhendingarstað listi frá sölumanni
            pressAnyKeyToContinue();
        }

        else if(input == 'b') {
            //fá upp lista af tilbúnum pöntunum frá bakara
            cout << "Hvada pizzu aetlar thu ad afhenda: " << endl;
            int pizzatilafhendingar;
            sign();
            cin >> pizzatilafhendingar;
            // þessi pizza eyðist af listanum
        }


        else if (input == 'm') {
            int val;
            do{
                cout << "Veldu 1 ef pizzan hefur verid greidd" << endl;
                cout  << "Veldu 2 ef pizzan hefur verid afhent" << endl;
                sign();
                cin >> val;

                if (val == 1){
                    cout << "Pizzan hefur verid greidd og er nu tilbuin til afhendingar!" << endl;
                }
                if (val == 2){
                    cout << "Pizzan hefur verid afhent!" << endl;
                }
                else {
                    cout << "Rangt inntak!" << endl;
                }
            }while(val != 1 && val != 2);
        }

        else if(input == 't'){
            MainMenuController mmc(this->db);
        }

        else {
            //try again
        }
    }
    exit(0);
}
