//#include <iostream>
//using namespace std;
//
//class Dog {
//public:
//	string type;
//	int age;
//
//	Dog();  //기본 생성자
//	Dog(string t, int a); //매개변수가 있는 생성자
//	~Dog(); //소멸자
//
//	void dogInfo();
//	void bark();
//};
//
////구현부 분리
////생성자 - '::'(범위 연산자)
//Dog::Dog() {
//	type = "강아지";
//	age = 1;
//}
//
//Dog::Dog(string t, int a) {
//	type = t;
//	age = a;
//}
//
//Dog::~Dog() {}
//
//void Dog::dogInfo() {
//	cout << "강아지 종류: " << type << endl;
//	cout << "강아지 나이: " << age << endl;
//}
//
//void Dog::bark() {
//	cout << "왈~ 왈~\n";
//}
//
//int main()
//{
//	Dog dog1;
//	dog1.dogInfo();
//	dog1.bark();
//
//	Dog dog2("진돗개", 3);
//	dog2.dogInfo();
//	dog2.bark();
//	
//	return 0;
//}
