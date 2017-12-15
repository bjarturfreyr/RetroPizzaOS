#include "DeliveryMenuController.h"

string afhendingarstadur;

DeliveryMenuController::DeliveryMenuController(Database db)
{
    init();
    this->db = db;
}

void DeliveryMenuController::init(){
    char input;
    string afhendingarstadur;
    int afhendingarstadurID;

    while(input != 'h'){
        clearScreen();
        displayDeliveryWelcome1(afhendingarstadur);
        displayDeliveryNavigation1();

        sign();
        cin >> input;

        if(input == 'a'){
            int val;
            cout << "Veldu afhendingarstad: "<< endl;
            //setja í fall
            vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
            displayAllAfhendingarstadir(allafhendingarstadir);
            sign();
            cin >> val;
            afhendingarstadur = db.getAfhendingarstadurByID(val);
            afhendingarstadurID = val;
        }
        /*
        else if(input == 'p'){

            vector<Pantanir> pantaniraafhendingastad = db.getAllPantanirByLocationID(afhendingarstadurID);
            displayAllPantanir(pantaniraafhendingastad);

        }
        */
        else if(input == 'b') {
            //fá lista af pizzum
            displayAfhendingPizzas(db.getAllUnbakedPizzasOnLocation(afhendingarstadur));
            pressAnyKeyToContinue();
        }

        else if (input == 'm')
        {
            int val1;
            string val2;
            cout << "Vinsamlegast skrifadu inn ID a pizzuni." << endl;
            sign();
            cin >> val1;
            displaySpecificUnbakedPizzaByID(db.getAllUnbakedPizzasOnLocation(afhendingarstadur), val1);

            displayAfhendaPizzaOptions();
            sign();
            cin >> val2;
            db.setUnbakedPizzaStatusByID(afhendingarstadurID,val1,val2);
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
