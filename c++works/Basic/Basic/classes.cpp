//#include <iostream>
//
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();  //소멸자
//
//	double getArea();
//};
//
////생성자
//Circle::Circle() : Circle(1) {}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//
////객체는 생성의 반대로 소멸됨
//Circle::~Circle() {
//	cout << "반지름 " << radius << " 원 소멸" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main_class()
//{
//	Circle c1;
//	//c1.radius = 3;
//
//	double area = c1.getArea();
//
//	cout << "c1 의 면적은 " << area << endl;
//
//	Circle c2(3);
//	area = c2.getArea();
//
//	cout << "c2 의 면적은 " << area << endl;
//
//	return 0;
//}