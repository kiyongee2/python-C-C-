#include <iostream>
#include "NonAlcohol.h"
#include "Alcohol.h"

int main()
{
	//������ ������ �迭
	const int SIZE = 3;
	int total = 0;
	Drink* drinks[SIZE];

	//�ν��Ͻ� ����
	drinks[0] = new NonAlcohol("Ŀ��", 2500, 4);
	drinks[1] = new NonAlcohol("����", 3500, 3);
	drinks[2] = new Alcohol("����", 3000, 2, 14.4f);

	//������ ���
	cout << "============ ���� ��ǥ ==========\n";
	/*for (int i = 0; i < SIZE; i++) {
		drinks[i]->printTitle();
		drinks[i]->printData();
		cout << endl;
	}*/

	//���� ��� for - auto ���
	for (auto drink : drinks) {
		drink->printTitle();
		drink->printData();
	}

	//�հ� �ݾ�
	for (int i = 0; i < SIZE; i++) {
		total += drinks[i]->calcPrice();
	}

	cout << "***** �� �հ� �ݾ� : " << total << "�� *****\n\n";

	//�޸� ����
	for (int i = 0; i < SIZE; i++) {
		delete drinks[i];
	}

	/*Drink* coffee = new NonAlcohol("Ŀ��", 2500, 4);
	Drink* soju = new Alcohol("����", 3500, 2, 14.8f);

	coffee->printTitle();
	coffee->printData();

	soju->printTitle();
	soju->printData();

	delete coffee;
	delete soju;*/

	return 0;
}