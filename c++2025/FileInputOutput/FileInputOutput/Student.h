#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
	string name;  //�̸�
	int eng;      //���� ����
	int math;     //���� ����
	double avg;   //���
public:
	void setName(string name);
	void setEng(int eng);
	void setMath(int math);
	void calculateAvg(); //��� ���

	string getName();
	int getEng();
	int getMath();
	double getAvg();
};
#endif // !STUDENT_H

