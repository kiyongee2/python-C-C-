#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include "Subject.h"

class Students {
private:
	int studentId;
	string studentName;
	Subject subjects[10];  //���� �迭
	int subjectCount = 0;  //���� ��ϵ� �����
public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};
#endif
