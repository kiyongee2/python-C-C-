#include <iostream>
#include <climits>

using namespace std;

int main() {
	//std::cout << "Hello, world!" << std::endl;
	//cout << "Hello, World!" << endl;
	cout << "Hello, world\n";

	int a;
	a = 4;

	int b = 3;

	cout << "a=" << a << ", b=" << b << endl;

	float c = 3.14;
	int d = 3.14;

	cout << "c=" << c << ", d=" << d << endl;

	// ���� ������
	int num = 65;  //�ƽ�Ű �ڵ尪
	char ch = num;
	int ch2 = 'A';

	cout << "ch=" << ch << endl;
	cout << "ch2=" << ch2 << endl;

	// bool - 0�� �ƴϸ� ��� 1
	bool b1 = 0;
	bool b2 = 1;
	bool b3 = 10;

	cout << b1 << " "<< b2 << " "<< b3 << endl;
	return 0;
}