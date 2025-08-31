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
	cout << "학번: " << studentId
		<< "\n이름: " << studentName << endl;
	for (int i = 0; i < subjectCount; i++) {
		cout << subjects[i].getSubjectName()
			<< " 점수: " << subjects[i].getScorePoint() << "점\n";
	}
	cout << "------------------------------\n";
}