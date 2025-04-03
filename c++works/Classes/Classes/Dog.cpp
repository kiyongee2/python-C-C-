#include "Dog.h"

Dog::Dog() { //기본 생성자
	type = "강아지";
	age = 1;
	cout << "객체를 생성합니다\n";
}

Dog::~Dog() { //소멸자
	cout << "객체가 소멸됩니다..\n";
}
Dog::Dog(string t, int a) {  //매개변수가 있는 생성자
	type = t;
	age = a;
}
void Dog::dogInfo()
{
	cout << "강아지 종류 : " << type << endl;
	cout << "강아지 나이 : " << age << "세" << endl;
}
void Dog::bark()
{
	cout << "멍~ 멍~\n";
}

