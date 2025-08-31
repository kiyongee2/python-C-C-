#include <iostream>
#include "Students.h"

Students::Students(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

void Students::addSubject(string name, int score) {
	if (subjectCount < 10) {
		subjects[subjectCount].setSubjectName(name);
		subjects[subjectCount].setScorePoint(score);
		subjectCount++;
	}
}

void Students::showInfo() {
	cout << "�й�: " << studentId
		<< "\n�̸�: " << studentName << endl;
	for (int i = 0; i < subjectCount; i++) {
		cout << subjects[i].getSubjectName()
			<< " ����: " << subjects[i].getScorePoint() << "��\n";
	}
	cout << "------------------------------\n";
}