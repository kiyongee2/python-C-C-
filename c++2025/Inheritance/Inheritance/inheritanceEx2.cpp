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
//class Student : public Person {
//private:
//	int studentId;  //학생 아이디
//
//public:
//	Student(string name, int studentId) :
//		Person(name), studentId(studentId) {
//	}
//
//	void greet() override{  //함수 재정의
//		cout << "안녕하세요. 성명: " << name <<
//			", 학번: " << studentId << endl;
//	}
//
//	void displayInfo() override{
//		cout << "Student name: " << name << endl;
//	}
//};
//
//int main()
//{
//	/*//부모 객체 생성
//	Person p1("신유진");
//	p1.greet();
//	p1.displayInfo();
//
//	//자식 객체 생성
//	Student st1("이정우", 101);
//	st1.greet();
//	st1.displayInfo();*/
//
//	//다형성 - 객체 생성
//	Person* p2 = new Student("우상형", 102);
//	p2->greet();  //Student의 greet() 호출
//	p2->displayInfo(); //Student의 displayInfo  () 호출
//
//	return 0;
//}