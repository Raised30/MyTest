using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "menu.h"

string fnameclasses = "classes.csv";
string fnameclassesuc = "classes_per_uc.csv";
string fnamestudentsclasses = "students_classes.csv";

void read_file(string fname) {

    vector <vector<string>> result;
    vector <string> row;
    string line, word;

    fstream file(fname);
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
}

int main() {
    menu Menu;
    read_file(fnameclassesuc);
    return 0;
}
