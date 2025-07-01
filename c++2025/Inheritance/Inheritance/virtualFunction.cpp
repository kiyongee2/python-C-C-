//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	//Animal() {}  //기본 생성자
//
//	//반드시 virtual로 소멸자 명시함
//	//소멸자 없으면 delete시에 메모리 누수 현상 발생함
//	virtual ~Animal() {} 
//
//	void breathe() {
//		cout << "숨을 쉽니다.\n";
//	}
//	virtual void cry() = 0; //순수 가상 함수
//	//virtual void cry() {}
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "야~ 옹!\n";
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "왈~ 왈~\n";
//	}
//};
//
//int main()
//{
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;
//
//	cat->breathe();
//	cat->cry();
//
//	dog->breathe();
//	dog->cry();
//
//	delete cat;
//	delete dog;
//
//	return 0;
//}