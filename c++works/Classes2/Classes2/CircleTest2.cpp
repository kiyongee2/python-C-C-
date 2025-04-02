//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct Point {
//	int x = 0;
//	int y = 0;
//
//	//생성자 : 초기화 목록
//	Point(int x = 0, int y = 0) : x(x), y(y) {};
//	//Point(int x, int y) : x(0), y(0) {};
//};
//
//class Circle {
//private:
//	Point center; //중심점(Point 구조체 사용)
//	int radius;   //반지름
//public:
//	/*Circle(int x, int y, int radius) {
//		this->center.x = x;
//		this->center.y = y;
//		this->radius = radius;
//	}*/
//	//생성자 : 초기화 목록
//	Circle(int x, int y, int radius) : center{x, y}, radius(radius){}
//
//	double getArea(){  //원의 넓이
//		return 3.14 * radius * radius; 
//	}
//
//	void showInfo() {  //원의 정보
//		cout << "원의 중심은(" << center.x << ", " << center.y <<
//			")이고, 반지름은 " << radius << "입니다." << endl;
//	}
//};
//
//int main()
//{
//	Circle c1(2, 3, 5);  //작은 원 생성
//	Circle c2(10, 10, 10); //큰 원 생성
//
//	cout << "*************** 원의 정보 ***************\n";
//	c1.showInfo();
//	cout << "원의 넓이: " << c1.getArea() << endl;
//
//	c2.showInfo();
//	cout << "원의 넓이: " << c2.getArea() << endl;
//
//	return 0;
//} 

