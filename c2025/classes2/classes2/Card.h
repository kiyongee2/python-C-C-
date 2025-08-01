#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
private:
	static int serialNum;  //��� ��ü�� �����ϴ� ���� ���� 
	string name;    //�� �̸�
	int cardNumber; //���� ī�� ��ȣ

public:
	Card(); //�⺻ ������
	Card(string name);

	int getCardNumber();
	void printInfo();
};
#endif
