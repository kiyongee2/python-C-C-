//#include <iostream>
//#include <string>
//using namespace std;
//
//class Member {
//private:
//	string id;
//	string password;
//
//public:
//	Member(string id, string password) {
//		this->id = id;
//		this->password = password;
//	}
//
//	string getId();
//	string getPassword();
//};
//
//string Member::getId() {
//	return id;
//}
//
//string Member::getPassword() {
//	return password;
//}
//
//int main()
//{
//	/*Member m1("flower", "f1234");
//	Member m2("tree", "t1234");
//	Member m3("bird", "b1234");
//
//	cout << "���̵�: " << m1.getId() << ", �н�����: " << m1.getPassword() << endl;
//	cout << "���̵�: " << m2.getId() << ", �н�����: " << m2.getPassword() << endl;
//	cout << "���̵�: " << m3.getId() << ", �н�����: " << m3.getPassword() << endl;*/
//
//	/*Member member[3] = {
//		Member("flower", "f1234"),
//		Member("tree", "t1234"),
//		Member("bird", "b1234")
//	};*/
//
//	//Ư�� ȸ�� �˻�
//	/*cout << "���̵�: " << member[0].getId() << endl;
//	cout << "�н�����: " << member[0].getPassword() << endl;*/
//
//	/*cout << "********** ȸ�� ��Ȳ **********" << endl;
//	for (int i = 0; i < size(member); i++)
//	{
//		cout << "���̵�: " << member[i].getId() << 
//			", �н�����: " << member[i].getPassword() << endl;
//	}*/
//
//	//���� ��ü ����
//	Member* member = new Member[3]{
//		Member("flower", "f1234"),
//		Member("tree", "t1234"),
//		Member("bird", "b1234")
//	};
//
//	cout << "********** ȸ�� ��Ȳ **********" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "���̵�: " << member[i].getId() <<
//			", �н�����: " << member[i].getPassword() << endl;
//	}
//
//	delete[] member;
//
//	return 0;
//}