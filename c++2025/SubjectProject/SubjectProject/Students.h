#ifndef STUDENTS_H
#define STUDENTS_H

#include "Subject.h"

class Students {
private:
	int studentId;
	string studentName;
	Subject subjects[10];
	int subjectCount = 0;

public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};
#endif 