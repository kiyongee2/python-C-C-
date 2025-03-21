
#include "Dog.h"

//생성자 초기화
Dog::Dog(string t, int a)
{
	type = t;
	age = a;
}

void Dog::dogInfo()
{
	cout << "강아지 종류 : " << type << endl;
	cout << "강아지 나이 : " << age << "세" << endl;
}

