//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	  ������ �迭 ����, ���� �� ���
//	*/
//	char c1, c2, c3;  //������ ���� ����
//
//	c1 = 'B';
//	c2 = c1 + 1;
//	c3 = c1 - 1;
//
//	cout << c1 << " " << c2 << " " << c3 << endl;
//	cout << "\n======================\n";
//
//	//���ĺ� �빮�ڸ� ������ 26�� �迭 ����
//	char alphabets[26];
//	char ch = 'A';
//
//	//����
//	for (int i = 0; i < 26; i++)
//	{
//		alphabets[i] = ch;
//		ch++; //ch = ch + 1;
//	}
//
//	//���
//	for (int i = 0; i < 26; i++)
//	{
//		cout << alphabets[i] << " " << (int)alphabets[i] << endl;
//	}
//
//	//���ڿ� �迭 ����
//	string cart = "���";  //���ڿ� ����
//	cout << cart << endl;
//
//	string carts[] = {"���", "��", "ȭ����", "����"};
//
//	//�迭�� ũ��
//	cout << size(carts) << endl; 
//
//	//2�� ��� ��ȸ
//	cout << carts[2] << endl;    
//	
//	//��� ����
//	carts[1] = "��";
//
//	//��ü ��� ���
//	for (int i = 0; i < size(carts); i++)
//	{
//		cout << carts[i] << " ";
//	}
//
//	return 0;
//}