//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<string> carts;
//
//	//저장
//	carts.push_back("라면");
//	carts.push_back("생수");
//	carts.push_back("화장지");
//	carts.push_back("계란");
//
//	//수정
//	//carts[1] = "쌀";
//	carts.at(1) = "쌀";
//
//	//반복자 설정
//	vector<string>::iterator it = carts.begin();
//
//	//삭제
//	for (it = carts.begin(); it != carts.end(); it++) {
//		if (*it == "화장지") {
//			carts.erase(it);
//			break;
//		}
//	}
//
//	//조회
//	for (auto cart : carts)
//		cout << cart << " ";
//
//	return 0;
//}