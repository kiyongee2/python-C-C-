#include <iostream>
#include "Card.h"

int main()
{
	const int SIZE = 3;
	Card cardList[SIZE];

	for (int i = 0; i < SIZE; i++) {
		string name;
		int typeInput;

		cout << i + 1 << "��° �� �̸� �Է�: ";
		getline(cin, name);

		cout << "ī�� ���� ���� (0:�ſ�, 1:üũ, 2:����): ";
		cin >> typeInput;
		cin.ignore(); // �Է� ���� ����

		cardList[i] = Card(name, static_cast<CardType>(typeInput));
	}

	cout << "\n========== ī�� ���� ��� ==========\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "�� �̸�: " << cardList[i].getName()
			<< ", ī�� ��ȣ: " << cardList[i].getCardNumber()
			<< ", ī�� ����: " << cardList[i].getCardTypeString()
			<< endl;
	}

	return 0;
}
