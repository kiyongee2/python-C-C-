#include <iostream>
using namespace std;

/*
	데이터 형식* 포인터;
*/

int main()
{
	//데이터 형식* 포인터;
	int* ptr;

	cout << &ptr << endl;  //000000E547AFFC08

	//주소 연산자 &를 이용해서 다른 변수의 주소를 할당
	int num = 3;

	ptr = &num;

	cout << num << endl;  //3
	cout << *ptr << endl; //3, 역참조

	*ptr += 10; //*ptr = *ptr + 10;
	cout << *ptr << endl; //13
	cout << num << endl;  //13
	cout << "===============\n";

	return 0;
}