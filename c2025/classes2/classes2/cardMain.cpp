//#include <iostream>
//#include "Card.h"
//
//int main()
//{
//	//Card �ν��Ͻ� ����
//	Card card1("�ӽÿ�");
//	Card card2("���");
//	Card card3("�ڻ���");
//
//	cout << "ī���ȣ: " << card1.getCardNumber() << endl; //1001
//	cout << "ī���ȣ: " << card2.getCardNumber() << endl; //1002
//	cout << "ī���ȣ: " << card3.getCardNumber() << endl; //1003
//
//	//��ü �迭�� ����
//	const int SIZE = 3;
//	/*Card cardList[SIZE] = {
//		Card("�ӽÿ�"),
//		Card("���"),
//		Card("�ڻ���")
//	};*/
//
//	//����� �Է����� ī�� ���� ����
//	Card cardList[SIZE]; //Ŭ������ �⺻ ������ ���
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //���̸�
//		cout << i + 1 << "��° �� �̸� �Է�: ";
//		getline(cin, name);
//		cardList[i] = Card(name);
//	}
//
//	cout << "========== ī�� ���� ��� ==========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cardList[i].printInfo();
//	}
//
//	return 0;
//}