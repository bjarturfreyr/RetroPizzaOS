#include "MainMenuView.h"

void MainMenuView::displayMenuNavigation()
{
    //View file-ar sj� bara um a� cout-a �egar kalla� er � ��.

    setColor(9);
    cout << "Smelltu a 'a' fyrir Admin." << endl;
    setColor(11);
    cout << "Smelltu a 'b' fyrir Bakara." << endl;
    setColor(10);
    cout << "Smelltu a 's' fyrir Solumann" << endl;
    setColor(13);
    cout << "Smelltu a 'h' til ad haetta." << endl;
}
