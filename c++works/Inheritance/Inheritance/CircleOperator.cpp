//#include <iostream>
//#include <string>
//#define PI 3.1415
//using namespace std;
//
////������ �����ε�
//class Circle {
//	double radius;
//public:
//	Circle(double radius) : radius(radius) {}
//
//	double getRadius() { return radius; }
//	double getArea() { return PI * radius * radius; }
//	bool operator >= (Circle c);
//};
//
//bool Circle::operator>=(Circle c) {
//	if (this->radius >= c.radius)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	Circle c1(4.1), c2(10.7);
//
//	cout << "��1�� ������: " << c1.getRadius() << endl;
//	cout << "��1�� ����: " << c1.getArea() << endl;
//	cout << "��2�� ������: " << c2.getRadius() << endl;
//	cout << "��2�� ����: " << c2.getArea() << endl;
//
//	if (c1 >= c2)
//		cout << "��ü c1�� c2���� ũ��.\n";
//	else
//		cout << "��ü c2�� c1���� ũ��.\n";
//
//	return 0;
//}