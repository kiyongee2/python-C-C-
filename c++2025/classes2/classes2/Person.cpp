
#include "Person.h"

Person::Person(string name, int money) {
	this->name = name;
	this->money = money;
}

void Person::takeBus(Bus& bus) {
	if (money < bus.getFEE()) {
		cout << "잔액이 부족합니다.\n";
	}
	else {
		bus.take();
		money -= bus.getFEE();
	}
}

void Person::displayInfo() {
	cout << name << ": 잔액 " << money << "원\n";
}

