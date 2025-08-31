
#include "Card.h"

//정적 변수는 클래스 외부에서 한번만 정의함
int Card::serialNum = 1000;
/*
Card::Card() {
	serialNum++;
	cardNumber = serialNum;
}
Card::Card(string name) {
	serialNum++;
	cardNumber = serialNum;  
	this->name = name;
}
*/

//생성자 초기화 목록 사용
Card::Card() : cardNumber(++serialNum) {}
Card::Card(string name) : name(name), cardNumber(++serialNum) {}

string Card::getName() { return name; }
int Card::getCardNumber() { return cardNumber; }

