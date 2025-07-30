#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Bus.h"
using namespace std;

class Person {
private:
	string name;  //사람 이름
	int money;    //가진 돈
public:
	Person(string name, int money);

	void takeBus(Bus& bus);
	void displayInfo();
};
#endif
