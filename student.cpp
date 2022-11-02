#include "student.h"

 string student::getCode() const {
    return code_;
}

void student::setCode(string code) {
    code_ = code;
}

string student::getName() const{
    return name_;
}

void student::setName(string name){
    name_ = name;
}