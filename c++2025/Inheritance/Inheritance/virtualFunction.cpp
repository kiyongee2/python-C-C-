#include <iostream>
using namespace std;

class Animal {
public:
	void breathe() {
		cout << "���� ���ϴ�.\n";
	}
	virtual void cry() = 0 {} //���� ���� �Լ�
};

class Cat : public Animal {
public:
	void cry() {
		cout << "��~ ��!\n";
	}
};

int main()
{
	Animal* cat = new Cat;

	cat->breathe();
	cat->cry();

	delete cat;

	return 0;
}