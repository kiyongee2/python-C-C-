#include "Drink.h"

Drink::Drink(string name, int price, int quantity) :
	name(name), price(price), quantity(quantity) {
}

//�ݾ� = ���� x ����
int Drink::calcPrice() {
	return price * quantity;
}

void Drink::printTitle() {
	cout << "��ǰ��\t����\t����\t�ݾ�\n";
}

void Drink::printData() {
	cout << name << "\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

Drink::~Drink() {
	//cout << "Drink �Ҹ��� ȣ���\n" << endl;
}
