#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
private:
    int studentId;

public:
    Student(string name, int studentId);

    void greet() override;          //오버라이드
    void displayInfo() override;    //오버라이드
};

#endif

