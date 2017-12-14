#include "GlobalView.h"

void GlobalView::displayHeader()
{
    setColor(14);
    cout << "                                  ._ " << endl;
    cout << "                                ,(  `-. " << endl;
    cout << "                              ,': `.   `. " << endl;
    cout << "                            ,` *   `-.   \\ " << endl;
    cout << "                          ,'  ` :+  = `.  `. " << endl;
    cout << "                        ,~  (o):  .,   `.  `. " << endl;
    cout << "                      ,'  ; :   ,(__) x;`.  ; " << endl;
    cout << "                    ,'  :'   :   ;  ; ; _,-' " << endl;
    cout << "                  .'O ; = _' C ; ;'_,_ ; " << endl;
    cout << "                ,;  _;   ` : ;'_,-'   i' " << endl;
    cout << "              ,` `;(_)  0 ; ','       : " << endl;
    cout << "            .';6     ; ' ,-'~ " << endl;
    cout << "          ,' Q  ,& ;',-.' " << endl;
    cout << "        ,( :` ; _,-'~  ; " << endl;
    cout << "      ,~.`c _',' " << endl;
    cout << "    .';^_,-' ~ " << endl;
    cout << "  ,'_;-'' " << endl;
    cout << " ,,~ " << endl;
    cout << " i' " << endl;
}

void GlobalView::displayMenu(vector<Pizza> listOfPizzas)
{
    for(int i = 0; i < listOfPizzas.size(); i++){
        cout << "------------------" << endl;
        cout << "Pizza " << i+1 << ": " << listOfPizzas[i].getNafn() << endl;
        cout << "Verd" << ": " << listOfPizzas[i].getVerd() << endl;
        for(int j = 0; j < listOfPizzas[i].getAlegg().size(); j++) {
            cout << listOfPizzas[i].getAlegg()[j] << endl;
        }
    }
    cout << "------------------" << endl;
}

void GlobalView::displayMedlaeti(vector<Medlaeti> listOfMedlaeti)
{
    for(int i = 0; i < listOfMedlaeti.size(); i++) {
        cout << "------------------" << endl;
        cout << "Medlaeti: " << i+1 << ": " << listOfMedlaeti[i].getName() << endl;
        cout << "Verd: " << listOfMedlaeti[i].getPrice() << endl;
    }
    cout << "------------------" << endl;
}
