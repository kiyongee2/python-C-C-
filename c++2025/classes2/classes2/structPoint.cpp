//#include <iostream>
//using namespace std;
//
//struct Point {
//	int x, y;
//
//	//생성자 초기화 목록
//	Point(int x = 0, int y = 0) : x(x), y(y){}
//};
//
////좌표 입력 함수
//Point inputPoint() {
//	Point p;  //객체 생성(기본 생성자)
//	cout << "좌표를 입력하세요(x, y): ";
//	cin >> p.x >> p.y;
//	return p; //반환시 복사됨
//}
//
////좌표 출력 함수
////Point& - 객체 참조자 사용(호출시 복사 일어나지 않음)
//void printPoint(Point& p) {
//	cout << "입력 좌표 = (" << p.x << ", " << p.y << ")\n";
//}
//
//int main()
//{
//	Point p1;  //구조체 변수 생성
//
//	//입력 함수 호출
//	p1 = inputPoint();
//
//	//출력 함수 호출
//	printPoint(p1);
//
//	return 0;
//}
