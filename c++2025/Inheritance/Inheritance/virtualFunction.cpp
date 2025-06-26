//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	void breathe() {
//		cout << "¼ûÀ» ½±´Ï´Ù.\n";
//	}
//	virtual void cry() = 0; //¼ø¼ö °¡»ó ÇÔ¼ö
//	//virtual void cry() {}
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "¾ß~ ¿Ë!\n";
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "¿Ð~ ¿Ð~\n";
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