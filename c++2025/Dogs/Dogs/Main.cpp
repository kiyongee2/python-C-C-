#include "Dog.h"

int main()
{
	Dog dog1("������", 5);

	cout << "**** ������ ���� ****" << endl;
	cout << "������ ����: " << dog1.getType() << endl;
	cout << "������ ����: " << dog1.getAge() << endl;

	dog1.bark();

	return 0;
}
