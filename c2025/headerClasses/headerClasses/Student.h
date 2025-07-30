#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Subject.h"
using namespace std;

class Student {
private:
    int studentId;      //�л� ���̵�
    string studentName; //�л� �̸�
    Subject korean;     //����
    Subject math;       //����

public:
    Student(int studentId, string studentName);

    void setKoreanSubject(string name, int score);
    void setMathSubject(string name, int score);

    void showInfo();
};
#endif
