//#include <iostream>
//#include <map>
//#include <string> //getline()
//using namespace std;
//
//int main()
//{
//	map<string, string> dict; //map �ڷᱸ�� ����
//	string eng; //�˻��� �ܾ�
//
//	//�ܾ� ����
//	dict.insert({ "������", "��ǻ�Ͱ� ����ϴ� 0�� 1�� �̷���� ��" });
//	dict.insert({ "��Ʈ", "���� ������� �������� ���� ���� ������, " 
//		"0 �Ǵ� 1�� ���� ������" });
//	dict.insert({ "������", "���α׷��� ���� �ۼ��� �ҽ� �ڵ带 ��ǻ�Ͱ�\n"
//		"�����ϰ� ������ �� �ִ� ����� ��ȯ�ϴ� ������ ���Ѵ�."});
//
//	/* //Ư�� �ܾ� �˻� 
//	cout << dict["��Ʈ"] << endl;
//
//	auto it = dict.find("��Ʈ");
//	cout << it->first << ": " << it->second << endl;
//
//	//��ü �˻�
//	for (auto& dic : dict)
//		cout << dic.first << ": " << dic.second << endl;*/
//
//	//�ܾ� �˻�
//	while (true) {
//		cout << "�˻��� �ܾ� �Է�(exit - ����)>> ";
//		getline(cin, eng); //���� ���� ���
//
//		if (eng == "exit") { 
//			break; //�ݺ� ����
//		}
//		else if (dict.find(eng) == dict.end()) {
//			cout << "ã�� �ܾ �����ϴ�.\n";
//		}
//		else {
//			cout << dict[eng] << endl;
//		}
//	}
//	cout << "�˻��� �����մϴ�\n";
//
//	return 0;
//}