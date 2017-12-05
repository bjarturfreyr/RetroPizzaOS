#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    //Allt sem þú villt að gerist í byrjun (constructor)
    init(); //Forritið kallar á sitt eigið 'init' í byrjun.
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init(){

    char selection = '\0';
    while (selection != 'h'){

        clearScreen();
        displayMenuNavigation(); //Kallar í MainMenuView

        cin >> selection; //Controllerin sem við erum í sér um að taka inn input.

    }

    if (selection == 'a'){
        //stuff
    }

    else if (selection == 'b'){
        //BakariUI = bakariUI; BÚA TIL KLASA
        //bakariUI.startuUI();
    }

    else if (selection == 's'){
        //SalaUI = salaUI;  BÚA TIL KLASA
        //salaUI.startuUI();
    }

    else {
        //try again
    }
}
