#include "AdminMenuView.h"

void AdminMenuView::displayAdminWelcome(){
    cout << "Saelir herra admin" << endl;
}

void AdminMenuView::displayAdminNavigation(){
    cout << "Hvad ma bjoda der ad gera?" << endl;
    cout << "b. Bua til pitsu" << endl;
    cout << "l. Fa lista yfir pitsur" << endl;
    cout << "t. Til ad fara til baka" << endl;
    cout << endl;
}

void AdminMenuView::displayAdminPizzaList() {
    cout << "Her er listi yfir pizzurnar" << endl;
    cout << listPizzas() << endl;
}
