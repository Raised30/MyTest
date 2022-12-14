#include "menu.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

vector<vector<string>> read_file(string myfilename) {

    vector <vector<string>> result;
    vector <string> row;
    string line, word;

    ifstream file;
    file.open(myfilename);
    if (file.is_open()) {
        while (getline(file, line)) {
            row.clear();
            stringstream s(line);
            while (getline(s, word, ',')) {
                row.push_back(word);
            }
            result.push_back(row);
        }
    }
    return result;
}

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
                string ucode = "";
                string classcode = "";
                int count = 0;

                cout <<  "\nEnter ucode: ";
                cin >> ucode;

                cout << "\nEnter classcode: ";
                cin >> classcode;

                vector<vector<string>> aux = read_file("students_classes.csv");
                for(int i = 0; i < aux.size(); i++){
                    string X = (aux[i][3]);
                    string Y = (aux[i][2]);
                    X.resize(7);
                    if (X == classcode and Y == ucode){
                        count++;
                    }
                }
                cout << "\nThe number of students that are on that class/Uc is " << count;
                cout << string(5, '\n');
                break;
            }
            case 2:{
                //código horario do estudante
                break;
            }
            case 3:{
                //código estudantes em certa UC
                string ucode = "";
                int count = 0;

                cout <<  "\nEnter ucode: ";
                cin >> ucode;

                vector<vector<string>> aux = read_file("students_classes.csv");
                for(int i = 0; i < aux.size(); i++){

                    string Y = (aux[i][2]);

                    if (Y == ucode){
                        count++;
                    }
                }
                cout << "\nThe number of students that are on that UCeu Sem  is " << count;
                cout << string(5, '\n');
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
    cout << "3 - Students in a certain UC\n";
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

