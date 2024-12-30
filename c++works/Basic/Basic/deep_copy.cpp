//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//class Person {
//	char* name;
//	int id;
//public:
//	Person(const Person& person); //����Ʈ ���� ������
//	Person(int id, const char* name);
//	~Person();
//
//	void show() { cout << id << ',' << name << endl; }
//	void changeName(const char* name);
//};
//
//Person::Person(const Person& person) {
//	this->id = person.id;
//	int len = strlen(person.name);
//	this->name = new char[len + 1]; //name ���ڿ� ���� �Ҵ�
//	strcpy(this->name, person.name); //name ���ڿ� ����
//	cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
//}
//
//Person::Person(int id, const char* name) {
//	this->id = id;
//	int len = strlen(name);
//	this->name = new char[len + 1]; //name ���ڿ� ���� �Ҵ�
//	strcpy(this->name, name); //name ���ڿ� ����
//}
//
//Person::~Person() {
//	if (name)
//		delete[] name;
//}
//
//void Person::changeName(const char* name) {
//	if (strlen(name) > strlen(this->name)) return;
//	strcpy(this->name, name);
//}
//
//int main() {
//
//	Person father(1, "Jerry");
//	Person daughter(father);
//
//	cout << "daughter ��ü ���� ���� ---" << endl;
//	father.show();
//	daughter.show();
//
//	daughter.changeName("Luna");
//	cout << "daughter �̸��� Luna�� ������ �� ---" << endl;
//	father.show();
//	daughter.show();
//
//	// daughter�� �����ߴµ� father �̸��� �Ȱ��� �����
//	/* ������ ���� - daughter ��ü�� �Ҹ�� �� father ��ü�� �Ҹ�ǰ�
//	   father ��ü�� �Ҹ��ڰ� name�� �Ҵ�� �޸𸮸� ���� ��ȯ��
//	   �׷��� daugther�� �Ҹ�ɶ� �̹� ��ȯ�� �޸𸮸� �ٽ� ��ȯ�ϰ� �Ǿ� ����*/
//
//	return 0;
//}