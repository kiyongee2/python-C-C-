#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

struct Student {
	string name;
	int grade;
	string address;

	Student(string name, int grade);

	void showInfo();
};
#endif
