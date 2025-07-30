#include <iostream>
#include "Person.h"

//������ - �ʱ�ȭ ���
Person::Person(string name, int money) : 
					name(name), money(money) {}

void Person::takeBus(Bus& bus) {
	if (money >= bus.getFEE()) {
		bus.take();
		money -= bus.getFEE();  //�ܾ� ����
	}
	else {
		cout << "�ܾ��� �����մϴ�!!\n";
	}
}

void Person::displayInfo() {
	cout << name << ": �ܾ� " << money << "��\n";
}
