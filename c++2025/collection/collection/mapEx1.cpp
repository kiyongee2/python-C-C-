//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<string, int> dogs; //map �ڷᱸ�� ����
//
//	//��� �߰�
//	dogs.insert({ "��Ƽ��", 3 });
//	dogs.insert({ "������", 2 });
//	dogs.insert({ "�ҵ�", 4 });
//	dogs["Ǫ��"] = 1;  //��� �߰�
//
//	cout << dogs.size() << endl; //����� ����� ����
//
//	//��� �˻�
//	cout << dogs["��Ƽ��"] << "��\n";
//	cout << dogs.at("��Ƽ��") << "��\n";
//
//	//��ü �˻� - �ݺ��� ���
//	map<string, int>::iterator it;
//	for (it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << ", " << it->second << endl;
//	}
//	cout << "=====================\n";
//
//	//��ü �˻� - auto
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << ", " << it->second << endl;
//	}
//	cout << "=====================\n";
//
//	//��� ����
//	dogs.erase("�ҵ�");
//
//	for (auto dog : dogs)
//		cout << dog.first << ", " << dog.second << endl;
//
//	return 0;
//}