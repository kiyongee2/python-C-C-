//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	ī�� ��ȣ �ڵ� �߱�
//*/
//class Card {
//private:
//	static int serialNum; //static ����
//	string name;     //�� �̸�
//	int cardNumber;  //ī�� ��ȣ
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
//int Card::serialNum = 1000;  //���� ����
//
//int main()
//{
//	Card card1("������");
//	cout << "�� �̸�: " << card1.getName() << endl;
//	cout << "ī�� ��ȣ: " << card1.getCardNumber() << endl;
//
//	Card card2("������");
//	cout << "�� �̸�: " << card2.getName() << endl;
//	cout << "ī�� ��ȣ: " << card2.getCardNumber() << endl;
//
//	Card card3("�Ѱ�");
//	cout << "�� �̸�: " << card3.getName() << endl;
//	cout << "ī�� ��ȣ: " << card3.getCardNumber() << endl;
//
//	return 0;
//}
