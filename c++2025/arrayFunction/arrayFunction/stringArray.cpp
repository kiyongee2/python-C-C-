//#include <iostream>
//#include <array>
//
//using namespace std;
//
//int main()
//{
//	//���ڿ� �迭 ����
//	//c���
//	char season[4][10] = {"��", "����", "����", "�ܿ�"};
//	printf("%s\n", season[0]);
//	int len = sizeof(season) / sizeof(season[0]);
//	for (int i = 0; i < len; i++) {
//		printf("%s ", season[i]);
//	}
//
//	//c++
//	//string carts[] = { "���", "��", "����", "ȭ����" };
//	array<string, 4> carts = { "���", "��", "����", "ȭ����" };
//
//	//�迭�� ũ��
//	cout << "\n�迭�� ũ��(����): " << size(carts) << endl;
//
//	//2�� ��� ��ȸ
//	cout << carts[2] << endl;
//
//	//��� ����
//	carts[1] = "��";
//
//	//��ü ���
//	for (int i = 0; i < size(carts); i++) {
//		cout << carts[i] << " ";
//	}
//	cout << endl;
//
//	//������� for�� - for(�ڷ��� ���� : �迭�̸�){}
//	/*for (string cart : carts) {
//		cout << cart << " ";
//	}*/
//
//	for (auto& cart : carts) {
//		cout << cart << " ";
//	}
//
//	return 0;
//}