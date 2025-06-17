#include "Dog.h"

int main()
{
	Dog dog1("진돗개", 5);

	cout << "**** 강아지 정보 ****" << endl;
	cout << "강아지 종류: " << dog1.getType() << endl;
	cout << "강아지 나이: " << dog1.getAge() << endl;

	dog1.bark();

	return 0;
}
