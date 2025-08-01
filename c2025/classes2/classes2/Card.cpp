#include <iostream>
#include "Card.h"
using namespace std;

//���� ������ Ŭ���� �ܺο��� �ѹ��� ���� �ؾ���
//ī���ȣ ������ ���� ���� ��ȣ
int Card::serialNum = 1000; 

Card::Card() {} //�⺻ ������

Card::Card(string name) {
	this->name = name;
	serialNum++;        //���� ��ȣ 1����
	cardNumber = serialNum;
}

int Card::getCardNumber() { return cardNumber; }

void Card::printInfo() {
	cout << "�� �̸�: " << name
		<< ", ī�� ��ȣ: " << cardNumber << endl;
}


