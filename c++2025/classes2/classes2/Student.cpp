
#include "Student.h"

Student::Student(string name, int grade) :
	name(name), grade(grade) {}

void Student::showInfo() {
	cout << "�̸�: " << name << endl;
	cout << "�г�: " << grade << endl;
}

