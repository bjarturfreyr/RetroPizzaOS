#include "BakersMenuController.h"

BakersMenuController::BakersMenuController(Database db)
{
    init();
}

void BakersMenuController::init()
{
    char input;

    while(input != 'h')
    {
        clearScreen();
        displayBakersWelcome();
        displayBakersNavigation();

        cin >> input;

        if(input == 'a')
        {
            //velja afhendingarstad
        }

        else if(input == 'b')
        {
            //fá upp lista af pontuğum pizzum a şessum stağ
        }

        else if (input == 's')
        {
            //fá upp tiltekna pantağa pizzu
        }

        else if (input == 'n')
        {
            //merkja pizzu greidda eda afhenta
        }

        else if(input == 't')
        {
            MainMenuController mmc(this->db);
        }

        else
        {
            //bye
        }
    }
    exit(0);

    //GAMALL KOĞI
    /*
    char inntak;
    char afhendingarstadur;
    int numerpizzu;

    displayBakersMenu();

    cin >> afhendingarstadur;
    displayBakersNavigation(afhendingarstadur);

    bakersGetPizza();
    cin >> numerpizzu;

    do{
        ofnMenu();

        cin >>inntak;
        if (inntak == 'y' || inntak == 'Y'){
            ofnReddy();
        }
        else if(inntak == 'n' || inntak =='N'){
            do{
                ofnNuna();
                cin >> inntak;
            }while(inntak == 'n' || inntak == 'N');
        }
        else{
            villuskilabod();
        }
    }while(inntak != 'n' && inntak != 'N' && inntak != 'y' && inntak != 'Y');


    do{
        pokkunMenu();
        cin >> inntak;
            if (inntak == 'y' || inntak == 'Y'){
            pokkunReddy();
        }
        else if(inntak == 'n' || inntak =='N'){
            do{
                pokkunNuna();
                cin >> inntak;
            }while(inntak == 'n' || inntak == 'N');
        }
        else{
            villuskilabod();
        }
    }while(inntak != 'n' && inntak != 'N' && inntak != 'y' && inntak != 'Y');

    do{
        tilbuinMenu();
        cin >> inntak;
            if (inntak == 'y' || inntak == 'Y'){
            tilbuinReddy();
        }
        else if(inntak == 'n' || inntak =='N'){
            do{
                tilbuinNuna();
                cin >> inntak;
            }while(inntak == 'n' || inntak == 'N');
        }
        else{
            villuskilabod();
        }
    }while(inntak != 'n' && inntak != 'N' && inntak != 'y' && inntak != 'Y');

    displayBakersEnding();
    */
}
