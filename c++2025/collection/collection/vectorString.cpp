//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<string> carts;
//
//	//����
//	carts.push_back("���");
//	carts.push_back("����");
//	carts.push_back("ȭ����");
//	carts.push_back("���");
//
//	//����
//	//carts[1] = "��";
//	carts.at(1) = "��";
//
//	//�ݺ��� ����
//	vector<string>::iterator it = carts.begin();
//
//	//����
//	for (it = carts.begin(); it != carts.end(); it++) {
//		if (*it == "ȭ����") {
//			carts.erase(it);
//			break;
//		}
//	}
//
//	//��ȸ
//	for (auto cart : carts)
//		cout << cart << " ";
//
//	return 0;
//}