//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//정수형 변수 동적 할당
//	/*int* p;
//	p = new int; */ //동적 포인터 생성 
//	int* p = new int;
//	if (p == NULL) {
//		cout << "메모리를 할당할 수 없습니다\n";
//		return 0;
//	}
//
//	*p = 5;
//	cout << "*p=" << *p << endl;
//
//	delete p;  //메모리 반납
//
//	cout << "===================\n";
//
//	/*int* pa;
//	pa = new int[10];*/  //동적 배열 생성
//	int* pa = new int[5];
//
//	if (pa == NULL) {
//		cout << "메모리를 할당할 수 없습니다\n";
//		return 0;
//	}
//
//	for (int i = 0; i < 5; i++) {
//		*(pa + i) = i + 1;
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		cout << "(*pa + " << i << ")----->" << *(pa + i) << endl;
//	}
//
//	delete [] pa;  //메모리 반납
//
//	//실수형 배열 동적 할당
//	double* arr = new double[3];
//	if (arr == NULL) {
//		cout << "메모리를 할당할 수 없습니다\n";
//		return 0;
//	}
//	arr[0] = 1.1;
//	arr[1] = 2.1;
//	arr[2] = 3.1;
//
//	cout << "arr[0] = " << arr[0] << endl;
//
//	arr = arr + 1; //시작 위치 변경
//
//	cout << "arr[0] = " << arr[0] << endl;
//
//	arr = arr - 1;
//
//	delete[] arr;
//
//	return 0;
//}