//
// Created by tomas on 01-11-2022.
//

#ifndef AED_PROJETO_MENU_H
#define AED_PROJETO_MENU_H
#include <sstream>
#include <fstream>
#include "student.h"


class menu {
public:
    menu(){
        Menu();
    }
private:
    void Menu();
    void Options();
    void Alteration();
    void mainMenu();
    void optionsMenu();
    void alterationMenu();
    int choice1 = 0;
    int choice2 = 3;
    int choice3 = 5;
};




#endif //AED_PROJETO_MENU_H
