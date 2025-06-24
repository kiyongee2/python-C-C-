//#include <iostream>
//#include <string>
//using namespace std;
//
//class Card {
//	static int serialNum; //정적 멤버 변수
//	string name;
//	int cardNumber;
//
//public:
//	//기본 생성자
//	//Card(){}
//
//	//멤버 초기화 리스트(기본 생성자)
//	Card(string name = "") : name(name), 
//		cardNumber(++serialNum) {}
//
//	string getName() { return name; }
//	int getCardNumber() { return cardNumber; }
//	//설정자
//	void setName(string name) { this->name = name;}
//};
//
////전역 변수
//int Card::serialNum = 1000;
//
//int main()
//{
//	//객체 배열로 관리
//	const int SIZE = 3;
//	Card cards[SIZE];
//
//	/*Card cards[SIZE] = {
//		Card("신유진"),
//		Card("이정우"),
//		Card("우상형")
//	};*/
//
//	//사용자 입력으로 카드 정보 설정
//	for (int i = 0; i < SIZE; i++) {
//		string name;
//		cout << i + 1 << "번째 고객 이름 입력: ";
//		getline(cin, name);
//		cards[i].setName(name);
//	}
//
//	cout << "\n========== 카드 정보 출력 ===========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cout << "고객 이름: " << cards[i].getName() <<
//			", 카드 번호: " << cards[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}