#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
private:
	static int serialNum;  //모든 객체가 공유하는 정적 변수 
	string name;    //고객 이름
	int cardNumber; //개별 카드 번호

public:
	Card(); //기본 생성자
	Card(string name);

	int getCardNumber();
	void printInfo();
};
#endif
