//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	//�������� ������ ���̸� ������ map �����̳�
//	map<string, int> dogs;
//
//	//��� �߰�
//	dogs.insert({ "��Ƽ��", 3 });
//	dogs.insert({ "������", 2 });
//	dogs.insert({ "�ҵ�", 4 });
//	//dogs.insert(make_pair("��Ƽ��", 1));
//
//	//map�� ũ��
//	cout << dogs.size() << endl;
//
//	//��� �˻�
//	cout << dogs["��Ƽ��"] << "��\n";
//
//	//��� ����
//	dogs["������"] = 1;
//
//	//��� ����
//	//dogs.erase("�ҵ�");
//
//	//��ü �˻� - ���� ����
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//
//	//��ü �˻� - auto ���� �ڷ���
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//
//	//���� �˻�
//	for (auto dog : dogs) {
//		cout << dog.first << " " << dog.second << endl;
//	}
//
//	return 0;
//}
