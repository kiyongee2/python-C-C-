//헤더 파일 - 클래스
//헤더 파일이 중복 정의되지 않도록 함
#ifndef DOG_H  //조건부 컴파일 블럭
#define DOG_H  //매크로 정의

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	//멤버 변수
	string type;
	int age;

	Dog(); //기본 생성자
	Dog(string t, int a); //매개변수 있는 생성자
	~Dog();  //소멸자 - 생략 가능

	//멤버 함수
	void dogInfo();
	void bark();
};

#endif  //조건부 컴파일 블록 종료
