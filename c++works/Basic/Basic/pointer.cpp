/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 20

using namespace std;

int main()
{
	int val = 3;
	//������ - �޸� �ּҿ� ������ �̸��� ����, �ּҸ� �����ϴ� ����
	//���� ������, ���� ���� ������
	cout << &val << endl; 

	int a = 6;
	int* b;
	b = &a;

	cout << "a�� �� " << a << endl;
	cout << "*b�� �� " << *b << endl;

	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;

	*b = *b + 1;
	cout << "a�� �� " << a << endl;

	// new ������
	int* p = new int;
	delete p;

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << '\n';

	p3 = p3 + 1;  //������ ����
	cout << "p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << " .\n ";

	p3 = p3 - 1;
	delete[] p3;

	// ������ �迭
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��ϼ���\n";
	cin >> animal;

	// ���� �޸�(����ð�-runtime ����)
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "�Է��Ͻ� ���� �̸��� �����߽��ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ�" 
		<< (int*)animal << " �Դϴ�. \n";
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ�"
		<< (int*)ps << " �Դϴ�. \n";

	return 0;
}*/