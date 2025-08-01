#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

// 카드 종류 열거형
enum CardType {
	CREDIT,
	CHECK,
	PREPAID
};

class Card {
private:
	static int serialNum;
	string name;
	int cardNumber;
	CardType type;  // 카드 종류 추가

public:
	Card();
	Card(string name, CardType type); // 수정된 생성자

	void setName(string name);
	void setCardType(CardType type);   // 카드 종류 설정

	string getName();
	int getCardNumber();
	CardType getCardType();            // 카드 종류 반환

	string getCardTypeString();        // 문자열로 반환
};

#endif

