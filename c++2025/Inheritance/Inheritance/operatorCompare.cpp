//#include <iostream>
//using namespace std;
//
//class Circle {
//	double radius; //반지름(실수)
//	double const PI = 3.1415; //원주율 상수
//
//public:
//	Circle(double radius) {
//		this->radius = radius;
//	}
//
//	double getRadius() { return radius; } 
//	//원의 면적 계산
//	double getArea() { return PI * radius * radius; }
//
//	bool operator>= (Circle c) { //비교 연산자 함수 생성
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
//	cout << "원1의 반지름: " << c1.getRadius() << endl;
//	cout << "원1의 면적: " << c1.getArea() << endl;
//	cout << "원2의 반지름: " << c2.getRadius() << endl;
//	cout << "원2의 면적: " << c2.getArea() << endl;
//
//	if (c1 >= c2) {
//		cout << "객체 c1이 c2보다 크다." << endl;
//	}
//	else {
//		cout << "객체 c2가 c1보다 크다." << endl;
//	}
//
//	return 0;
//}
