//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//���� ������ ����
//	int n = 3;
//	int* p;
//
//	p = &n;
//
//	cout << n << endl;  //3
//	cout << *p << endl; //3
//
//	*p = *p + 10;
//	cout << *p << endl; //13
//	cout << n<< endl; //13
//	cout << "===============\n";
//
//	//���� ������ ���� - new Ű���� ���
//	int n2 = 4;
//	int* ptr;
//	ptr = new int;
//	if (ptr == nullptr) { //C��� - NULL, C++ - nullptr
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
//		return -1;
//	}
//
//	*ptr = 5;
//
//	cout << *ptr << endl;  //5
//	cout << *ptr + 10 << endl;  //10
//
//	delete ptr;  //�޸� ����
//
//	cout << "========================\n";
//
//	//������ �迭 ���� �Ҵ�
//	int* pa;
//	pa = new int[10];
//
//	//�� �Ҵ�
//	pa[0] = 1;
//	pa[1] = 2;
//	pa[2] = 3;
//
//	//�� ���
//	cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;
//	cout << *pa << " " << *(pa + 1) << " " << *(pa + 2) << endl;
//
//	//1���� 10���� ����
//	for (int i = 0; i < 10; i++) {
//		//pa[i] = i + 1;
//		*(pa + i) = i + 1;
//	}
//
//	//1���� 10���� ���
//	for (int i = 0; i < 10; i++) {
//		//cout << pa[i] << " ";
//		cout << *(pa + i) << " ";
//	}
//
//	delete[] pa;  //�޸� ����(�ݳ�)
//
//	return 0;
//}