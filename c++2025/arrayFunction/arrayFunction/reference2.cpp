//#include <iostream>
//
//using namespace std;
//
//void swapRef2(int*, int*);
//void swapRef(int&, int&);
//void swapVal(int, int);
//int main()
//{
//	int x = 10, y = 20;
//
//	cout << "���� ���� ȣ��\n";
//	swapVal(x, y);
//	cout << "x = " << x << ", y = " << y << endl;
//
//	cout << "������ ���� ȣ��\n";
//	swapRef(x, y);
//	cout << "x = " << x << ", y = " << y << endl;
//
//	/*cout << "�ּ�(������)�� ���� ȣ��\n";
//	swapRef2(&x, &y);
//	cout << "x = " << x << ", y = " << y << endl;*/
//	
//	return 0;
//}
//
//void swapVal(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapRef(int& a, int& b) { //������ ����(����)
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapRef2(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}