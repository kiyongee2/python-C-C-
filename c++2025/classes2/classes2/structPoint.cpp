//#include <iostream>
//using namespace std;
//
//struct Point {
//	int x, y;
//
//	//������ �ʱ�ȭ ���
//	Point(int x = 0, int y = 0) : x(x), y(y){}
//};
//
////��ǥ �Է� �Լ�
//Point inputPoint() {
//	Point p;  //��ü ����(�⺻ ������)
//	cout << "��ǥ�� �Է��ϼ���(x, y): ";
//	cin >> p.x >> p.y;
//	return p; //��ȯ�� �����
//}
//
////��ǥ ��� �Լ�
////Point& - ��ü ������ ���(ȣ��� ���� �Ͼ�� ����)
//void printPoint(Point& p) {
//	cout << "�Է� ��ǥ = (" << p.x << ", " << p.y << ")\n";
//}
//
//int main()
//{
//	Point p1;  //����ü ���� ����
//
//	//�Է� �Լ� ȣ��
//	p1 = inputPoint();
//
//	//��� �Լ� ȣ��
//	printPoint(p1);
//
//	return 0;
//}
