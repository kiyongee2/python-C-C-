#include "Drink.h"

Drink::Drink(string name, int price, int quantity) :
	name(name), price(price), quantity(quantity) {
}

//금액 = 가격 x 수량
int Drink::calcPrice() {
	return price * quantity;
}

void Drink::printTitle() {
	cout << "상품명\t가격\t수량\t금액\n";
}

void Drink::printData() {
	cout << name << "\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}

Drink::~Drink() {
	//cout << "Drink 소멸자 호출됨\n" << endl;
}
