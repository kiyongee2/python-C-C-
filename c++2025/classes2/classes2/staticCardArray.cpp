//#include <iostream>
//#include <string>
//using namespace std;
//
//class Card {
//	static int serialNum; //���� ��� ����
//	string name;
//	int cardNumber;
//
//public:
//	//�⺻ ������
//	//Card(){}
//
//	//��� �ʱ�ȭ ����Ʈ(�⺻ ������)
//	Card(string name = "") : name(name), 
//		cardNumber(++serialNum) {}
//
//	string getName() { return name; }
//	int getCardNumber() { return cardNumber; }
//	//������
//	void setName(string name) { this->name = name;}
//};
//
////���� ����
//int Card::serialNum = 1000;
//
//int main()
//{
//	//��ü �迭�� ����
//	const int SIZE = 3;
//	Card cards[SIZE];
//
//	/*Card cards[SIZE] = {
//		Card("������"),
//		Card("������"),
//		Card("�����")
//	};*/
//
//	//����� �Է����� ī�� ���� ����
//	for (int i = 0; i < SIZE; i++) {
//		string name;
//		cout << i + 1 << "��° �� �̸� �Է�: ";
//		getline(cin, name);
//		cards[i].setName(name);
//	}
//
//	cout << "\n========== ī�� ���� ��� ===========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cout << "�� �̸�: " << cards[i].getName() <<
//			", ī�� ��ȣ: " << cards[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}