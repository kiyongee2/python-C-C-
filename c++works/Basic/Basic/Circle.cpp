#include <iostream>
#include "Circle.h"  

using namespace std;

//������
Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

//��ü�� ������ �ݴ�� �Ҹ��
Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}