#include "Student.h"

//�θ� Ŭ������ ������ ���
Student::Student(string name, int studentId) :
	Person(name), studentId(studentId) {}

void Student::greet() { //�Լ� ������(override)
	cout << "�ȳ��ϼ���. ����: " << name 
		 << ", �й�: " << studentId << endl;
}

void Student::displayInfo() {
	cout << "Student name: " << name << endl;
}
