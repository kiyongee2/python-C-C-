#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

// ī�� ���� ������
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
	CardType type;  // ī�� ���� �߰�

public:
	Card();
	Card(string name, CardType type); // ������ ������

	void setName(string name);
	void setCardType(CardType type);   // ī�� ���� ����

	string getName();
	int getCardNumber();
	CardType getCardType();            // ī�� ���� ��ȯ

	string getCardTypeString();        // ���ڿ��� ��ȯ
};

#endif

