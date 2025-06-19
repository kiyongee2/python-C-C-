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
//	//단어 저장
//	dic.insert({ "sea", "바다" });
//	dic.insert({ "mountain", "산" });
//	dic.insert({ "body", "몸" });
//	dic["smile"] = "미소";
//
//	//검색
//	auto it = dic.find("body");
//	cout << it->first << ": " << it->second << endl;
//
//	//삭제
//	dic.erase("smile");
//
//	for (auto& d : dic)
//		cout << d.first << ": " << d.second << endl;
//
//	//단어 검색
//	while (true) {
//		cout << "찾고 싶은 단어(exit - 종료)>> ";
//		getline(cin, eng);
//
//		if (eng == "exit") break;
//		else if (dic.find(eng) == dic.end()) {
//			cout << "찾는 단어가 없음\n";
//		}
//		else {
//			cout << dic[eng] << endl;
//		}
//	}
//	cout << "검색을 종료합니다\n";
//
//	return 0;
//}