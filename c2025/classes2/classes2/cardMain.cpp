//#include <iostream>
//#include "Card.h"
//
//int main()
//{
//	//��ü �迭�� ����
//	const int SIZE = 3;
//	
//	/*Card cardList[SIZE] = {
//		Card("�ӽÿ�"),
//		Card("���"),
//		Card("������")
//	};*/
//
//	//����� �Է����� ī�� ���� ����
//	Card cardList[SIZE]; //Ŭ������ �⺻ ������ ���
//
//	for (int i = 0; i < SIZE; i++) {
//		string name; //���̸�
//		cout << i + 1 << "��° �� �̸� �Է�: ";
//		getline(cin, name);
//		cardList[i].setName(name);
//	}
//
//	cout << "========== ī�� ���� ��� ==========\n";
//	for (int i = 0; i < SIZE; i++) {
//		cout << "�� �̸�: " << cardList[i].getName()
//		     << ", ī�� ��ȣ: " << cardList[i].getCardNumber() << endl;
//	}
//
//	return 0;
//}