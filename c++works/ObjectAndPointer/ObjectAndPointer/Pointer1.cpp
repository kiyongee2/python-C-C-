//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//���� ����� �ʱ�ȭ
//	char c = 'A';
//	int n = 10;
//
//	//������ ����� �ʱ�ȭ
//	char* pc = &c;  //���� c�� �ּ� ����
//	int* pn = &n;   //���� n�� �ּ� ����
//
//	//���� �� ���
//	cout << "c: " << c << endl;
//	cout << "n: " << n << endl;
//
//	//�����Ͱ� ����Ű�� �� ���
//	cout << "*pc: " << *pc << endl;
//	cout << "*pn: " << *pn << endl;
//
//	//�ڷ����� ũ��
//	cout << "c: " << sizeof(c) << "byte" << endl;
//	cout << "n: " << sizeof(n) << "byte" << endl;
//
//	//�����ʹ� ��� �ڷ����� 8byte�� �����ϴ�.
//	cout << "pc: " << sizeof(pc) << "byte" << endl;
//	cout << "pn: " << sizeof(pn) << "byte" << endl;
//
//	cout << "==================\n";
//
//	//������ ������*�� ���� ������ �����
//	*pc = 'B';
//	*pn = 11;
//
//	cout << "c: " << c << endl;
//	cout << "n: " << n << endl;
//
//	cout << "*pc: " << *pc << endl;
//	cout << "*pn: " << *pn << endl;
//
//	return 0;
//}
