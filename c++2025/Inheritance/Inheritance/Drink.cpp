
#include "Drink.h"

//생성자 초기화 목록
Drink::Drink(string name, int price, int quantity) :
	name(name), price(price), quantity(quantity){ }

//금액 = 가격 x 수량
int Drink::calcPrice() {
	return price * quantity;
}

//주의: static을 붙이지 않음
void Drink::printTitle() {
	cout << "상품명\t가격\t수량\t금액\n";
}

void Drink::printData() {
	cout << name << "\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}
