#include <iostream>
using namespace std;

/*
	������ ����* ������;
*/

int main()
{
	//������ ����* ������;
	int* ptr;

	cout << &ptr << endl;  //000000E547AFFC08

	//�ּ� ������ &�� �̿��ؼ� �ٸ� ������ �ּҸ� �Ҵ�
	int num = 3;

	ptr = &num;

	cout << num << endl;  //3
	cout << *ptr << endl; //3, ������

	*ptr += 10; //*ptr = *ptr + 10;
	cout << *ptr << endl; //13
	cout << num << endl;  //13
	cout << "===============\n";

	return 0;
}