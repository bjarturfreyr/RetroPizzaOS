#include "MainMenuView.h"

void MainMenuView::displayMenuNavigation()
{
    //View file-ar sjá bara um að cout-a þegar kallað er í þá.
    cout << "Press 'a' for Admin." << endl;
    cout << "Press 'b' for Baker." << endl;
    cout << "Press 's' for Salesman." << endl;
    cout << "Press 'q' to quit." << endl;
}
