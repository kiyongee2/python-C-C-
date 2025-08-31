//#include <string>
//#include "Card.h"
//
//int main() {
//	const int SIZE = 3;
//
//	/*Card cardList[SIZE] = {
//		Card("신유진"),
//		Card("우상영"),
//		Card("김선화")
//	};*/
//
//	//사용자 입력
//	Card cardList[SIZE]; //기본 생성자로 객체 배열 생성
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //고객 이름
//		cout << i + 1 << "번째 고객 이름 입력: ";
//		getline(cin, name);
//		cardList[i] = Card(name);
//	}
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << "카드번호: " << cardList[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}