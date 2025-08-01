#include "Card.h"

int Card::serialNum = 1000;

Card::Card() {}

Card::Card(string name, CardType type) {
	this->name = name;
	this->type = type;
	serialNum++;
	cardNumber = serialNum;
}

void Card::setName(string name) {
	this->name = name;
}

void Card::setCardType(CardType type) {
	this->type = type;
}

string Card::getName() { return name; }
int Card::getCardNumber() { return cardNumber; }
CardType Card::getCardType() { return type; }

string Card::getCardTypeString() {
	switch (type) {
	case CREDIT: return "신용카드";
	case CHECK: return "체크카드";
	case PREPAID: return "선불카드";
	default: return "알 수 없음";
	}
}
