//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//
//public:
//	Point(int x, int y) : x(x), y(y) {}
//
//	void print() {
//		cout << "x = " << x << ", y = " << y << endl;
//	}
//
//	//���ϱ� ���� �Լ�
//	Point operator+(Point p) {
//		x += p.x;
//		y += p.y;
//		return Point(x, y);
//	}
//};
//
//int main()
//{
//	//�� ��ü
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	p1.print();
//	p2.print();
//
//	//���ϱ� ����
//	Point p3 = p1 + p2;
//
//	return 0;
//}
