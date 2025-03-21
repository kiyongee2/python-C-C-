//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//변수 선언과 초기화
//	char c = 'A';
//	int n = 10;
//
//	//포인터 선언과 초기화
//	char* pc = &c;  //변수 c의 주소 저장
//	int* pn = &n;   //변수 n의 주소 저장
//
//	//변수 값 출력
//	cout << "c: " << c << endl;
//	cout << "n: " << n << endl;
//
//	//포인터가 가리키는 값 출력
//	cout << "*pc: " << *pc << endl;
//	cout << "*pn: " << *pn << endl;
//
//	//자료형의 크기
//	cout << "c: " << sizeof(c) << "byte" << endl;
//	cout << "n: " << sizeof(n) << "byte" << endl;
//
//	//포인터는 모든 자료형이 8byte로 동일하다.
//	cout << "pc: " << sizeof(pc) << "byte" << endl;
//	cout << "pn: " << sizeof(pn) << "byte" << endl;
//
//	cout << "==================\n";
//
//	//역참조 연산자*로 원본 데이터 덮어쓰기
//	*pc = 'B';
//	*pn = 11;
//
//	cout << "c: " << c << endl;
//	cout << "n: " << n << endl;
//
//	cout << "*pc: " << *pc << endl;
//	cout << "*pn: " << *pn << endl;
//
//	return 0;
//}
