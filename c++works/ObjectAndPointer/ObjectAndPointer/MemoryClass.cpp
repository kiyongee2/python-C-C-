//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//	string name;
//	int grade;
//	int ban;
//public:
//	Student() {cout << "=== Student Start ===\n";}
//	~Student() { cout << "=== Student End ===\n"; }
//
//	void setName(string name) { this->name = name; }
//	string getName() { return name; }
//	void setGrade(int grade) { this->grade = grade; }
//	int getGrade() { return grade; }
//	void setBan(int ban) { this->ban = ban; }
//	int getBan() { return ban; }
//};
//
//int main()
//{
//	//���� ��ü ����
//	/*Student* st = new Student;
//	st->setName("�̻�");
//	st->setGrade(2);
//	st->setBan(4);
//
//	cout << "�̸�: " << st->getName() << endl;
//	cout << "�г�: " << st->getGrade() << endl;
//	cout << "��: " << st->getBan() << endl;
//
//	delete st; */ //�޸� ����
//
//	//���� ��ü �迭 ����
//	Student* st = new Student[3];
//	st[0].setName("�̻�");
//	st[0].setGrade(2);
//	st[0].setBan(4);
//
//	st[1].setName("�Ѱ�");
//	st[1].setGrade(3);
//	st[1].setBan(1);
//
//	st[2].setName("�ں�");
//	st[2].setGrade(1);
//	st[2].setBan(2);
//
//	for (int i = 0; i < 3; i++) {
//		cout << "�̸�: " << st[i].getName() << endl;
//		cout << "�г�: " << st[i].getGrade() << endl;
//		cout << "��: " << st[i].getBan() << endl;
//	}
//
//	delete[] st;
//	
//	return 0;
//}