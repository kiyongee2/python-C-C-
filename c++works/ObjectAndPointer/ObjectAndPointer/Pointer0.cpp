//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//������ ���� ����
//	int n = 10;
//
//	cout << n << endl;
//	cout << &n << endl;
//	cout << sizeof(n) << "byte" << endl;
//
//	//������ ������ ����
//	int* pn;
//	pn = &n;
//
//	cout << pn << endl;
//	cout << &pn << endl;
//	cout << *pn << endl;  //������
//	cout << sizeof(pn) << "byte" << endl;
//
//	//������ ����
//	*pn = *pn + 10;
//	cout << *pn << endl;
//
//	cout << "=========================\n";
//
//	//������ �迭 ����
//	int a[4] = { 10, 20, 30, 40 };
//
//	cout << a[0] << endl;
//	cout << &a[0] << endl;  
//	cout << a << endl;    //�迭 �̸��� ���� �ּ��̴�.
//	
//	//������ ������ �迭
//	int* pa;
//	pa = a;   //pa = &a[0]
//
//	cout << pa << endl;
//	cout << *pa << endl;  //*(pa + 0)
//	cout << *(pa + 1) << endl;  
//
//	//��ü ���
//	for (int i = 0; i < size(a); i++) {
//		cout << *(pa + i) << " ";
//	}
//
//	return 0;
//}
