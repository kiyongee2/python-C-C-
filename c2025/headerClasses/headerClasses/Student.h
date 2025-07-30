#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Subject.h"
using namespace std;

class Student {
private:
    int studentId;      //학생 아이디
    string studentName; //학생 이름
    Subject korean;     //국어
    Subject math;       //수학

public:
    Student(int studentId, string studentName);

    void setKoreanSubject(string name, int score);
    void setMathSubject(string name, int score);

    void showInfo();
};
#endif
