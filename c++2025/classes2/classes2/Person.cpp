
#include "Person.h"

Person::Person(string name, int money) {
	this->name = name;
	this->money = money;
}

void Person::takeBus(Bus& bus) {
	if (money < bus.getFEE()) {
		cout << "�ܾ��� �����մϴ�.\n";
	}
	else {
		bus.take();
		money -= bus.getFEE();
	}
}

void Person::displayInfo() {
	cout << name << ": �ܾ� " << money << "��\n";
}

