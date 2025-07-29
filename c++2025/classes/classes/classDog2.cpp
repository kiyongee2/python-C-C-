//#include <iostream>
//using namespace std;
//
//class Dog {
//public: //접근 제어(공개)
//	string type; //종류
//	int age;     //나이
//
//	Dog() {}  //기본 생성자(생략 가능)
//
//	Dog(string t, int a) { //인자를 가진 생성자
//		type = t;
//		age = a;
//	}
//
//	~Dog() {} //소멸자
//
//	void dogInfo() {
//		cout << "강아지 종류: " << type << endl;
//		cout << "강아지 나이: " << age << endl;
//	}
//
//	void bark() { cout << "왈~ 왈~\n"; }
//};
//
//int main()
//{
//	//기본 생성자로 인스턴스 dog1 생성
//	Dog dog1;
//	dog1.type = "푸들";
//	dog1.age = 2;
//
//	dog1.dogInfo();
//	dog1.bark();
//
//	//인자가 있는 생성자로 인스턴스 dog2 생성
//	Dog dog2("진돗개", 3);
//	dog2.dogInfo();
//	dog2.bark();
//
//	return 0;
//}
//
