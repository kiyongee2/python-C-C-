//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//class Person {
//	char* name;
//	int id;
//public:
//	Person(const Person& person); //디폴트 복사 생성자
//	Person(int id, const char* name);
//	~Person();
//
//	void show() { cout << id << ',' << name << endl; }
//	void changeName(const char* name);
//};
//
//Person::Person(const Person& person) {
//	this->id = person.id;
//	int len = strlen(person.name);
//	this->name = new char[len + 1]; //name 문자열 공간 할당
//	strcpy(this->name, person.name); //name 문자열 복사
//	cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
//}
//
//Person::Person(int id, const char* name) {
//	this->id = id;
//	int len = strlen(name);
//	this->name = new char[len + 1]; //name 문자열 공간 할당
//	strcpy(this->name, name); //name 문자열 복사
//}
//
//Person::~Person() {
//	if (name)
//		delete[] name;
//}
//
//void Person::changeName(const char* name) {
//	if (strlen(name) > strlen(this->name)) return;
//	strcpy(this->name, name);
//}
//
//int main() {
//
//	Person father(1, "Jerry");
//	Person daughter(father);
//
//	cout << "daughter 객체 생성 직후 ---" << endl;
//	father.show();
//	daughter.show();
//
//	daughter.changeName("Luna");
//	cout << "daughter 이름을 Luna로 변경한 후 ---" << endl;
//	father.show();
//	daughter.show();
//
//	// daughter를 변경했는데 father 이름도 똑같이 변경됨
//	/* 비정상 종료 - daughter 객체가 소멸된 후 father 객체가 소멸되고
//	   father 객체의 소멸자가 name에 할당된 메모리를 힙에 반환함
//	   그러나 daugther가 소멸될때 이미 반환한 메모리를 다시 반환하게 되어 오류*/
//
//	return 0;
//}