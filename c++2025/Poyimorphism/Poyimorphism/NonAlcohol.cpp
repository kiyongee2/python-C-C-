#include "NonAlcohol.h"

NonAlcohol::NonAlcohol(string name, int price, int quantity) :
	Drink(name, price, quantity){}

void NonAlcohol::printTitle() {
	cout << "��ǰ��\t����\t����\t�ݾ�\n";
}

void NonAlcohol::printData() {
	cout << name << "\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

NonAlcohol::~NonAlcohol() {
	//cout << "NonAlcohol �Ҹ��� ȣ���\n";
}

