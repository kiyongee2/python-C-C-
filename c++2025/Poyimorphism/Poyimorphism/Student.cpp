#include <iostream>
#include "Student.h"

Student::Student(string name, int studentId)
    : Person(name), studentId(studentId) {
}

void Student::greet() {
    cout << "�ȳ��ϼ���. ����: " << name << ", �й�: " << studentId << endl;
}

void Student::displayInfo() {
    cout << "Student name: " << name << ", ID: " << studentId << endl;
}
