//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<string, int> dogs; //map 자료구조 생성
//
//	//요소 추가
//	dogs.insert({ "말티즈", 3 });
//	dogs.insert({ "진돗개", 2 });
//	dogs.insert({ "불독", 4 });
//	dogs["푸들"] = 1;  //요소 추가
//
//	cout << dogs.size() << endl; //저장된 요소의 개수
//
//	//요소 검색
//	cout << dogs["말티즈"] << "세\n";
//	cout << dogs.at("말티즈") << "세\n";
//
//	//전체 검색 - 반복자 사용
//	map<string, int>::iterator it;
//	for (it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << ", " << it->second << endl;
//	}
//	cout << "=====================\n";
//
//	//전체 검색 - auto
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << ", " << it->second << endl;
//	}
//	cout << "=====================\n";
//
//	//요소 삭제
//	dogs.erase("불독");
//
//	for (auto dog : dogs)
//		cout << dog.first << ", " << dog.second << endl;
//
//	return 0;
//}