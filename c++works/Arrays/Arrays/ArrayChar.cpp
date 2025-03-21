//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	  문자형 배열 선언, 저장 및 출력
//	*/
//	char c1, c2, c3;  //문자형 변수 선언
//
//	c1 = 'B';
//	c2 = c1 + 1;
//	c3 = c1 - 1;
//
//	cout << c1 << " " << c2 << " " << c3 << endl;
//	cout << "\n======================\n";
//
//	//알파벳 대문자를 저장할 26개 배열 생성
//	char alphabets[26];
//	char ch = 'A';
//
//	//저장
//	for (int i = 0; i < 26; i++)
//	{
//		alphabets[i] = ch;
//		ch++; //ch = ch + 1;
//	}
//
//	//출력
//	for (int i = 0; i < 26; i++)
//	{
//		cout << alphabets[i] << " " << (int)alphabets[i] << endl;
//	}
//
//	//문자열 배열 관리
//	string cart = "라면";  //문자열 변수
//	cout << cart << endl;
//
//	string carts[] = {"라면", "빵", "화장지", "생수"};
//
//	//배열의 크기
//	cout << size(carts) << endl; 
//
//	//2번 요소 조회
//	cout << carts[2] << endl;    
//	
//	//요소 수정
//	carts[1] = "쌀";
//
//	//전체 요소 출력
//	for (int i = 0; i < size(carts); i++)
//	{
//		cout << carts[i] << " ";
//	}
//
//	return 0;
//}