//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//	//강아지의 종류와 나이를 저장할 map 컨테이너
//	map<string, int> dog;
//
//	dog.insert({ "말티즈", 3 });
//	dog.insert({ "진돗개", 2 });
//	dog.insert({ "불독", 4 });
// 
// //요소의 개수
//  cout << "저장된 요소 개수: " << dog.size() << endl;
//
//	//특정 요소 검색
//	cout << dog["말티즈"] << "살" << endl;
//
//	//특정 요소 수정
//	dog["진돗개"] = 1;
//
//	//특정 요소 삭제
//	dog.erase("불독");
//
//	//전체 검색
//	for (auto it = dog.begin(); it != dog.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//
//	return 0;
//}
