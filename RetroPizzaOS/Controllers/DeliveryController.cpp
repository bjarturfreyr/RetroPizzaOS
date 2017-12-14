#include "DeliveryController.h"

DeliveryController::DeliveryController()
{
    init();
}


void DeliveryController::init()
{
    char selection = '\0';

    while(selection != 'h' && selection != 't' && selection != 'a' && selection != 'b' && selection != 'c'){
        clearScreen();
        //displayDeliveryWelcome();
        //displayDeliveryNavigation();

        sign();
        cin >> selection;
    }

    if (selection == 'a') {
      //fa lista yfir pontunum fyrir dennan stad.
    }

    else if (selection == 'b') {
        //fa lista af tilbunum pontunum fyrir dennan stad
    }

    else if (selection == 'c') {
        //fa upp tiltekna pontun
    }
    else if (selection == 't') {

        //MainMenuController mmc(this->db);
    }

    else {
        //bye
    }


}
