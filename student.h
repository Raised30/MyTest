#ifndef AED_PROJETO_STUDENT_H
#define AED_PROJETO_STUDENT_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class student {
public:
    student(string code, string name){
        code_ = code;
        name_ = name;
    }

    string getCode() const;

    void setCode(string code);

    string getName() const;

    void setName(string name);

private:
    string code_;
    string name_;
};


#endif
