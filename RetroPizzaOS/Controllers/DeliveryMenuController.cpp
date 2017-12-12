#include "DeliveryMenuController.h"

string afhendingarstadur;

DeliveryMenuController::DeliveryMenuController(Database db)
{
    init();
    this->db = db;
}

void DeliveryMenuController::veljaAfhendingarstad(){
    cout << db.listAfhendingarstadir() << endl;
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
            //F� upp pantanir � afhendingarsta�
        }

        else if(input == 'b') {
            //f� upp lista af tilb�num p�ntunum
        }

        else if (input == 'u') {
            //f� upp tiltekna p�ntun
        }

        else if (input == 'm') {
            //merkja pontun greidda eda afhenta
        }

        else if(input == 't'){
            //MainMenuController mmc;
        }

        else {
            //try again
        }
    }
}