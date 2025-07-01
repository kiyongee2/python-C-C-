//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//
//public:
//	Point(int x, int y) : x(x), y(y) {}
//
//	void print() {
//		cout << "x = " << x << ", y = " << y << endl;
//	}
//
//	//Point&(참조자)를 사용하여 원본은 유지하고 복사본을 리턴함
//	Point operator+(Point& p) { //더하기 연산자
//		return Point(x + p.x, y + p.y);
//	}
//
//	Point operator-(Point& p) { //빼기 연산자
//		return Point(x - p.x, y - p.y);
//	}
//};
//
//int main()
//{
//	//점 객체
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	p1.print(); //출력 함수 호출
//	p2.print();
//
//	//객체 더하기
//	Point p3 = p1 + p2;
//	p3.print();
//
//	//객체 빼기
//	Point p4 = p2 - p1;
//	p4.print();
//
//	return 0;
//}
