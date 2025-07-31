#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include "Subject.h"

class Students {
private:
	int studentId;
	string studentName;
	Subject subjects[10];  //과목 배열
	int subjectCount = 0;  //현재 등록된 과목수
public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};
#endif
