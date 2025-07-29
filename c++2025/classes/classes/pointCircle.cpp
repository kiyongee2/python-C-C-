#include <iostream>
using namespace std;

//��ü �� ����
class Point {
private:
	int x;
	int y;
public:
	//������
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	//������ �Լ�
	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
private:
	Point center;  //�߽���(Point Ŭ���� ����)
	int radius;    //������
	const double PI = 3.141592; //������ ���

public:
	//������ �ʱ�ȭ ���
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

	/*Circle(int x, int y, int radius) {
		center = Point(x, y);
		this->radius = radius;
	}*/

	//���� ����
	double getArea() { return PI * radius * radius; }

	//���� ����
	void displayInfo() {
		cout << "���� �߽�(" << center.getX() << ", " << center.getY() <<
			"), ������: " << radius << endl;
	}
};


int main()
{
	Circle c1(2, 3, 5); //���� ��ü ����

	c1.displayInfo(); //���� ���� ��� �Լ� ȣ��
	cout << "���� ����: " << c1.getArea() << endl;
	cout << "-------------------------------\n";

	Circle c2(10, 10, 10);
	c2.displayInfo();
	cout << "���� ����: " << c2.getArea() << endl;
	
	return 0;
}

//������- �ʱ�ȭ ���
//�⺻ �Ű����� - x, y ���� ���� ������ �⺻ 0�� ���޵�
//Point(int x = 0, int y = 0) : x(x), y(y){}
//Circle(int x, int y, int radius) : center(x, y), radius(radius){}