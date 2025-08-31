#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Bus.h"

using namespace std;

class Person {
private:
	string name;
	int money;

public:
	Person(string name, int money);

	void takeBus(Bus& bus);
	void displayInfo();

};
#endif 
