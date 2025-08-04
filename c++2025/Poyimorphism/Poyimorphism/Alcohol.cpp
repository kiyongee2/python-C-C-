#include <iostream>
#include "Alcohol.h"

//멤버 변수 상속
Alcohol::Alcohol(string name, int price, int quantity, float alcper) :
	Drink(name, price, quantity), alcper(alcper) {
}

void Alcohol::printTitle() {
	cout << "상품명(도수[%])\t가격\t수량\t금액\n";
}

void Alcohol::printData() {
	cout << name << "(" << alcper << ")\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

Alcohol::~Alcohol() {
	//cout << "Alcohol 소멸자 호출됨\n";
}
