//#include <iostream>
//#include <string>
//using namespace std;
//
////Person Ŭ���� ����
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	//�⺻ ������ ������ 
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
////Person�� ����� Student Ŭ���� ����
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
//	//�θ� ��ü ����
//	Person p1;
//	p1.setName("�������¿�");
//	p1.setAge(40);
//
//	//����� ���� 
//	cout << "�̸�: " << p1.getName() << endl;
//	cout << "����: " << p1.getAge() << endl;
//	
//	//�ڽ� ��ü ����
//	Student s1;
//	s1.setName("�����");
//	s1.setAge(97);
//	s1.setStudentId(1000);
//
//	//�л��� ���� 
//	cout << "�̸�: " << s1.getName() << endl;
//	cout << "����: " << s1.getAge() << endl;
//	cout << "�й�: " << s1.getStudentId() << endl;
//
//	return 0;
//}
