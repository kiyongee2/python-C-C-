//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//������ �迭 ����
//	int a[4] = { 10, 20, 30, 40 };
//
//	//������ ������ ����
//	int* pa;
//
//	cout << "a[0]: " << a[0] << endl;
//	cout << "a[0]�� �޸� ����: " << &a[0] << endl;
//	cout << "�迭�� �̸� a + 0: " << a << endl;
//
//	cout << "a[1]: " << a[1] << endl;
//	cout << "a[1]�� �޸� ����: " << &a[1] << endl;
//	cout << "�迭�� �̸� a + 1: " << a + 1 << endl;
//	cout << "======================================\n";
//
//	//�ڷ����� ũ��
//	cout << "a[4]: " << sizeof(a) << "byte" << endl;
//	cout << "pa: " << sizeof(pa) << "byte" << endl;
//	cout << "======================================\n";
//
//	pa = a; //&a[0], a�� �����ּҸ� ����
//
//	for (int i = 0; i < size(a); i++) 
//	{
//		cout << pa + i << ": " << * (pa + i) << endl;
//	}
//
//	return 0;
//}
