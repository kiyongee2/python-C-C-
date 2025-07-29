//#include <iostream>
//using namespace std;
//
////객체 간 참조
//class Point {
//private:
//	int x;
//	int y;
//public:
//	//설정자 함수
//	void setX(int x) {
//		this->x = x;
//	}
//
//	void setY(int y) {
//		this->y = y;
//	}
//
//	//접근자 함수
//	int getX() { return x; }
//	int getY() { return y; }
//};
//
//class Circle {
//private:
//	Point center;  //중심점(Point 클래스 참조)
//	int radius;    //반지름
//	const double PI = 3.141592; //원주율 상수
//
//public:
//	Circle(int radius) {
//		center = Point();
//		this->radius = radius;
//	}
//
//	//좌표 입력
//	void setCenter(int x, int y) {
//		center.setX(x);
//		center.setY(y);
//	}
//
//	//원의 넓이
//	double getArea() { return PI * radius * radius; }
//
//	//원의 정보
//	void displayInfo() {
//		cout << "원의 중심(" << center.getX() << ", " << center.getY() <<
//			"), 반지름: " << radius << endl;
//	}
//};
//
//
//int main()
//{
//	Circle c1(5); //원의 객체 생성
//	c1.setCenter(2, 3);
//
//	c1.displayInfo(); //원의 정보 출력 함수 호출
//	cout << "원의 넓이: " << c1.getArea() << endl;
//	cout << "-------------------------------\n";
//
//	return 0;
//}
