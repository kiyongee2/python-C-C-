//#include <string>
//#include "Card.h"
//
//int main() {
//	const int SIZE = 3;
//
//	/*Card cardList[SIZE] = {
//		Card("������"),
//		Card("���"),
//		Card("�輱ȭ")
//	};*/
//
//	//����� �Է�
//	Card cardList[SIZE]; //�⺻ �����ڷ� ��ü �迭 ����
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //�� �̸�
//		cout << i + 1 << "��° �� �̸� �Է�: ";
//		getline(cin, name);
//		cardList[i] = Card(name);
//	}
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << "ī���ȣ: " << cardList[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}