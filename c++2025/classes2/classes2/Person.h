#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Bus.h"

using namespace std;

class Person {
private:
	string name;  //이름
	int money;    //가진 돈

public:
	Person(string name, int money);

	void takeBus(Bus& bus); //매개변수-버스 객체 전달(참조자)
	void displayInfo();

};
#endif 
