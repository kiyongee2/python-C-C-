//#include <iostream>
//#include <vector>  //vector �����̳� ���
//#include <string>
//using namespace std;
//
//int main()
//{
//	//���� ���� ���ڿ��� ������ ���� ����
//	vector<string> carts;
//
//	//����
//	carts.push_back("���");
//	carts.push_back("����");
//	carts.push_back("ȭ����");
//	carts.push_back("���");
//
//	cout << "*** carts ����Ʈ ��� *** \n";
//	for (int i = 0; i < carts.size(); i++)
//	{
//		cout << carts[i] << " ";
//	}
//	cout << "\n==============================\n";
//
//	cout << "1. '����'�� '��'�� ����\n";
//	carts[1] = "��";
//
//	cout << "2. 'ȭ����' ����\n";
//	for (auto it = carts.begin(); it != carts.end(); it++) {
//		if (*it == "ȭ����") {
//			carts.erase(it);
//			break;
//		}
//	}
//
//	cout << "==============================\n";
//	cout << "*** carts ����Ʈ ���*** \n";
//	for (auto& cart : carts)
//		cout << cart << " ";
//	
//	return 0;
//}