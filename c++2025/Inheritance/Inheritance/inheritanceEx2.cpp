//#include <iostream>
//using namespace std;
//
//class Person {
//protected: //�ڽ� Ŭ���������� ���� ����
//	string name;
//
//public:
//	Person(string name) : name(name) {}
//
//	void greet() {
//		cout << "�ȳ��ϼ���. ����: " << name << endl;
//	}
//
//	void displayInfo() {
//		cout << "Person name: " << name << endl;
//	}
//};
//
////�Լ� ������(override) - ��ӹ޴� Ŭ�������� �Լ��� ������ ������
//class Student : public Person {
//private:
//	int studentId;  //�л� ���̵�
//
//public:
//	Student(string name, int studentId) :
//		Person(name), studentId(studentId) {
//	}
//
//	void greet(){  
//		cout << "�ȳ��ϼ���. ����: " << name <<
//			", �й�: " << studentId << endl;
//	}
//
//	void displayInfo(){
//		cout << "Student name: " << name << endl;
//	}
//};
//
//int main()
//{
//	//�θ� ��ü ����
//	Person p1("������");
//	p1.greet();
//	p1.displayInfo();
//
//	//�ڽ� ��ü ����
//	Student st1("������", 101);
//	st1.greet();
//	st1.displayInfo();
//
//	return 0;
//}
//
