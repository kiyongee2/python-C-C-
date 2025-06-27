//#include <iostream>
//using namespace std;
//
//class Circle {
//	double radius;
//	double const PI = 3.1415;
//
//public:
//	Circle(double radius) {
//		this->radius = radius;
//	}
//	double getRadius() { return radius; }
//	double getArea() { return PI * radius * radius; }
//	bool operator >= (Circle c) {
//		if (this->radius >= c.radius)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main()
//{
//	Circle c1(5.1), c2(12.3);
//
//	cout << "원1 의 반지름: " << c1.getRadius() << endl;
//	cout << "원2 의 반지름: " << c2.getRadius() << endl;
//
//	if (c1 >= c2) {
//		cout << "객체 c1이 c2보다 크다." << endl;
//	}
//	else {
//		cout << "객체 c2가 c1보다 크다." << endl;
//	}
//
//
//	return 0;
//}
