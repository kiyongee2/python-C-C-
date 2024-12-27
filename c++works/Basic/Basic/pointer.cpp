/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 20

using namespace std;

int main()
{
	int val = 3;
	//포인터 - 메모리 주소에 변수를 이름을 붙임, 주소를 저장하는 공간
	//간접 연산자, 간접 참조 연산자
	cout << &val << endl; 

	int a = 6;
	int* b;
	b = &a;

	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;

	*b = *b + 1;
	cout << "a의 값 " << a << endl;

	// new 연산자
	int* p = new int;
	delete p;

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << '\n';

	p3 = p3 + 1;  //포인터 증가
	cout << "p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << " .\n ";

	p3 = p3 - 1;
	delete[] p3;

	// 포인터 배열
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하세요\n";
	cin >> animal;

	// 동적 메모리(실행시간-runtime 설정)
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "입력하신 동물 이름을 복사했습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는" 
		<< (int*)animal << " 입니다. \n";
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는"
		<< (int*)ps << " 입니다. \n";

	return 0;
}*/