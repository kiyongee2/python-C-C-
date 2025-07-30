//#include <iostream>
//#include "Card.h"
//
//int main()
//{
//	//객체 배열로 구현
//	const int SIZE = 3;
//	
//	/*Card cardList[SIZE] = {
//		Card("임시연"),
//		Card("우상영"),
//		Card("신유진")
//	};*/
//
//	//사용자 입력으로 카드 정보 설정
//	Card cardList[SIZE]; //클래스에 기본 생성자 명시
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //고객이름
//		cout << i + 1 << "번째 고객 이름 입력: ";
//		getline(cin, name);
//		cardList[i].setName(name);
//	}
//
//	cout << "========== 카드 정보 출력 ==========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cout << "고객 이름: " << cardList[i].getName()
//		     << ", 카드 번호: " << cardList[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}