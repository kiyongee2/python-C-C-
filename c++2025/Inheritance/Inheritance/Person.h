#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
protected:  //상속받는 클래스만 접근 허용
	string name;  //이름

public:
	Person(string name);  //생성자

	void greet();  //인사하다
	void displayInfo(); //사람의 정보 출력
};
#endif 

