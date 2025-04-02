//#include <iostream>
//#include <string>
//using namespace std;
//
////연산자 오버로딩
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
//	//더하기 연산 함수
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
//	//점 객체 생성
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	p1.print();
//	p2.print();
//
//	//객체 더하기
//	Point p3 = p1 + p2;
//
//	p3.print();
//
//	return 0;
//}