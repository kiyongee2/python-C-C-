//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//������ ���� ���� �Ҵ�
//	/*int* p;
//	p = new int; */ //���� ������ ���� 
//	int* p = new int;
//	if (p == NULL) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�\n";
//		return 0;
//	}
//
//	*p = 5;
//	cout << "*p=" << *p << endl;
//
//	delete p;  //�޸� �ݳ�
//
//	cout << "===================\n";
//
//	/*int* pa;
//	pa = new int[10];*/  //���� �迭 ����
//	int* pa = new int[5];
//
//	if (pa == NULL) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�\n";
//		return 0;
//	}
//
//	for (int i = 0; i < 5; i++) {
//		*(pa + i) = i + 1;
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		cout << "(*pa + " << i << ")----->" << *(pa + i) << endl;
//	}
//
//	delete [] pa;  //�޸� �ݳ�
//
//	//�Ǽ��� �迭 ���� �Ҵ�
//	double* arr = new double[3];
//	if (arr == NULL) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�\n";
//		return 0;
//	}
//	arr[0] = 1.1;
//	arr[1] = 2.1;
//	arr[2] = 3.1;
//
//	cout << "arr[0] = " << arr[0] << endl;
//
//	arr = arr + 1; //���� ��ġ ����
//
//	cout << "arr[0] = " << arr[0] << endl;
//
//	arr = arr - 1;
//
//	delete[] arr;
//
//	return 0;
//}