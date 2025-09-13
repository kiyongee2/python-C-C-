#include "Student.h"

void Student::setName(string name) { 
	this->name = name; 
}
void Student::setEng(int eng) { 
	this->eng = eng; 
}
void Student::setMath(int math){
	this->math = math;
}
void Student::calculateAvg() {
	avg = (double)(eng + math) / 2;
}

string Student::getName() { return name; }
int Student::getEng() { return eng; }
int Student::getMath() { return math; }
double Student::getAvg() { return avg; }

