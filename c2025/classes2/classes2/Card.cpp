#include <iostream>
#include "Card.h"
using namespace std;

//정적 변수는 클래스 외부에서 한번만 정의 해야함
//카드번호 생성을 위한 기준 번호
int Card::serialNum = 1000; 

Card::Card() {} //기본 생성자

Card::Card(string name) {
	this->name = name;
	serialNum++;        //기준 번호 1증가
	cardNumber = serialNum;
}

int Card::getCardNumber() { return cardNumber; }

void Card::printInfo() {
	cout << "고객 이름: " << name
		<< ", 카드 번호: " << cardNumber << endl;
}


