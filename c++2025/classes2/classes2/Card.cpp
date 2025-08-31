
#include "Card.h"

//���� ������ Ŭ���� �ܺο��� �ѹ��� ������
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

//������ �ʱ�ȭ ��� ���
Card::Card() : cardNumber(++serialNum) {}
Card::Card(string name) : name(name), cardNumber(++serialNum) {}

string Card::getName() { return name; }
int Card::getCardNumber() { return cardNumber; }

