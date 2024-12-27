#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle c1;
	//c1.radius = 3;

	double area = c1.getArea();

	cout << "c1 의 면적은 " << area << endl;

	Circle c2(3);
	area = c2.getArea();

	cout << "c2 의 면적은 " << area << endl;

	return 0;
}