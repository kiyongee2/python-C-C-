//#include <iostream>
//#include <string>
//using namespace std;
//
////Person 클래스 정의
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	//기본 생성자 생략됨 
//	void setName(string name) {
//		this->name = name;
//	}
//
//	string getName() {
//		return name;
//	}
//
//	void setAge(int a) {
//		age = a;
//	}
//
//	int getAge() {
//		return age;
//	}
//};
//
////Person을 상속한 Student 클래스 정의
//class Student : public Person {
//private:
//	int studentId;
//
//public:
//	void setStudentId(int id) {
//		studentId = id;
//	}
//
//	int getStudentId() {
//		return studentId;
//	}
//};
//
//
//int main()
//{
//	//부모 객체 생성
//	Person p1;
//	p1.setName("광개토태왕");
//	p1.setAge(40);
//
//	//사람의 정보 
//	cout << "이름: " << p1.getName() << endl;
//	cout << "나이: " << p1.getAge() << endl;
//	
//	//자식 객체 생성
//	Student s1;
//	s1.setName("장수왕");
//	s1.setAge(97);
//	s1.setStudentId(1000);
//
//	//학생의 정보 
//	cout << "이름: " << s1.getName() << endl;
//	cout << "나이: " << s1.getAge() << endl;
//	cout << "학번: " << s1.getStudentId() << endl;
//
//	return 0;
//}
