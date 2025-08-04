#include <iostream>
#include "Alcohol.h"

//��� ���� ���
Alcohol::Alcohol(string name, int price, int quantity, float alcper) :
	Drink(name, price, quantity), alcper(alcper) {
}

void Alcohol::printTitle() {
	cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
}

void Alcohol::printData() {
	cout << name << "(" << alcper << ")\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

Alcohol::~Alcohol() {
	//cout << "Alcohol �Ҹ��� ȣ���\n";
}
