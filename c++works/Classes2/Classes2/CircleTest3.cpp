//#include <iostream>
//using namespace std;
//#define M_PI 3.1415
//
//class Point {
//    int x;
//    int y;
//public:
//    // ������ �߰� (�ʱ�ȭ ��� ���)
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//
//    // getter
//    int getX() { return x; }
//    int getY() { return y; }
//};
//
//class Circle {
//private:
//    Point center;  // �߽���
//    int radius;
//
//public:
//    // �ʱ�ȭ ��� ��� (this ����)
//    Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
//
//    double getArea() {  //���� ����
//    	return M_PI * radius * radius; 
//    }
//
//    void showInfo() {
//        cout << "���� �߽���(" << center.getX() << ", " << center.getY() <<
//            ")�̰�, �������� " << radius << "�Դϴ�." << endl;
//    }
//};
//
//int main() {
//    Circle c1(2, 3, 5);   // ���� �� ����
//    Circle c2(10, 10, 10); // ū �� ����
//
//    cout << "*************** ���� ���� ***************\n";
//	c1.showInfo();
//	cout << "���� ����: " << c1.getArea() << endl;
//
//	c2.showInfo();
//	cout << "���� ����: " << c2.getArea() << endl;
//
//    return 0;
//}