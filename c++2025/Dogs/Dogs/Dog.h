//조건부 컴파일 블록 시작
#ifndef DOG_H  //헤더파일이 중복 정의되지 않도록 함
#define DOG_H  //매크로 이름 정의

#include <iostream>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);
	~Dog() {}

	string getType();
	int getAge();
	void bark();
};

#endif // 조건부 컴파일 블록 종료

