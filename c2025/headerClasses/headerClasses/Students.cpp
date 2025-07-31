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
	int sum = 0;    //����
	double average; //���

	cout << "�й�: " << studentId
		<< "\n�̸�: " << studentName << endl;
	for (int i = 0; i < subjectCount; i++) {
		sum += subjects[i].getScorePoint(); //���� ���

		cout << subjects[i].getSubjectName()
			<< " ����: " << subjects[i].getScorePoint() << "��" << endl;
	}
	average = (double)sum / subjectCount; //���

	cout << fixed;
	cout.precision(1);
	cout << "��� ����: " << average << "��" << endl;
	cout << "--------------------------\n";
}