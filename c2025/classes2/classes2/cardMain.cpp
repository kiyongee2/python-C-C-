//#include <iostream>
//#include "Card.h"
//
//int main()
//{
//	//Card 인스턴스 생성
//	Card card1("임시연");
//	Card card2("우상영");
//	Card card3("박상희");
//
//	cout << "카드번호: " << card1.getCardNumber() << endl; //1001
//	cout << "카드번호: " << card2.getCardNumber() << endl; //1002
//	cout << "카드번호: " << card3.getCardNumber() << endl; //1003
//
//	//객체 배열로 구현
//	const int SIZE = 3;
//	/*Card cardList[SIZE] = {
//		Card("임시연"),
//		Card("우상영"),
//		Card("박상희")
//	};*/
//
//	//사용자 입력으로 카드 정보 설정
//	Card cardList[SIZE]; //클래스에 기본 생성자 명시
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //고객이름
//		cout << i + 1 << "번째 고객 이름 입력: ";
//		getline(cin, name);
//		cardList[i] = Card(name);
//	}
//
//	cout << "========== 카드 정보 출력 ==========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cardList[i].printInfo();
//	}
//
//	return 0;
//}