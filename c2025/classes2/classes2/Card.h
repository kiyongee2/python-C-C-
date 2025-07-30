#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
private:
	//모든 객체가 공유하는 정적 변수
	static int serialNum;  
	string name;    //고객 이름
	int cardNumber; //개별 카드 번호

public:
	Card(); //기본 생성자
	Card(string name);

	void setName(string name); //이름 입력
	string getName();
	int getCardNumber();
};
#endif
