//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//// map으로 영한 사전 만들기
//
//int main() {
//	map<string, string> dic;
//
//	dic.insert({ "love", "사랑" });
//	dic.insert({ "apple", "사과" });
//	dic["banana"] = "바나나";
//
//	cout << "저장된 단어 개수 " << dic.size() << endl;
//
//	// 요소 검색
//	if (dic.find("apple") != dic.end())
//		cout << "find" << endl;
//	else
//		cout << "not find" << endl;
//	
//	// 인덱스 기반
//	for (auto iter = dic.begin(); iter != dic.end(); iter++){
//		cout << iter->first << " " << iter->second << endl;
//	}
//	cout << endl;
//
//	// 범위 기반
//	for (auto iter : dic) {
//		cout << iter.first << " " << iter.second << endl;
//	}
//	cout << endl;
//
//
//	return 0;
//}