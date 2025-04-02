#include <iostream>
#include <string>
using namespace std;

/*
	Point 구조체를 사용하여 좌표를 입력받고 출력하는 프로그램
	Point는 접근제어가 public이다.
*/
struct Point {
	int x, y;

	//생성자 : 초기화 목록
	Point(int x = 0, int y = 0) : x(x), y(y){}
	//Point() : x(0) , y(0) {} //명시적 초기화
};

Point inputPoint() {
	Point p;  // 생성(기본 생성자)
	cout << "좌표를 입력해주세요(x, y): ";
	cin >> p.x >> p.y;  
	return p; //반환시 복사(임시 객체 생성)
}

/* 
   * 함수의 매개변수로 객체 전달(복사)
     const Point p - 값으로 전달(복사 발생)
     const Point& p - 원본 객체 p의 메모리 주소로 전달
*/
void printPoint(const Point& p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << "," << p.y << ")\n";
}

int main()
{
	Point p1;
	p1 = inputPoint();  //임시 객체에서 p1로 복사
	printPoint(p1, "입력 좌표"); //p1에서 함수 매개변수 p로 복사

	return 0;
}
