#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Bus.h"

using namespace std;

class Person {
private:
	string name;  //�̸�
	int money;    //���� ��

public:
	Person(string name, int money);

	void takeBus(Bus& bus); //�Ű�����-���� ��ü ����(������)
	void displayInfo();

};
#endif 
