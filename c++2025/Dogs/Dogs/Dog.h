//���Ǻ� ������ ��� ����
#ifndef DOG_H  //��������� �ߺ� ���ǵ��� �ʵ��� ��
#define DOG_H  //��ũ�� �̸� ����

#include <iostream>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);
	~Dog() {}

	string getType();
	int getAge();
	void bark();
};

#endif // ���Ǻ� ������ ��� ����

