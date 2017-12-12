#include "AfhendingMenuController.h"

void AfhendingMenuController::mainmenu(){

    char afhendingarstadur;
    cout << "Hvar ma bjoda ther ad saekja pizzuna? " << endl;
    cout << "K = Kopavogur" << endl;
    cout << "H = Hafnarfjordur" << endl;
    cout << "V = Vesturbær" << endl;
    cout << "G = Grafarvogur" << endl;
    cout << "S = Selfoss" << endl;
}

void AfhendingMenuController::validateafhendingarstadur(char afhendingarstadur){


    if (afhendingarstadur == 'k'){
        database.addPizzaToKopavogur(pizza);
    }
    else if (afhendingarstadur == 'h'){
        database.hfjorder(pizza);
    }
    else if (afhendingarstadur == 'v'){
        database.vsborder(pizza);
    }
    else if (afhendingarstadur == 'g'){
        database.grafarvogurorder(pizza);
    }
    else if (afhendingarstadur == 's'){
        database.selfossorder(pizza);
    }
    else{
        cout << "Rangt inntak" << endl;
    }
}
