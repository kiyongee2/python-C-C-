//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<string, int> scores;
//
//	//Ű-�� �� ����
//	scores.insert(make_pair("Tom", 80));
//	scores.insert(make_pair("Jerry", 90));
//	//scores.insert({ "Luna", 90 });
//	scores.insert(make_pair("Luna", 85));
//	
//	cout << "map ũ��: " << scores.size() << endl;
//
//	//Ư�� Ű�� �ش��ϴ� �� �˻�
//	//cout << "Jerry�� ����: " << scores["Jerry"] << endl;
//	auto it = scores.find("Jerry");
//	cout << "Jerry�� ����: " << it->second << endl;
//
//	//Ư�� Ű�� �ش��ϴ� Ű-�� ����
//	scores.erase("Tom");
//
//	cout << "=== ��� ��� ��� === " << endl;
//	for (auto& score : scores) {
//		cout << score.first << ": " << score.second << endl;
//	}
//
//	return 0;
//}
