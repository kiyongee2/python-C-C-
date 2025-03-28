//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//정수형 변수 선언
//	int n = 10;
//
//	cout << n << endl;
//	cout << &n << endl;
//	cout << sizeof(n) << "byte" << endl;
//
//	//정수형 포인터 선언
//	int* pn;
//	pn = &n;
//
//	cout << pn << endl;
//	cout << &pn << endl;
//	cout << *pn << endl;  //역참조
//	cout << sizeof(pn) << "byte" << endl;
//
//	//역참조 연산
//	*pn = *pn + 10;
//	cout << *pn << endl;
//
//	cout << "=========================\n";
//
//	//정수형 배열 선언
//	int a[4] = { 10, 20, 30, 40 };
//
//	cout << a[0] << endl;
//	cout << &a[0] << endl;  
//	cout << a << endl;    //배열 이름이 시작 주소이다.
//	
//	//정수형 포인터 배열
//	int* pa;
//	pa = a;   //pa = &a[0]
//
//	cout << pa << endl;
//	cout << *pa << endl;  //*(pa + 0)
//	cout << *(pa + 1) << endl;  
//
//	//전체 출력
//	for (int i = 0; i < size(a); i++) {
//		cout << *(pa + i) << " ";
//	}
//
//	return 0;
//}
