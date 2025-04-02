#include <iostream>
#include <string>
using namespace std;

/*
	Point ����ü�� ����Ͽ� ��ǥ�� �Է¹ް� ����ϴ� ���α׷�
	Point�� ������� public�̴�.
*/
struct Point {
	int x, y;

	//������ : �ʱ�ȭ ���
	Point(int x = 0, int y = 0) : x(x), y(y){}
	//Point() : x(0) , y(0) {} //����� �ʱ�ȭ
};

Point inputPoint() {
	Point p;  // ����(�⺻ ������)
	cout << "��ǥ�� �Է����ּ���(x, y): ";
	cin >> p.x >> p.y;  
	return p; //��ȯ�� ����(�ӽ� ��ü ����)
}

/* 
   * �Լ��� �Ű������� ��ü ����(����)
     const Point p - ������ ����(���� �߻�)
     const Point& p - ���� ��ü p�� �޸� �ּҷ� ����
*/
void printPoint(const Point& p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << "," << p.y << ")\n";
}

int main()
{
	Point p1;
	p1 = inputPoint();  //�ӽ� ��ü���� p1�� ����
	printPoint(p1, "�Է� ��ǥ"); //p1���� �Լ� �Ű����� p�� ����

	return 0;
}
