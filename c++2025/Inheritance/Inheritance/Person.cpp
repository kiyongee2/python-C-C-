#include "Person.h"

Person::Person(string name) {
	this->name = name;
}

void Person::greet() {
	cout << "�ȳ��ϼ���. ����: " << name << endl;
}

void Person::displayInfo() {
	cout << "Person name: " << name << endl;
}

