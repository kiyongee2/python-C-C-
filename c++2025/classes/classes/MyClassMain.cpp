#include <iostream>
#include "MyClass.h"

using namespace std;

int main() {

	MyClass myClass;
	myClass.setValue(128);
	cout << myClass.getValue() << endl;

	return 0;
}