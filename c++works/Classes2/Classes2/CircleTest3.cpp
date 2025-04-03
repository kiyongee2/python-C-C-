//#include <iostream>
//using namespace std;
//#define M_PI 3.1415
//
//class Point {
//    int x;
//    int y;
//public:
//    // 생성자 추가 (초기화 목록 사용)
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//
//    // getter
//    int getX() { return x; }
//    int getY() { return y; }
//};
//
//class Circle {
//private:
//    Point center;  // 중심점
//    int radius;
//
//public:
//    // 초기화 목록 사용 (this 제거)
//    Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
//
//    double getArea() {  //원의 넓이
//    	return M_PI * radius * radius; 
//    }
//
//    void showInfo() {
//        cout << "원의 중심은(" << center.getX() << ", " << center.getY() <<
//            ")이고, 반지름은 " << radius << "입니다." << endl;
//    }
//};
//
//int main() {
//    Circle c1(2, 3, 5);   // 작은 원 생성
//    Circle c2(10, 10, 10); // 큰 원 생성
//
//    cout << "*************** 원의 정보 ***************\n";
//	c1.showInfo();
//	cout << "원의 넓이: " << c1.getArea() << endl;
//
//	c2.showInfo();
//	cout << "원의 넓이: " << c2.getArea() << endl;
//
//    return 0;
//}