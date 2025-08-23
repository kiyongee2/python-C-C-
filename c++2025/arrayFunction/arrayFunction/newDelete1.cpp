//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//정적 포인터 변수
//	int n = 3;
//	int* p;
//
//	p = &n;
//
//	cout << n << endl;  //3
//	cout << *p << endl; //3
//
//	*p = *p + 10;
//	cout << *p << endl; //13
//	cout << n<< endl; //13
//	cout << "===============\n";
//
//	//동적 포인터 변수 - new 키워드 사용
//	int n2 = 4;
//	int* ptr;
//	ptr = new int;
//	if (ptr == nullptr) { //C언어 - NULL, C++ - nullptr
//		cout << "메모리를 할당할 수 없습니다.\n";
//		return -1;
//	}
//
//	*ptr = 5;
//
//	cout << *ptr << endl;  //5
//	cout << *ptr + 10 << endl;  //10
//
//	delete ptr;  //메모리 해제
//
//	cout << "========================\n";
//
//	//정수형 배열 동적 할당
//	int* pa;
//	pa = new int[10];
//
//	//값 할당
//	pa[0] = 1;
//	pa[1] = 2;
//	pa[2] = 3;
//
//	//값 출력
//	cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;
//	cout << *pa << " " << *(pa + 1) << " " << *(pa + 2) << endl;
//
//	//1부터 10까지 저장
//	for (int i = 0; i < 10; i++) {
//		//pa[i] = i + 1;
//		*(pa + i) = i + 1;
//	}
//
//	//1부터 10까지 출력
//	for (int i = 0; i < 10; i++) {
//		//cout << pa[i] << " ";
//		cout << *(pa + i) << " ";
//	}
//
//	delete[] pa;  //메모리 해제(반납)
//
//	return 0;
//}