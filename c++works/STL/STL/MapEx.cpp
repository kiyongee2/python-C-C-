//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	//강아지의 종류와 나이를 저장할 map 컨테이너
//	map<string, int> dogs;
//
//	//요소 추가
//	dogs.insert({ "말티즈", 3 });
//	dogs.insert({ "진돗개", 2 });
//	dogs.insert({ "불독", 4 });
//	//dogs.insert(make_pair("말티즈", 1));
//
//	//map의 크기
//	cout << dogs.size() << endl;
//
//	//요소 검색
//	cout << dogs["말티즈"] << "세\n";
//
//	//요소 수정
//	dogs["진돗개"] = 1;
//
//	//요소 삭제
//	//dogs.erase("불독");
//
//	//전체 검색 - 순서 없음
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//
//	//전체 검색 - auto 통합 자료형
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//
//	//향상된 검색
//	for (auto dog : dogs) {
//		cout << dog.first << " " << dog.second << endl;
//	}
//
//	return 0;
//}
