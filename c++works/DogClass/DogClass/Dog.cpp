
#include "Dog.h"

//������ �ʱ�ȭ
Dog::Dog(string t, int a)
{
	type = t;
	age = a;
}

void Dog::dogInfo()
{
	cout << "������ ���� : " << type << endl;
	cout << "������ ���� : " << age << "��" << endl;
}

