#include "BakersMenuController.h"

BakersMenuController::BakersMenuController(Database db)
{
    init();
}

void BakersMenuController::init()
{
    string afhendingarstadur;
    int afhendingarstadurID;
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
            afhendingarstadurID = val;
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
            sign();
            cin >> id;
            displaySpecificUnbakedPizzaByID(db.getAllUnbakedPizzasOnLocation(afhendingarstadur), id);
            pressAnyKeyToContinue();
        }

        else if (input == 'n')
        {
            int val1;
            string val2;
            cout << "Vinsamlegast skrifadu inn ID a pizzuni." << endl;
            sign();
            cin >> val1;
            displaySpecificUnbakedPizzaByID(db.getAllUnbakedPizzasOnLocation(afhendingarstadur), val1);

            displayBakePizzaOptions();
            sign();
            cin >> val2;
            db.setUnbakedPizzaStatusByID(afhendingarstadurID,val1,val2);
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
