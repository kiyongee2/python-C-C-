//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*int* p;
//
//	p = new int;  // 1개의 정수 동적 할당
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//
//	*p = 5; //할당 받은 정수 공간에 5 기록
//	int n = *p;
//	cout << "*p = " << *p << endl;
//	cout << "n = " << n << endl;
//
//	delete p;  //할당 받은 메모리 반환*/
//
//	cout << "입력할 정수의 개수는? ";
//	int n;
//
//	cin >> n;
//	if (n <= 0) return 0;
//	int* p = new int[n];  //n개의 정수 배열 동적 할당
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "번째 정수: ";
//		cin >> p[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += p[i];
//	}
//	cout << "평균 : " << sum / n << endl;
//
//	delete[] p;
//
//	return 0;
//}