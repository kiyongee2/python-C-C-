//��� ���� - Ŭ����
//��� ������ �ߺ� ���ǵ��� �ʵ��� ��
#ifndef DOG_H  //���Ǻ� ������ ��
#define DOG_H  //��ũ�� ����

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	//��� ����
	string type;
	int age;

	Dog(); //�⺻ ������
	Dog(string t, int a); //�Ű����� �ִ� ������
	~Dog();  //�Ҹ��� - ���� ����

	//��� �Լ�
	void dogInfo();
	void bark();
};

#endif  //���Ǻ� ������ ��� ����
