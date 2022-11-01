#include "menu.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;


void menu::Menu(){
    do{
        mainMenu();
        switch (choice1) {
            case 1:{
                Alteration();
                break;
            }
            case 2:{
                Options();
                break;
            }
            case 3:{
                break;
            }
        }
    }
    while(choice1 != 3);
}

void menu::Options() {
    do{
        optionsMenu();
        switch (choice2) {
            case 1:{
                //código ocupação de turma
                break;
            }
            case 2:{
                //código horario do estudante
                break;
            }
            case 3:{
                //código estudantes em certa turma
                break;
            }
            case 4:{
                break;
            }
            default:{
                break;
            }
        }
    }
    while(choice2 !=4);
}

void menu::Alteration(){
    do{
        alterationMenu();
        switch (choice3) {
            case 1:{
                //código ocupação de turma
                break;
            }
            case 2:{
                //código horario do estudante
                break;
            }
            case 3:{
                //código estudantes em certa turma
                break;
            }
            case 4:{
                //código
                break;
            }
            case 5:{
                break;
            }
            default:{
                break;
            }
        }
    }
    while(choice3 !=5);
}

void menu::mainMenu(void) {
    cout << "\nMenu\n";
    cout << "1 - Schedule alteration\n";
    cout << "2 - other options\n";
    cout << "3 - Quit\n";
    cout << "Please choose:";
    cin >> choice1;
}

void menu::optionsMenu(void) {
    cout << "\n\nOptions Menu\n";
    cout << "1 - Classes ocupation\n";
    cout << "2 - Schedule of a student\n";
    cout << "3 - Students in a certain class\n";
    cout << "4 - Back\n";
    cout << "Please choose: ";
    cin >> choice2;
}

void menu::alterationMenu(void) {
    cout << "\n\nSchedule alteration Menu\n";
    cout << "1 - Remove student from a class/UC\n";
    cout << "2 - Add student to a class/UC\n";
    cout << "3 - Change the class/UC of a student\n";
    cout << "4 - Change a group of classes/UC of a student\n";
    cout << "5 - Back\n";
    cout << "Please choose: ";
    cin >> choice3;
}

