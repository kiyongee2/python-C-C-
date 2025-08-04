#include <iostream>
#include "Student.h"

Student::Student(string name, int studentId)
    : Person(name), studentId(studentId) {
}

void Student::greet() {
    cout << "¾È³çÇÏ¼¼¿ä. ¼º¸í: " << name 
         << ", ÇÐ¹ø: " << studentId << endl;
}

void Student::displayInfo() {
    cout << "Student name: " << name 
         << ", ID: " << studentId << endl;
}

Student::~Student() {
    cout << "Student ¼Ò¸êÀÚ È£ÃâµÊ: " << name << endl;
}
