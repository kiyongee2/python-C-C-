//#include <iostream>
//using namespace std;
//
//class Point {
//	int x;
//	int y;
//public:
//	//setter
//	void setX(int x) {
//		this->x = x;
//	}
//	void setY(int y) {
//		this->y = y;
//	}
//	//getter
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//
//class Circle {
//private:
//	//중심점(Point 클래스 참조)
//	Point center;  
//	int radius;
//
//public:
//	Circle(int x, int y, int radius) {
//		this->center.setX(x);
//		this->center.setY(y);
//		this->radius = radius;
//	}
//
//	void showInfo() {
//		cout << "원의 중심은(" << center.getX() << ", " << center.getY() <<
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
//	c2.showInfo();
//
//	return 0;
//}
