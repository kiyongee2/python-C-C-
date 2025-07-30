#include "Card.h"

//정적 변수는 클래스 외부에서 한번만 정의 해야함
int Card::serialNum = 1000; //기준 번호

Card::Card() {} //기본 생성자

Card::Card(string name) {
	this->name = name;
	serialNum++; //기준 번호 1증가
	cardNumber = serialNum;
}

void Card::setName(string name) {
	this->name = name;
	serialNum++; //기준 번호 1증가
	cardNumber = serialNum;
}

string Card::getName() { return name; }
int Card::getCardNumber() { return cardNumber; }

