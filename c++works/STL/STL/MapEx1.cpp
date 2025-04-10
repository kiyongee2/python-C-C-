//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<string, int> scores;
//
//	//키-값 쌍 삽입
//	scores.insert(make_pair("Tom", 80));
//	scores.insert(make_pair("Jerry", 90));
//	//scores.insert({ "Luna", 90 });
//	scores.insert(make_pair("Luna", 85));
//	
//	cout << "map 크기: " << scores.size() << endl;
//
//	//특정 키에 해당하는 값 검색
//	//cout << "Jerry의 점수: " << scores["Jerry"] << endl;
//	auto it = scores.find("Jerry");
//	cout << "Jerry의 점수: " << it->second << endl;
//
//	//특정 키에 해당하는 키-값 제거
//	scores.erase("Tom");
//
//	cout << "=== 모든 요소 출력 === " << endl;
//	for (auto& score : scores) {
//		cout << score.first << ": " << score.second << endl;
//	}
//
//	return 0;
//}
