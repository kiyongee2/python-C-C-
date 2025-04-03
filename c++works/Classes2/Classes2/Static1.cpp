//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	카드 번호 자동 발급
//*/
//class Card {
//private:
//	static int serialNum; //static 변수
//	string name;     //고객 이름
//	int cardNumber;  //카드 번호
//
//public:
//	/*Card(string name) {
//		serialNum++;  
//		cardNumber = serialNum;
//		this->name = name;
//	}*/
//
//	Card(string name) : name(name), cardNumber(++serialNum) {}
//
//	string getName(){
//		return name;
//	}
//	int getCardNumber() {
//		return cardNumber;
//	}
//};
//
//int Card::serialNum = 1000;  //전역 변수
//
//int main()
//{
//	Card card1("신유빈");
//	cout << "고객 이름: " << card1.getName() << endl;
//	cout << "카드 번호: " << card1.getCardNumber() << endl;
//
//	Card card2("이정후");
//	cout << "고객 이름: " << card2.getName() << endl;
//	cout << "카드 번호: " << card2.getCardNumber() << endl;
//
//	Card card3("한강");
//	cout << "고객 이름: " << card3.getName() << endl;
//	cout << "카드 번호: " << card3.getCardNumber() << endl;
//
//	return 0;
//}
