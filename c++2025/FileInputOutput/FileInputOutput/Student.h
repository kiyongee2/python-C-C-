#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
	string name;  //이름
	int eng;      //영어 점수
	int math;     //수학 점수
	double avg;   //평균
public:
	void setName(string name);
	void setEng(int eng);
	void setMath(int math);
	void calculateAvg(); //평균 계산

	string getName();
	int getEng();
	int getMath();
	double getAvg();
};
#endif // !STUDENT_H

