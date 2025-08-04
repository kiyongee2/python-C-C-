#include <iostream>
#include "NonAlcohol.h"
#include "Alcohol.h"

int main()
{
	//다형성 포인터 배열
	const int SIZE = 3;
	int total = 0;
	Drink* drinks[SIZE];

	//인스턴스 생성
	drinks[0] = new NonAlcohol("커피", 2500, 4);
	drinks[1] = new NonAlcohol("녹차", 3500, 3);
	drinks[2] = new Alcohol("소주", 3000, 2, 14.4f);

	//데이터 출력
	cout << "============ 매출 전표 ==========\n";
	/*for (int i = 0; i < SIZE; i++) {
		drinks[i]->printTitle();
		drinks[i]->printData();
		cout << endl;
	}*/

	//범위 기반 for - auto 사용
	for (auto drink : drinks) {
		drink->printTitle();
		drink->printData();
	}

	//합계 금액
	for (int i = 0; i < SIZE; i++) {
		total += drinks[i]->calcPrice();
	}

	cout << "***** 총 합계 금액 : " << total << "원 *****\n\n";

	//메모리 해제
	for (int i = 0; i < SIZE; i++) {
		delete drinks[i];
	}

	/*Drink* coffee = new NonAlcohol("커피", 2500, 4);
	Drink* soju = new Alcohol("소주", 3500, 2, 14.8f);

	coffee->printTitle();
	coffee->printData();

	soju->printTitle();
	soju->printData();

	delete coffee;
	delete soju;*/

	return 0;
}