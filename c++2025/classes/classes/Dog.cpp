#include <iostream>
#include "Dog.h"

//»ı¼ºÀÚ ÃÊ±âÈ­
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

string Dog::getType() {
	return type;
}

int Dog::getAge() {
	return age;
}

void Dog::bark() {
	cout << "¿Ğ~ ¿Ğ~\n";
}

