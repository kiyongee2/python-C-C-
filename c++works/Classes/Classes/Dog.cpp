#include "Dog.h"

Dog::Dog() { //�⺻ ������
	type = "������";
	age = 1;
	cout << "��ü�� �����մϴ�\n";
}

Dog::~Dog() { //�Ҹ���
	cout << "��ü�� �Ҹ�˴ϴ�..\n";
}
Dog::Dog(string t, int a) {  //�Ű������� �ִ� ������
	type = t;
	age = a;
}
void Dog::dogInfo()
{
	cout << "������ ���� : " << type << endl;
	cout << "������ ���� : " << age << "��" << endl;
}
void Dog::bark()
{
	cout << "��~ ��~\n";
}

