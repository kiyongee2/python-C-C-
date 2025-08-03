//#include <iostream>
//using namespace std;
//
////부모 클래스
//class Person {
//private: 
//	string name;
//
//public:
//	void setName(string name) {
//		this->name = name;
//	}
//
//	string getName() { return name; }
//};
//
////자식 클래스
//class Student : public Person {
//private:
//	int studentId;  //학생 아이디
//
//public:
//	void setStudentId(int studentId) {
//		this->studentId = studentId;
//	}
//
//	int getStduentId() { return studentId; }
//};
//
//int main()
//{
//	//부모 객체 생성
//	Person p1;
//	p1.setName("이종범");
//	cout << "부모의 이름: " << p1.getName() << endl;
//
//	//자식 객체 생성
//	Student st1;
//	st1.setName("이정후");
//	st1.setStudentId(101);
//
//	cout << "학생의 이름: " << st1.getName() <<
//		", 학번: " << st1.getStduentId() << endl;
//
//	return 0;
//}