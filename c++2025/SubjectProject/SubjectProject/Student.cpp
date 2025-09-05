
#include "Student.h"

Student::Student(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

void Student::setKoreanSubject(string name, int score) {
	korean.setSubjectName(name);
	korean.setScorePoint(score);
}

void Student::setMathSubject(string name, int score) {
	math.setSubjectName(name);
	math.setScorePoint(score);
}

void Student::showInfo() {
	cout << "학번: " << studentId
		<< "\n이름: " << studentName
		<< "\n국어 점수: " << korean.getScorePoint()
		<< "\n수학 점수: " << math.getScorePoint()
		<< "\n--------------------------------\n";
}