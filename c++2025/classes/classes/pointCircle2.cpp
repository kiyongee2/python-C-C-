//#include <iostream>
//using namespace std;
//
////��ü �� ����
//class Point {
//private:
//	int x;
//	int y;
//public:
//	//������ �Լ�
//	void setX(int x) {
//		this->x = x;
//	}
//
//	void setY(int y) {
//		this->y = y;
//	}
//
//	//������ �Լ�
//	int getX() { return x; }
//	int getY() { return y; }
//};
//
//class Circle {
//private:
//	Point center;  //�߽���(Point Ŭ���� ����)
//	int radius;    //������
//	const double PI = 3.141592; //������ ���
//
//public:
//	Circle(int radius) {
//		center = Point();
//		this->radius = radius;
//	}
//
//	//��ǥ �Է�
//	void setCenter(int x, int y) {
//		center.setX(x);
//		center.setY(y);
//	}
//
//	//���� ����
//	double getArea() { return PI * radius * radius; }
//
//	//���� ����
//	void displayInfo() {
//		cout << "���� �߽�(" << center.getX() << ", " << center.getY() <<
//			"), ������: " << radius << endl;
//	}
//};
//
//
//int main()
//{
//	Circle c1(5); //���� ��ü ����
//	c1.setCenter(2, 3);
//
//	c1.displayInfo(); //���� ���� ��� �Լ� ȣ��
//	cout << "���� ����: " << c1.getArea() << endl;
//	cout << "-------------------------------\n";
//
//	return 0;
//}
