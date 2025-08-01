#include <iostream>
#include "Card.h"

int main()
{
	const int SIZE = 3;
	Card cardList[SIZE];

	for (int i = 0; i < SIZE; i++) {
		string name;
		int typeInput;

		cout << i + 1 << "번째 고객 이름 입력: ";
		getline(cin, name);

		cout << "카드 종류 선택 (0:신용, 1:체크, 2:선불): ";
		cin >> typeInput;
		cin.ignore(); // 입력 버퍼 제거

		cardList[i] = Card(name, static_cast<CardType>(typeInput));
	}

	cout << "\n========== 카드 정보 출력 ==========\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "고객 이름: " << cardList[i].getName()
			<< ", 카드 번호: " << cardList[i].getCardNumber()
			<< ", 카드 종류: " << cardList[i].getCardTypeString()
			<< endl;
	}

	return 0;
}
