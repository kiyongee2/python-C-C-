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
//	//Point&(������)�� ����Ͽ� ������ �����ϰ� ���纻�� ������
//	Point operator+(Point& p) { //���ϱ� ������
//		return Point(x + p.x, y + p.y);
//	}
//
//	Point operator-(Point& p) { //���� ������
//		return Point(x - p.x, y - p.y);
//	}
//};
//
//int main()
//{
//	//�� ��ü
//	Point p1(1, 2);
//	Point p2(3, 4);
//
//	p1.print(); //��� �Լ� ȣ��
//	p2.print();
//
//	//��ü ���ϱ�
//	Point p3 = p1 + p2;
//	p3.print();
//
//	//��ü ����
//	Point p4 = p2 - p1;
//	p4.print();
//
//	return 0;
//}
