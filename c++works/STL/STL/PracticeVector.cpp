//#include <iostream>
//#include <vector>  //vector 컨테이너 사용
//#include <string>
//using namespace std;
//
//int main()
//{
//	//여러 개의 문자열을 저장할 벡터 생성
//	vector<string> carts;
//
//	//저장
//	carts.push_back("라면");
//	carts.push_back("생수");
//	carts.push_back("화장지");
//	carts.push_back("계란");
//
//	cout << "*** carts 리스트 출력 *** \n";
//	for (int i = 0; i < carts.size(); i++)
//	{
//		cout << carts[i] << " ";
//	}
//	cout << "\n==============================\n";
//
//	cout << "1. '생수'를 '쌀'로 변경\n";
//	carts[1] = "쌀";
//
//	cout << "2. '화장지' 삭제\n";
//	for (auto it = carts.begin(); it != carts.end(); it++) {
//		if (*it == "화장지") {
//			carts.erase(it);
//			break;
//		}
//	}
//
//	cout << "==============================\n";
//	cout << "*** carts 리스트 출력*** \n";
//	for (auto& cart : carts)
//		cout << cart << " ";
//	
//	return 0;
//}