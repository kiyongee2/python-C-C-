//#include <iostream>
//#include <map>
//#include <string> //getline()
//using namespace std;
//
//
//int main()
//{
//	map<string, string> dic;
//	string eng;
//
//	//�ܾ� ����
//	dic.insert({ "sea", "�ٴ�" });
//	dic.insert({ "mountain", "��" });
//	dic.insert({ "body", "��" });
//	dic["smile"] = "�̼�";
//
//	//�˻�
//	auto it = dic.find("body");
//	cout << it->first << ": " << it->second << endl;
//
//	//����
//	dic.erase("smile");
//
//	for (auto& d : dic)
//		cout << d.first << ": " << d.second << endl;
//
//	//�ܾ� �˻�
//	while (true) {
//		cout << "ã�� ���� �ܾ�(exit - ����)>> ";
//		getline(cin, eng);
//
//		if (eng == "exit") break;
//		else if (dic.find(eng) == dic.end()) {
//			cout << "ã�� �ܾ ����\n";
//		}
//		else {
//			cout << dic[eng] << endl;
//		}
//	}
//	cout << "�˻��� �����մϴ�\n";
//
//	return 0;
//}