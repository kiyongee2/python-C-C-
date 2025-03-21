//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 매개변수 있는 생성자
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	void print() {
//		cout << "x=" << x << ", y=" << y << endl;
//	}
//
//	Point operator+(Point p) {
//		x = x + p.x;
//		y = y + p.y;
//		return Point(x, y);
//	}
//};
//
//
//int main()
//{
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	Point p3 = p1 + p2;
//
//	/*p1.print();
//	p2.print();*/
//	p3.print();
//
//	return 0;
//}