//#include <iostream>
//using namespace std;
//
//class Dog {
//public:
//	string type;
//	int age;
//
//	Dog();  //�⺻ ������
//	Dog(string t, int a); //�Ű������� �ִ� ������
//	~Dog(); //�Ҹ���
//
//	void dogInfo();
//	void bark();
//};
//
////������ �и�
////������ - '::'(���� ������)
//Dog::Dog() {
//	type = "������";
//	age = 1;
//}
//
//Dog::Dog(string t, int a) {
//	type = t;
//	age = a;
//}
//
//Dog::~Dog() {}
//
//void Dog::dogInfo() {
//	cout << "������ ����: " << type << endl;
//	cout << "������ ����: " << age << endl;
//}
//
//void Dog::bark() {
//	cout << "��~ ��~\n";
//}
//
//int main()
//{
//	Dog dog1;
//	dog1.dogInfo();
//	dog1.bark();
//
//	Dog dog2("������", 3);
//	dog2.dogInfo();
//	dog2.bark();
//	
//	return 0;
//}
