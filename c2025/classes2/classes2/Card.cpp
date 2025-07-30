#include "Card.h"

//���� ������ Ŭ���� �ܺο��� �ѹ��� ���� �ؾ���
int Card::serialNum = 1000; //���� ��ȣ

Card::Card() {} //�⺻ ������

Card::Card(string name) {
	this->name = name;
	serialNum++; //���� ��ȣ 1����
	cardNumber = serialNum;
}

void Card::setName(string name) {
	this->name = name;
	serialNum++; //���� ��ȣ 1����
	cardNumber = serialNum;
}

string Card::getName() { return name; }
int Card::getCardNumber() { return cardNumber; }

