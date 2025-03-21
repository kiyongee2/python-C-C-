//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 매개변수 있는 생성자
//class Animal {
//public:
//	void breathe() {
//		cout << "숨을 쉽니다." << endl;
//	}
//	virtual void cry() {};  //가상(추상) 함수
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "야옹~" << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "멍~ 멍~" << endl;
//	}
//};
//
//int main()
//{
//	//정적 객체 생성
//	/*Cat cat;
//	cat.breathe();
//	cat.cry();*/
//
//	//동적 객체 생성
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