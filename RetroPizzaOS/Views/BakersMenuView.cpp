#include "BakersMenuView.h"

void BakersMenuView::displayBakersWelcome(){
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(14);
    cout << "bakara";
    setColor(15);
    cout << " menu." << endl << endl;
}

void BakersMenuView::displayBakersNavigation(){

    cout << "Veldu '";
    setColor(5);
    cout << "a";
    setColor(15);
    cout << "' til ad velja afhendingarstad." << endl;


    cout << "Veldu '";
    setColor(14);
    cout << "b";
    setColor(15);
    cout << "' til ad fa upp lista af pontudum pizzum." << endl;


    setColor(15);
    cout << "Veldu '";
    setColor(11);
    cout << "s";
    setColor(15);
    cout << "' til ad fa upp tiltekna pantada pizzu." << endl;


    cout << "Veldu '";
    setColor(6);
    cout << "n";
    setColor(15);
    cout << "' til ad merkja pizzu greidda eda afhenta." << endl;


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

/*
void BakersMenuView::displayBakersWelcome()
{
    setColor(15);
    cout << "Velkomin/n i ";
    setColor(11);
    cout << "bakstur";
    setColor(15);
    cout << " menu." << endl << endl;
}

void BakersMenuView::displayBakersMenu()
{

    cout << "Hvar ertu staddur? " << endl;
    cout << "K = Koparvogur" << endl;
    cout << "G = Grafarrvogur" << endl;
    cout << "V = Vesturbaer" << endl;
    cout << "H = Hafnafjordur" << endl;
    cout << "S = Selfoss" << endl;


    cout << endl;
    cout << endl;
}

void BakersMenuView::displayBakersNavigation(char afhendingarstadur)
{
//    if(afhendingarstadur == 'k'){
//        database.kopavogurmenu();
//    }
//    else if(afhendingarstadur == 'h'){
//        database.hfjmenu();
//    }
//    else if(afhendingarstadur == 'v'){
//        database.vsbmenu();
//    }
//    else if(afhendingarstadur == 'g'){
//        database.grafarvogurmenu();
//    }
//    else if(afhendingarstadur == 's'){
//        database.selfossmenu();
//    }
//    else{
//        cout << "Gat ekki lesid skranna!" << endl;
//    }


    cout << "Her er pontun af pizzu: " << endl;
}

void BakersMenuView::bakersGetPizza()
{
    cout << "Numer hvad er pizzan sem du vilt baka? " << endl;
}

void BakersMenuView::selectPizza(int numerpizzu)
{
    ///þurfum að finna ut hvernig við látum forritið vita úr hvaða skrá
    ///forritið þarf að fara til að ná i pizzuna.
    ///KKKIIIIKKKKJAJAJAJAJ
    if(numerpizzu == 1){
        cout << "" << endl;
    }
}

void BakersMenuView::displayBakersEnding()
{
    cout << "F L O T T  OG  F R A B AE R T" << endl;
}


void BakersMenuView::villuskilabod()
{
    cout << "Villa i innslatti, reyndu aftur" << endl;
}


void BakersMenuView::ofnMenu()
{
    cout << "Er pizzan tilbuin ad fara i ofninn? (y) = ja eda (n) = nei: ";
}
void BakersMenuView::ofnReddy()
{
    cout << " OFN = CHECK " << endl;
}
void BakersMenuView::ofnNuna()
{
    cout << ":(" << endl;
    cout << "Er pizzan nuna tilbuin ad fara i ofninn? ";
}


void BakersMenuView::pokkunMenu()
{
    cout << "Er pizzan komin i pizzakassa? (y) = ja eda (n) = nei: ";
}
void BakersMenuView::pokkunReddy()
{
    cout << " POKKUN = CHECK " << endl;
}
void BakersMenuView::pokkunNuna()
{
    cout << ":(" << endl;
    cout << "Er pizzan nuna komin i kassa? ";
}


void BakersMenuView::tilbuinMenu()
{
    cout << "Er pizzan tilbuin til afhendingar? (y) = ja eda (n) = nei: ";
}
void BakersMenuView::tilbuinReddy()
{
    cout << "AFHENDING = CHECK " << endl;
}
void BakersMenuView::tilbuinNuna()
{
    cout << ":(" << endl;
    cout << "Er pizzan nuna tilbuin til afhendingar? ";
}
*/
