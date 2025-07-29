#include <iostream>
using namespace std;

//객체 간 참조
class Point {
private:
	int x;
	int y;
public:
	//생성자
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	//접근자 함수
	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
private:
	Point center;  //중심점(Point 클래스 참조)
	int radius;    //반지름
	const double PI = 3.141592; //원주율 상수

public:
	//생성자 초기화 목록
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

	/*Circle(int x, int y, int radius) {
		center = Point(x, y);
		this->radius = radius;
	}*/

	//원의 넓이
	double getArea() { return PI * radius * radius; }

	//원의 정보
	void displayInfo() {
		cout << "원의 중심(" << center.getX() << ", " << center.getY() <<
			"), 반지름: " << radius << endl;
	}
};


int main()
{
	Circle c1(2, 3, 5); //원의 객체 생성

	c1.displayInfo(); //원의 정보 출력 함수 호출
	cout << "원의 넓이: " << c1.getArea() << endl;
	cout << "-------------------------------\n";

	Circle c2(10, 10, 10);
	c2.displayInfo();
	cout << "원의 넓이: " << c2.getArea() << endl;
	
	return 0;
}

//생성자- 초기화 목록
//기본 매개변수 - x, y 값을 넣지 않으면 기본 0이 전달됨
//Point(int x = 0, int y = 0) : x(x), y(y){}
//Circle(int x, int y, int radius) : center(x, y), radius(radius){}