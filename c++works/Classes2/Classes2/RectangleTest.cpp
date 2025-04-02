//#include <iostream>
//using namespace std;
//
//class Point {
//	int x;
//	int y;
//public:
//	//setter
//	void setX(int x) {
//		this->x = x;
//	}
//	void setY(int y) {
//		this->y = y;
//	}
//	//getter
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//
//class Rectangle {
//private:
//	Point p;
//
//public:
//	/*Rectangle(int x, int y) {
//		this->p.setX(x);
//		this->p.setY(y);
//	}*/
//
//	void setP(int x, int y) {
//		p.setX(x);
//		p.setY(y);
//	}
//	
//	void showInfo() {
//		cout << "점(" << p.getX() << ", " << p.getY() << ")" << endl;
//	}
//};
//
//int main()
//{
//	Rectangle rect1, rect2;
//
//	rect1.setP(1, 1);
//	rect2.setP(4, 4);
//
//	//매개변수가 있는 생성자
//	/*Rectangle rect1(1, 1);
//	Rectangle rect2(4, 4);*/
//
//	rect1.showInfo();
//	rect2.showInfo();
//
//	return 0;
//}