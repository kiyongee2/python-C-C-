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
//class Student : public Person {
//private:
//	int studentId;  //�л� ���̵�
//
//public:
//	Student(string name, int studentId) :
//		Person(name), studentId(studentId) {
//	}
//
//	void greet() override{  //�Լ� ������
//		cout << "�ȳ��ϼ���. ����: " << name <<
//			", �й�: " << studentId << endl;
//	}
//
//	void displayInfo() override{
//		cout << "Student name: " << name << endl;
//	}
//};
//
//int main()
//{
//	/*//�θ� ��ü ����
//	Person p1("������");
//	p1.greet();
//	p1.displayInfo();
//
//	//�ڽ� ��ü ����
//	Student st1("������", 101);
//	st1.greet();
//	st1.displayInfo();*/
//
//	//������ - ��ü ����
//	Person* p2 = new Student("�����", 102);
//	p2->greet();  //Student�� greet() ȣ��
//	p2->displayInfo(); //Student�� displayInfo  () ȣ��
//
//	return 0;
//}