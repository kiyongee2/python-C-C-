//#include <iostream>
//#include <map>
//#include <string> //getline()
//using namespace std;
//
//int main()
//{
//	map<string, string> dict; //map 자료구조 생성
//	string eng; //검색할 단어
//
//	//단어 저장
//	dict.insert({ "이진수", "컴퓨터가 사용하는 0과 1로 이루어진 수" });
//	dict.insert({ "비트", "정보 기술에서 데이터의 가장 작은 단위로, " 
//		"0 또는 1의 값을 가진다" });
//	dict.insert({ "컴파일", "프로그래밍 언어로 작성된 소스 코드를 컴퓨터가\n"
//		"이해하고 실행할 수 있는 기계어로 변환하는 과정을 말한다."});
//
//	/* //특정 단어 검색 
//	cout << dict["비트"] << endl;
//
//	auto it = dict.find("비트");
//	cout << it->first << ": " << it->second << endl;
//
//	//전체 검색
//	for (auto& dic : dict)
//		cout << dic.first << ": " << dic.second << endl;*/
//
//	//단어 검색
//	while (true) {
//		cout << "검색할 단어 입력(exit - 종료)>> ";
//		getline(cin, eng); //공백 문자 허용
//
//		if (eng == "exit") { 
//			break; //반복 종료
//		}
//		else if (dict.find(eng) == dict.end()) {
//			cout << "찾는 단어가 없습니다.\n";
//		}
//		else {
//			cout << dict[eng] << endl;
//		}
//	}
//	cout << "검색을 종료합니다\n";
//
//	return 0;
//}