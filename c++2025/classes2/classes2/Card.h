#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card {
	static int serialNum; //ī���ȣ ������ ���� ���ع�ȣ
	string name;     //�� �̸�
	int cardNumber;  //ī�� ��ȣ

public:
	Card();  //�⺻ ������
	Card(string name);

	string getName();
	int getCardNumber();
};
#endif

