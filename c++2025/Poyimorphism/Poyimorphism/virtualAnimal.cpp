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
//	void cry() override{  //함수 재정의
//		cout << "야~ 옹!\n";
//	}
//
//	~Cat() { cout << "Cat 소멸자 호출됨\n"; }
//};
//
//class Dog : public Animal {
//public:
//	void cry() override{
//		cout << "왈~ 왈~\n";
//	}
//
//	~Dog() { cout << "Dog 소멸자 호출됨\n"; }
//};
//
//int main()
//{
//	//다형성 - 부모형으로 인스턴스 생성(자동 형변환)
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