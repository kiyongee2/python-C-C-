//#include <iostream>
//using namespace std;
//
////�θ� Ŭ����
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
////�ڽ� Ŭ����
//class Student : public Person {
//private:
//	int studentId;  //�л� ���̵�
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
//	//�θ� ��ü ����
//	Person p1;
//	p1.setName("������");
//	cout << "�θ��� �̸�: " << p1.getName() << endl;
//
//	//�ڽ� ��ü ����
//	Student st1;
//	st1.setName("������");
//	st1.setStudentId(101);
//
//	cout << "�л��� �̸�: " << st1.getName() <<
//		", �й�: " << st1.getStduentId() << endl;
//
//	return 0;
//}