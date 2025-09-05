#ifndef STUDENTS_H
#define STUDENTS_H

#include "Subject.h"

class Students {
private:
	int studentId;        //�л� ���̵�
	string studentName;   //�л� �̸�
	Subject subjects[10]; //����(�迭)
	int subjectCount = 0; //���� �����

public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};
#endif 

