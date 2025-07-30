#include <iostream>
#include "Person.h"

//생성자 - 초기화 목록
Person::Person(string name, int money) : 
					name(name), money(money) {}

void Person::takeBus(Bus& bus) {
	if (money >= bus.getFEE()) {
		bus.take();
		money -= bus.getFEE();  //잔액 차감
	}
	else {
		cout << "잔액이 부족합니다!!\n";
	}
}

void Person::displayInfo() {
	cout << name << ": 잔액 " << money << "원\n";
}
