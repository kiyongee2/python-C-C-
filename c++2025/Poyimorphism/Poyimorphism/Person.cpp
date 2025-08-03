#include <iostream>
#include "Person.h"

Person::Person(string name) {
    this->name = name;
}

void Person::greet() {
    cout << "¾È³çÇÏ¼¼¿ä. ¼º¸í: " << name << endl;
}

void Person::displayInfo() {
    cout << "Person name: " << name << endl;
}

Person::~Person() {
    cout << "Person ¼Ò¸êÀÚ È£ÃâµÊ: " << name << endl;
}
