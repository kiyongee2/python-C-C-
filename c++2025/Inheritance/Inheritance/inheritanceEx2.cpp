//#include <iostream>
//using namespace std;
//
//class Person {
//protected: //자식 클래스에서만 접근 가능
//	string name;
//
//public:
//	Person(string name) : name(name) {}
//
//	void greet() {
//		cout << "안녕하세요. 성명: " << name << endl;
//	}
//
//	void displayInfo() {
//		cout << "Person name: " << name << endl;
//	}
//};
//
////함수 재정의(override) - 상속받는 클래스에서 함수의 내용을 변경함
//class Student : public Person {
//private:
//	int studentId;  //학생 아이디
//
//public:
//	Student(string name, int studentId) :
//		Person(name), studentId(studentId) {
//	}
//
//	void greet(){  
//		cout << "안녕하세요. 성명: " << name <<
//			", 학번: " << studentId << endl;
//	}
//
//	void displayInfo(){
//		cout << "Student name: " << name << endl;
//	}
//};
//
//int main()
//{
//	//부모 객체 생성
//	Person p1("이종범");
//	p1.greet();
//	p1.displayInfo();
//
//	//자식 객체 생성
//	Student st1("이정후", 101);
//	st1.greet();
//	st1.displayInfo();
//
//	return 0;
//}
//
