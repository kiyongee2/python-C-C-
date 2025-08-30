#include <iostream>
using namespace std;

class Card {
	static int serialNum; //정적 멤버 변수
	string name;     //고객 이름
	int cardNumber;  //카드 번호

public:
	/*Card(string name) {
		serialNum++;
		cardNumber = serialNum;
		this->name = name;
	}*/
	//멤버 초기화 리스트
	Card(string name) : name(name), cardNumber(++serialNum){}

	string getName() { return name;}
	int getCardNumber() { return cardNumber; }
};

//전역 변수
int Card::serialNum = 1000;

int main()
{
	Card card1("신유진");
	cout << "고객 이름: " << card1.getName() << endl;
	cout << "카드 번호: " << card1.getCardNumber() << endl;

	Card card2("이정우");
	cout << "고객 이름: " << card2.getName() << endl;
	cout << "카드 번호: " << card2.getCardNumber() << endl;

	return 0;
}