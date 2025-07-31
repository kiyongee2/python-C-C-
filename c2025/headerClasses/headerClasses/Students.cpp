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
	int sum = 0;    //ÃÑÁ¡
	double average; //Æò±Õ

	cout << "ÇÐ¹ø: " << studentId
		<< "\nÀÌ¸§: " << studentName << endl;
	for (int i = 0; i < subjectCount; i++) {
		sum += subjects[i].getScorePoint(); //ÃÑÁ¡ °è»ê

		cout << subjects[i].getSubjectName()
			<< " Á¡¼ö: " << subjects[i].getScorePoint() << "Á¡" << endl;
	}
	average = (double)sum / subjectCount; //Æò±Õ

	cout << fixed;
	cout.precision(1);
	cout << "Æò±Õ Á¡¼ö: " << average << "Á¡" << endl;
	cout << "--------------------------\n";
}