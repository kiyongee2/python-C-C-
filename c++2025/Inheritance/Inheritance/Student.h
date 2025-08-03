#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

//Person 클래스를 상속한 Student
class Student : public Person{
private:
	int studentId; //학번

public:
	//생성자 - 부모클래스 멤버 변수 명시함
	Student(string name, int studentId);

	void greet();
	void displayInfo();
};
#endif
