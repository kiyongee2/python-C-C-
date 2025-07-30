#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
private:
	//��� ��ü�� �����ϴ� ���� ����
	static int serialNum;  
	string name;    //�� �̸�
	int cardNumber; //���� ī�� ��ȣ

public:
	Card(); //�⺻ ������
	Card(string name);

	void setName(string name); //�̸� �Է�
	string getName();
	int getCardNumber();
};
#endif
