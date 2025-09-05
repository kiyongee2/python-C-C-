#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Subject.h"
using namespace std;

class Student {
private:
	int studentId;
	string studentName;
	Subject korean;
	Subject math;

public:
	Student(int studentId, string studentName);

	void setKoreanSubject(string name, int score);
	void setMathSubject(string name, int score);

	void showInfo();
};
#endif 