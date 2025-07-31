#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
	string name;
	int grade;
	string address;
};

// 함수 선언
void showInfo(Student& st);

#endif

