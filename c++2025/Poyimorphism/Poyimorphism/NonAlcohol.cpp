#include "NonAlcohol.h"

NonAlcohol::NonAlcohol(string name, int price, int quantity) :
	Drink(name, price, quantity){}

void NonAlcohol::printTitle() {
	cout << "상품명\t가격\t수량\t금액\n";
}

void NonAlcohol::printData() {
	cout << name << "\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

NonAlcohol::~NonAlcohol() {
	//cout << "NonAlcohol 소멸자 호출됨\n";
}

