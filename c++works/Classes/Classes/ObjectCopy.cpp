//#include <iostream>
//#include <string>
//using namespace std;
//
////Pont 구조체 정의 - 객체 복사
//struct Point {
//	int x, y;
//	/*Point(int xx = 0, int yy = 0) {
//		x = xx;
//		y = yy;
//	};*/ //초기화 1
//	Point(int xx = 0, int yy = 0) : x(xx), y(yy) {}; //초기화 2
//	
//};
//
//Point inputPoint() {
//	Point p;
//	cout << "좌표를 입력해주세요(x, y): ";
//	cin >> p.x >> p.y;
//	return p;
//}
//
////함수의 매개변수로 객체 전달(복사)
//void printPoint(Point p, const char* str = "Point") {
//	cout << str << "=(" << p.x << "," << p.y << ")\n";
//}
//
//int main()
//{
//	Point a;
//	a = inputPoint();  //함수가 객체를 반환(복사)
//	printPoint(a, "입력 좌표");
//
//	return 0;
//}