#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	//영어 단어와 뜻을 저장할 map 컨테이너
	map<string, string> dic;
	string eng; //영어 단어(키) 저장 변수

	//단어 3개 저장
	dic.insert({ "sea", "바다" });
	dic.insert({ "korea", "대한민국" });
	dic.insert({ "body", "몸" });
	dic["smile"] = "미소";  //단어 추가

	//저장된 단어 찾기
	while (true) {
		cout << "찾고 싶은 단어(exit 입력시 종료)>> ";
		//cin >> eng;
		getline(cin, eng); //공백문자 허용
		if (eng == "exit") break;  // 종료

		if (dic.find(eng) == dic.end()) {
			cout << "찾는 단어가 없음\n";
		}
		else {
			cout << dic[eng] << endl;
		}
	}
	cout << "검색을 종료합니다\n";
	return 0;
}
