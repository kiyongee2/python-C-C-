#include "MyClass.h"

MyClass::MyClass() {}
MyClass::~MyClass() {}

void MyClass::setValue(int value) {
	this->value = value;
}

int MyClass::getValue() {
	return value;
}