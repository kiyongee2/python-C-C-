#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:  //��ӹ޴� Ŭ������ ���� ���
	string name;  //�̸�

public:
	Person(string name);  //������

	void greet();  //�λ��ϴ�
	void displayInfo(); //����� ���� ���
};
#endif 

