//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x;
//	int y;
//
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y){}
//
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//
//class Circle {
//	Point center;
//	int radius;
//	const double PI = 3.141592;
//
//public:
//	Circle(int x, int y, int radius) : center(x, y), radius(radius){}
//
//	double getArea() {
//		return PI * radius * radius;
//	}
//
//	void showInfo() {
//		cout << "���� �߽���(" << center.getX() << ", " << center.getY() <<
//			")�̰�, �������� " << radius << "�Դϴ�.\n";
//	}
//};
//
//int main()
//{
//	Circle c1(2, 3, 5);
//
//	c1.showInfo();
//	cout << c1.getArea() <<endl;
//
//	return 0;
//}
