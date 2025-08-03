#include <iostream>
#include "Student.h"

Student::Student(string name, int studentId)
    : Person(name), studentId(studentId) {
}

void Student::greet() {
    cout << "안녕하세요. 성명: " << name << ", 학번: " << studentId << endl;
}

void Student::displayInfo() {
    cout << "Student name: " << name << ", ID: " << studentId << endl;
}
