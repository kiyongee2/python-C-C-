#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

//Person Ŭ������ ����� Student
class Student : public Person{
private:
	int studentId; //�й�

public:
	//������ - �θ�Ŭ���� ��� ���� �����
	Student(string name, int studentId);

	void greet();
	void displayInfo();
};
#endif
