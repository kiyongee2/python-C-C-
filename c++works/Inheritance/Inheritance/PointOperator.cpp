//#include <iostream>
//#include <string>
//using namespace std;
//
////������ �����ε�
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	void print() {
//		cout << "x=" << x << ", y=" << y << endl;
//	}
//
//	//���ϱ� ���� �Լ�
//	Point operator+(Point p) {
//		x = x + p.x;
//		y = y + p.y;
//		return Point(x, y);
//	}
//};
//
//
//int main()
//{
//	//�� ��ü ����
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	p1.print();
//	p2.print();
//
//	//��ü ���ϱ�
//	Point p3 = p1 + p2;
//
//	p3.print();
//
//	return 0;
//}