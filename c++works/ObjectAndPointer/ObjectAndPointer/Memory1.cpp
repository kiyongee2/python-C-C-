#include <iostream>
using namespace std;

int main()
{
	//������ ���� ���� �Ҵ�
	int* p;
	p = new int; //���� ������ ���� 
	if (p == NULL) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�\n";
		return 0;
	}

	*p = 5;
	cout << "*p=" << *p << endl;

	delete p;  //�޸� �ݳ�

	//������ �迭 ���� �Ҵ�
	int* pa;
	pa = new int[10];  //���� �迭 ����
	if (pa == NULL) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�\n";
		return 0;
	}

	for (int i = 0; i < 10; i++) {
		*(pa + i) = i;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << "(*pa + " << i << ")----->" << *(pa + i) << endl;
	}

	delete[] pa;  //�޸� �ݳ�

	return 0;
}