#ifndef DOG_H  //���Ǻ� ������ �� ����
#define DOG_H  //������� �ߺ����� �ʵ��� ��ũ�� �̸� ����
#include <string>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);
	~Dog(){}
	 
	string getType();
	int getAge();
	void bark();
};
#endif  //���Ǻ� ������ �� ����
