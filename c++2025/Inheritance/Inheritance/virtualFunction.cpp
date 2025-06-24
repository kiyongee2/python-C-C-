#include <iostream>
using namespace std;

class Animal {
public:
	void breathe() {
		cout << "숨을 쉽니다.\n";
	}
	virtual void cry() = 0 {} //순수 가상 함수
};

class Cat : public Animal {
public:
	void cry() {
		cout << "야~ 옹!\n";
	}
};

int main()
{
	Animal* cat = new Cat;

	cat->breathe();
	cat->cry();

	delete cat;

	return 0;
}