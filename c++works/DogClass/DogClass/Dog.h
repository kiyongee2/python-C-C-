
//조건부 컴파일 블록 
//헤더파일이 중복정의되지 않도록 해줌
#ifndef DOG_H  
#define DOG_H  //매크로 정의

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string type;
	int age;

	Dog(string t, int a);

	void dogInfo();
	void bark();
};

#endif  //조건부 컴파일 블록 종료
