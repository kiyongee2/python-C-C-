
//���Ǻ� ������ ��� 
//��������� �ߺ����ǵ��� �ʵ��� ����
#ifndef DOG_H  
#define DOG_H  //��ũ�� ����

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string type;
	int age;

	Dog(string t, int a);

	void dogInfo();
	void bark();
};

#endif  //���Ǻ� ������ ��� ����
