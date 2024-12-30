//#include <iostream>
//
//using namespace std;
//
//class Point {
//protected:
//	int x, y;
//public:
//	void set(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	void showPoint() {
//		cout << "(" << x << ", " << y << ")" << endl;
//	}
//};
//
////상속
//class ColorPoint : public Point {
//	string color;
//public:
//	void setColor(string color) {
//		this->color = color;
//	}
//	void showColorPoint();
//	bool equals(ColorPoint p);
//};
//
//void ColorPoint::showColorPoint() {
//	cout << color << ":";
//	showPoint();
//}
//
//bool ColorPoint::equals(ColorPoint p) {
//	if (x == p.x && y == p.y && color == p.color)
//		return true;
//	else return false;
//}
//
//int main() {
//
//	Point p;
//	p.set(2, 3);
//	p.showPoint();
//
//	//p.x = 5; //접근 불가
//
//	return 0;
//}