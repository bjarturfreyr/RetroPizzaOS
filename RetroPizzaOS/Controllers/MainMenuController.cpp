#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    //Allt sem �� villt a� gerist � byrjun (constructor)
    init(); //Forriti� kallar � sitt eigi� 'init' � byrjun.
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init(){

    char selection = '\0';
    while (selection != 'q'){

        displayMenuNavigation(); //Kallar � MainMenuView
        cin >> selection; //Controllerin sem vi� erum � s�r um a� taka inn input.

        if (selection == 'a'){
   //      AdminUI = adminUI; B�A TIL SVONA KLASA
   //      adminUI.startuUI();
        }
        else if (selection == 'b'){
//         BakariUI = bakariUI; B�A TIL KLASA
//         bakariUI.startuUI();
    }
        else if (selection == 's'){
 //        SalaUI = salaUI;  B�A TIL KLASA
//         salaUI.startuUI();
        }

        else {
            //try again
        }
    }
}
