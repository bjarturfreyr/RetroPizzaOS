#include "BakersMenuController.h"

BakersMenuController::BakersMenuController(Database db)
{
    init();
}

void BakersMenuController::init()
{
    string afhendingarstadur;
    char input;

    while(input != 'h')
    {
        clearScreen();
        displayBakersWelcome(afhendingarstadur);
        displayBakersNavigation();

        sign();
        cin >> input;

        if(input == 'a')
        {
            int val;
            cout << "Veldu afhendingarstad: "<< endl;
            //setja í fall
            vector<string> allafhendingarstadir = db.getAllAfhendingarstadirOnDatabase();
            displayAllAfhendingarstadir(allafhendingarstadir);
            sign();
            cin >> val;
            afhendingarstadur = db.getAfhendingarstadurByID(val);
        }

        else if (input == 'b')
        {
            displayUnbakedPizzas(db.getAllUnbakedPizzasOnLocation(afhendingarstadur));
            pressAnyKeyToContinue();
        }

        else if (input == 's')
        {
            int id;
            cout << "Vinsamlegast skrifadu inn ID a pizzuni." << endl;
            cin >> id;
            displaySpecificUnbakedPizzaByID(db.getAllUnbakedPizzasOnLocation(afhendingarstadur), id);
            pressAnyKeyToContinue();
        }

        else if (input == 'n')
        {
            int val;
            do{
                cout << "Smelltu á 1 thegar pizzan er i vinnslu, smelltu a 2 thegar pizzan er tilbuin." << endl;
                sign();
                cin >> val;
                if(val == 1){
                    cout << "Pizzan er nu i vinnslu!" << endl;

                }
                if(val == 2){
                    cout << "Pizzan er nu tilbuin!" << endl;
                }
                //tilbúnar pizzur þurfa að fara í textaskrá
                else{
                    cout << "Rangt inntak!" << endl;
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
}
