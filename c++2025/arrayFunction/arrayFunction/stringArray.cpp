//#include <iostream>
//#include <array>
//
//using namespace std;
//
//int main()
//{
//	//문자열 배열 관리
//	//c언어
//	char season[4][10] = {"봄", "여름", "가을", "겨울"};
//	printf("%s\n", season[0]);
//	int len = sizeof(season) / sizeof(season[0]);
//	for (int i = 0; i < len; i++) {
//		printf("%s ", season[i]);
//	}
//
//	//c++
//	//string carts[] = { "라면", "쌀", "생수", "화장지" };
//	array<string, 4> carts = { "라면", "쌀", "생수", "화장지" };
//
//	//배열의 크기
//	cout << "\n배열의 크기(길이): " << size(carts) << endl;
//
//	//2번 요소 조회
//	cout << carts[2] << endl;
//
//	//요소 수정
//	carts[1] = "빵";
//
//	//전체 출력
//	for (int i = 0; i < size(carts); i++) {
//		cout << carts[i] << " ";
//	}
//	cout << endl;
//
//	//범위기반 for문 - for(자료형 변수 : 배열이름){}
//	/*for (string cart : carts) {
//		cout << cart << " ";
//	}*/
//
//	for (auto& cart : carts) {
//		cout << cart << " ";
//	}
//
//	return 0;
//}