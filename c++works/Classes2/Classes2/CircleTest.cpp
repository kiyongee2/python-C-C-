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
//class Circle {
//private:
//	//�߽���(Point Ŭ���� ����)
//	Point center;  
//	int radius;
//
//public:
//	Circle(int x, int y, int radius) {
//		this->center.setX(x);
//		this->center.setY(y);
//		this->radius = radius;
//	}
//
//	void showInfo() {
//		cout << "���� �߽���(" << center.getX() << ", " << center.getY() <<
//			")�̰�, �������� " << radius << "�Դϴ�." << endl;
//	}
//};
//
//int main()
//{
//	Circle c1(2, 3, 5);  //���� �� ����
//	Circle c2(10, 10, 10); //ū �� ����
//
//	cout << "*************** ���� ���� ***************\n";
//	c1.showInfo();
//	c2.showInfo();
//
//	return 0;
//}
