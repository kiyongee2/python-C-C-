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
//	//동적 객체 생성
//	/*Student* st = new Student;
//	st->setName("이산");
//	st->setGrade(2);
//	st->setBan(4);
//
//	cout << "이름: " << st->getName() << endl;
//	cout << "학년: " << st->getGrade() << endl;
//	cout << "반: " << st->getBan() << endl;
//
//	delete st; */ //메모리 해제
//
//	//동적 객체 배열 생성
//	Student* st = new Student[3];
//	st[0].setName("이산");
//	st[0].setGrade(2);
//	st[0].setBan(4);
//
//	st[1].setName("한강");
//	st[1].setGrade(3);
//	st[1].setBan(1);
//
//	st[2].setName("박봄");
//	st[2].setGrade(1);
//	st[2].setBan(2);
//
//	for (int i = 0; i < 3; i++) {
//		cout << "이름: " << st[i].getName() << endl;
//		cout << "학년: " << st[i].getGrade() << endl;
//		cout << "반: " << st[i].getBan() << endl;
//	}
//
//	delete[] st;
//	
//	return 0;
//}