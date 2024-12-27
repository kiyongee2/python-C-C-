#include <iostream>
#include "Circle.h"  

using namespace std;

//생성자
Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

//객체는 생성의 반대로 소멸됨
Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}