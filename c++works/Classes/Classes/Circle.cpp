//#include <iostream>
//using namespace std;
//
////Circle 클래스 정의
//class Circle{
//public:
//	int radius;
//
//	//생성자
//	Circle();
//	Circle(int r);
//
//	double getArea();
//};
//
//Circle::Circle() 
//{
//	radius = 1;
//	cout << "반지름" << radius << "인 원 생성" << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "반지름" << radius << "인 원 생성" << endl;
//}
//
//double Circle::getArea() 
//{
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	//반지름이 1인 원 생성
//	Circle c1;
//	cout << "원의 면적은 " << c1.getArea() << endl;
//
//	cout << "==========================\n";
//
//	//반지름이 10인 원 생성
//	Circle c2(10);
//	cout << "원의 면적은 " << c2.getArea() << endl;
//
//	return 0;
//}