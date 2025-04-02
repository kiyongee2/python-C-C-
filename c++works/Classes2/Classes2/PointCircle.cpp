//#include <iostream>
//#define M_PI 3.141592
//using namespace std;
//
//// Point�� ����ü���� Ŭ������ ��ȯ
//class Point {
//private:
//    int x;
//    int y;
//
//public:
//    // ������: �ʱ�ȭ ��� ���
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//
//    // getter �޼���
//    int getX() { return x; }
//    int getY() { return y; }
//
//    // �� �� �Ÿ� ��� �޼��� (������ �߰� ���)
//    /*double distanceTo(const Point& other) const {
//        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
//    }*/
//};
//
//class Circle {
//private:
//    Point center; // �߽���(���� Point Ŭ���� ���)
//    int radius;   // ������
//
//public:
//    // ������: �ʱ�ȭ ��� ���
//    Circle(int x, int y, int radius) : center( x, y ), radius(radius) {}
//
//    // ���� ���� ���
//    double getArea(){
//        return M_PI * radius * radius; // math.h�� M_PI ���
//    }
//
//    // ���� ���� ���
//    void showInfo(){
//        cout << "���� �߽���(" << center.getX() << ", " << center.getY()
//            << ")�̰�, �������� " << radius << "�Դϴ�." << endl;
//    }
//};
//
//int main() {
//    Circle c1(2, 3, 5);  // ���� �� ����
//    Circle c2(10, 10, 10); // ū �� ����
//
//    cout << "*************** ���� ���� ***************\n";
//    c1.showInfo();
//    cout << "���� ����: " << c1.getArea() << endl;
//
//    c2.showInfo();
//    cout << "���� ����: " << c2.getArea() << endl;
//
//    // �߰� ��� ��� ����
//   /* cout << "�� ���� ��ġ�°�? "
//         << (c1.isOverlapping(c2) ? "��" : "�ƴϿ�") << endl;*/
//    
//    return 0;
//}