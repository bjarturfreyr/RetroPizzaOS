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
    cout << "Vinsamlegast veldu afhendingarstad" << endl;
    cin >> afhendingarstadur;
    getch();
}

void DeliveryMenuController::init(){
    char input;

    while(input != 'h'){
        clearScreen();
        displayDeliveryWelcome1();
        displayDeliveryNavigation1();

        cin >> input;

        if(input == 'a'){
            veljaAfhendingarstad();
        }

        else if(input == 'p'){
            //Fá upp pantanir á afhendingarstað
        }

        else if(input == 'b') {
            //fá upp lista af tilbúnum pöntunum
        }

        else if (input == 'u') {
            //fá upp tiltekna pöntun
        }

        else if (input == 'm') {
            //merkja pontun greidda eda afhenta
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
