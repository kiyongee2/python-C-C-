#ifndef DRINK_H
#define DRINK_H
#include <iostream>
using namespace std;

class Drink {
protected:
	string name;   //��ǰ��
	int price;     //����
	int quantity;  //����

public:
	Drink(string name, int price, int quantity);

	int calcPrice();  //�ݾ� ���
	virtual void printTitle();   //���� ���
	virtual void printData();   //������ ���
	virtual ~Drink();    //���� �Ҹ���
};
#endif
