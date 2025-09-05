#include "Student.h"

//부모 클래스의 생성자 상속
Student::Student(string name, int studentId) :
	Person(name), studentId(studentId) {}

void Student::greet() { //함수 재정의(override)
	cout << "안녕하세요. 성명: " << name 
		 << ", 학번: " << studentId << endl;
}

void Student::displayInfo() {
	cout << "Student name: " << name << endl;
}
