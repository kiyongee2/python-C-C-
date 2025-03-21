//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//정수형 배열 선언
//	int a[4] = { 10, 20, 30, 40 };
//
//	//정수형 포인터 선언
//	int* pa;
//
//	cout << "a[0]: " << a[0] << endl;
//	cout << "a[0]의 메모리 번지: " << &a[0] << endl;
//	cout << "배열의 이름 a + 0: " << a << endl;
//
//	cout << "a[1]: " << a[1] << endl;
//	cout << "a[1]의 메모리 번지: " << &a[1] << endl;
//	cout << "배열의 이름 a + 1: " << a + 1 << endl;
//	cout << "======================================\n";
//
//	//자료형의 크기
//	cout << "a[4]: " << sizeof(a) << "byte" << endl;
//	cout << "pa: " << sizeof(pa) << "byte" << endl;
//	cout << "======================================\n";
//
//	pa = a; //&a[0], a의 시작주소를 대입
//
//	for (int i = 0; i < size(a); i++) 
//	{
//		cout << pa + i << ": " << * (pa + i) << endl;
//	}
//
//	return 0;
//}
