//#include <iostream>
//
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();  //�Ҹ���
//
//	double getArea();
//};
//
////������
//Circle::Circle() : Circle(1) {}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//
////��ü�� ������ �ݴ�� �Ҹ��
//Circle::~Circle() {
//	cout << "������ " << radius << " �� �Ҹ�" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main_class()
//{
//	Circle c1;
//	//c1.radius = 3;
//
//	double area = c1.getArea();
//
//	cout << "c1 �� ������ " << area << endl;
//
//	Circle c2(3);
//	area = c2.getArea();
//
//	cout << "c2 �� ������ " << area << endl;
//
//	return 0;
//}