
#include "Student.h"

Student::Student(string name, int grade) :
	name(name), grade(grade) {}

void Student::showInfo() {
	cout << "이름: " << name << endl;
	cout << "학년: " << grade << endl;
}

