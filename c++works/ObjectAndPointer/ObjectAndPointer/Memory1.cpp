#include <iostream>
using namespace std;

int main()
{
	//정수형 변수 동적 할당
	int* p;
	p = new int; //동적 포인터 생성 
	if (p == NULL) {
		cout << "메모리를 할당할 수 없습니다\n";
		return 0;
	}

	*p = 5;
	cout << "*p=" << *p << endl;

	delete p;  //메모리 반납

	//정수형 배열 동적 할당
	int* pa;
	pa = new int[10];  //동적 배열 생성
	if (pa == NULL) {
		cout << "메모리를 할당할 수 없습니다\n";
		return 0;
	}

	for (int i = 0; i < 10; i++) {
		*(pa + i) = i;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << "(*pa + " << i << ")----->" << *(pa + i) << endl;
	}

	delete[] pa;  //메모리 반납

	return 0;
}