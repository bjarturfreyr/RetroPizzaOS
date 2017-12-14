#include "SalesMenuView.h"

void SalesMenuView::displaySalesWelcome()
{
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(11);
    cout << "solumann";
    setColor(15);
    cout << " felagi." << endl << endl;
}

void SalesMenuView::displaySalesNavigation()
{
    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad skra nyja pontun." << endl;

    cout << "Veldu '";
    setColor(10);
    cout << "t";
    setColor(15);
    cout << "' til ad fara til baka." << endl;

    cout << "Veldu '";
    setColor(13);
    cout << "h";
    setColor(15);
    cout << "' til ad haetta." << endl;
}

void SalesMenuView::displaySalesWhatYouWannaDo()
{
    setColor(15);
    cout << "Veldu '";
    setColor(3);
    cout << "m";
    setColor(15);
    cout << "' til ad fa upp lista af matsedli." << endl;

    cout << "Veldu '";
    setColor(9);
    cout << "a";
    setColor(15);
    cout << "' til ad fa upp lista af medlaeti. " << endl;

    cout << "Veldu '";
    setColor(10);
    cout << "v";
    setColor(15);
    cout << "' til ad baeta vid medlaeti." << endl;

    cout << "Veldu '";
    setColor(13);
    cout << "n";
    setColor(15);
    cout << "' til ad baeta vid pizzu af matsedli." << endl;

    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad baeta vid custom pizzu." << endl;

    cout << "Veldu '";
    setColor(4);
    cout << "k";
    setColor(15);
    cout << "' til ad klara pontun. " << endl;
}

void SalesMenuView::displayHomeOrGet()
{
    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "1";
    setColor(15);
    cout << "' til ad saekja." << endl;

    cout << "Veldu '";
    setColor(14);
    cout << "2";
    setColor(15);
    cout << "' til ad fa sent." << endl;
}
