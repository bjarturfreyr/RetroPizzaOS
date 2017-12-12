#include "DeliveryMenuController.h"

DeliveryMenuController::DeliveryMenuController()
{
    init();
}

void DeliveryMenuController::init(){
    char input;

    while(input != 'h'){
        clearScreen();
        displayDeliveryWelcome();
        displayDeliveryNavigation();

        cin >> input;

        if(input == 'a'){
            //Velja afhendingasta�
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
            MainMenuController mmc;
        }

        else {
            //try again
        }
    }
}
