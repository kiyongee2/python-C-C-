//#include <iostream>
//#include <string>
//using namespace std;
//
////상속
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	void setName(string n) {
//		name = n;
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
//	Student s1;
//	s1.setName("담덕");
//	s1.setAge(15);
//	s1.setStudentId(1000);
//
//	cout << "이름: " << s1.getName() << endl;
//	cout << "나이: " << s1.getAge() << endl;
//	cout << "학번: " << s1.getStudentId() << endl;
//
//	return 0;
//}