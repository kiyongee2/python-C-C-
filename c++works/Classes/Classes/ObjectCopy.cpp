//#include <iostream>
//#include <string>
//using namespace std;
//
////Pont ����ü ���� - ��ü ����
//struct Point {
//	int x, y;
//	/*Point(int xx = 0, int yy = 0) {
//		x = xx;
//		y = yy;
//	};*/ //�ʱ�ȭ 1
//	Point(int xx = 0, int yy = 0) : x(xx), y(yy) {}; //�ʱ�ȭ 2
//	
//};
//
//Point inputPoint() {
//	Point p;
//	cout << "��ǥ�� �Է����ּ���(x, y): ";
//	cin >> p.x >> p.y;
//	return p;
//}
//
////�Լ��� �Ű������� ��ü ����(����)
//void printPoint(Point p, const char* str = "Point") {
//	cout << str << "=(" << p.x << "," << p.y << ")\n";
//}
//
//int main()
//{
//	Point a;
//	a = inputPoint();  //�Լ��� ��ü�� ��ȯ(����)
//	printPoint(a, "�Է� ��ǥ");
//
//	return 0;
//}