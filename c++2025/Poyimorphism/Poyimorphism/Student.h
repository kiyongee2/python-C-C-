#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
private:
    int studentId;

public:
    Student(string name, int studentId);

    void greet() override;        //함수 재정의
    void displayInfo() override;  //오버라이드
    ~Student() override;   //가상 소멸자
};
#endif

