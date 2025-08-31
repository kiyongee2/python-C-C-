#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card {
	static int serialNum; //카드번호 생성을 위한 기준번호
	string name;     //고객 이름
	int cardNumber;  //카드 번호

public:
	Card();  //기본 생성자
	Card(string name);

	string getName();
	int getCardNumber();
};
#endif

