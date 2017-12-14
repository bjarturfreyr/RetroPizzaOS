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

        sign();
        cin >> input;

        if(input == 'a')
        {
            cout << "Veldu stadsetningu: "<< endl;
            //setja � fall
            vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
            displayAllAfhendingarstadir(allafhendingarstadir);
            cout << "Afhendingarstadur: ";
            int get;
            cin >> get;
        }

        else if(input == 'b')
        {
            //f� upp lista af pontu�um pizzum a �essum sta�
        }

        else if (input == 's')
        {
            //f� upp tiltekna panta�a pizzu
        }

        else if (input == 'n')
        {
            int val;
            do{
                cout << "Smelltu � 1 �egar pizzan er i vinnslu, smelltu a 2 �egar pizzan er tilbuin." << endl;
                sign();
                cin >> val;
                if(val == 1){
                    cout << "Pizzan er nu i vinnslu" << endl;

                }
                if(val == 2){
                    cout << "Pizzan er nu tilbuin" << endl;
                }
                else{
                    cout << "Rangt inntak" << endl;
                }
            }while(val != 1 && val != 2);
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

    //GAMALL KO�I
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
