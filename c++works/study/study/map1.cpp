//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//// map���� ���� ���� �����
//
//int main() {
//	map<string, string> dic;
//
//	dic.insert({ "love", "���" });
//	dic.insert({ "apple", "���" });
//	dic["banana"] = "�ٳ���";
//
//	cout << "����� �ܾ� ���� " << dic.size() << endl;
//
//	// ��� �˻�
//	if (dic.find("apple") != dic.end())
//		cout << "find" << endl;
//	else
//		cout << "not find" << endl;
//	
//	// �ε��� ���
//	for (auto iter = dic.begin(); iter != dic.end(); iter++){
//		cout << iter->first << " " << iter->second << endl;
//	}
//	cout << endl;
//
//	// ���� ���
//	for (auto iter : dic) {
//		cout << iter.first << " " << iter.second << endl;
//	}
//	cout << endl;
//
//
//	return 0;
//}