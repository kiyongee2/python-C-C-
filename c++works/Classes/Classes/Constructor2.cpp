//#include <iostream>
//using namespace std;
//
////Dog 클래스 정의 - 매개가 있는 생성자 사용
//class Dog {
//public:
//	//멤버 변수
//	string type;
//	int age;
//
//	Dog(); //기본 생성자
//	Dog(string t, int a); //매개변수 있는 생성자
//	~Dog();  //소멸자 - 생략 가능
//
//	//멤버 함수
//	void dogInfo();
//	void bark();
//};
//
//Dog::Dog(){
//	type = "강아지";
//	age = 1;
//}
//
//Dog::~Dog() {
//	cout << "객체가 소멸됩니다..\n";
//}
//
//Dog::Dog(string t, int a){
//	type = t;
//	age = a;
//}
//
//void Dog::dogInfo()
//{
//	cout << "강아지 종류 : " << type << endl;
//	cout << "강아지 나이 : " << age << "세" << endl;
//}
//
//void Dog::bark()
//{
//	cout << "멍~ 멍~\n";
//}
//
//int main()
//{
//	Dog dog;    //기본 생성
//	dog.dogInfo();
//
//	Dog dog2("진돗개", 3); //생성자에 입력
//	dog2.dogInfo();
//
//	return 0;
//}
