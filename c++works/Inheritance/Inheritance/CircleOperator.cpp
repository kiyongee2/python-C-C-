//#include <iostream>
//#include <string>
//#define PI 3.1415
//using namespace std;
//
////연산자 오버로딩
//class Circle {
//	double radius;
//public:
//	Circle(double radius) : radius(radius) {}
//
//	double getRadius() { return radius; }
//	double getArea() { return PI * radius * radius; }
//	bool operator >= (Circle c);
//};
//
//bool Circle::operator>=(Circle c) {
//	if (this->radius >= c.radius)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	Circle c1(4.1), c2(10.7);
//
//	cout << "원1의 반지름: " << c1.getRadius() << endl;
//	cout << "원1의 면적: " << c1.getArea() << endl;
//	cout << "원2의 반지름: " << c2.getRadius() << endl;
//	cout << "원2의 면적: " << c2.getArea() << endl;
//
//	if (c1 >= c2)
//		cout << "객체 c1이 c2보다 크다.\n";
//	else
//		cout << "객체 c2가 c1보다 크다.\n";
//
//	return 0;
//}