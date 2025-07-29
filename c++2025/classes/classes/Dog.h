#ifndef DOG_H  //조건부 컴파일 블럭 시작
#define DOG_H  //헤더파일 중복되지 않도록 매크로 이름 정의
#include <string>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);
	~Dog(){}
	 
	string getType();
	int getAge();
	void bark();
};
#endif  //조건부 컴파일 블럭 종료
