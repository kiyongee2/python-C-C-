//#include <iostream>
//using namespace std;
//
//struct Point {
//	int x, y;
//
//	//Point(int x = 0, int y = 0) : x(x), y(y){}
//	Point() : x(0), y(0) {}
//};
//
//Point inputPoint() {
//	Point p;  //객체 생성
//	cout << "좌표를 입력하세요(x, y): ";
//	cin >> p.x >> p.y;
//	return p; //반환시 복사됨
//}
//
////Point& - 객체 참조자 사용(호출시 복사 일어나지 않음)
//void printPoint(Point& p, const char* str) {
//	cout << "입력 좌표 = (" << p.x << ", " << p.y << ")\n";
//}
//
//int main()
//{
//	Point p1;
//
//	//입력 함수 호출
//	p1 = inputPoint();
//
//	//출력 함수 호출
//	printPoint(p1, "입력 좌표");
//
//	return 0;
//}
