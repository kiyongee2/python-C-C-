//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n1, n2;
//	int quotient, remainder; //��, ������
//
//	try {
//		cout << "ù��° �� �Է�: ";
//		cin >> n1;
//
//		cout << "�ι�° �� �Է�: ";
//		cin >> n2;
//
//		if (n2 == 0)
//			throw n1; //���� �߻� - catch()�� ���ڷ� ����
//		quotient = n1 / n2;  //��
//		remainder = n1 % n2; //������
//
//		cout << "��: " << quotient << endl;
//		cout << "������: " << remainder << endl;
//	}
//	catch (int e_n) {
//		cout << n1 << "�� 0���� ���� �� �����ϴ�.\n";
//	}
//
//	return 0;
//}