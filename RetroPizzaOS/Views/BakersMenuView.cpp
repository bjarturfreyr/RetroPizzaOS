#include "BakersMenuView.h"

void BakersMenuView::displayBakersMenu()
{
    cout << "V E L K O M I N   B A K A R I " << endl;
    cout << endl;
    cout << endl;
}

void BakersMenuView::displayBakersNavigation()
{
    cout << "Her er pontun af pizzu: " << endl;
}

void BakersMenuView::displayBakersEnding()
{
    cout << "F L O T T  OG  F R A B AE R T" << endl;
}

void BakersMenuView::displayAfhendingarstadir()
{
    cout << listAfhendingarstadir() << endl;
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

