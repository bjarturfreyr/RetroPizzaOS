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
            //Velja afhendingastağ
        }

        else if(input == 'p'){
            //Fá upp pantanir á afhendingarstağ
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
            MainMenuController mmc;
        }

        else {
            //try again
        }
    }
}
