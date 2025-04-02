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
//	cout << "아이디: " << m1.getId() << ", 패스워드: " << m1.getPassword() << endl;
//	cout << "아이디: " << m2.getId() << ", 패스워드: " << m2.getPassword() << endl;
//	cout << "아이디: " << m3.getId() << ", 패스워드: " << m3.getPassword() << endl;*/
//
//	/*Member member[3] = {
//		Member("flower", "f1234"),
//		Member("tree", "t1234"),
//		Member("bird", "b1234")
//	};*/
//
//	//특정 회원 검색
//	/*cout << "아이디: " << member[0].getId() << endl;
//	cout << "패스워드: " << member[0].getPassword() << endl;*/
//
//	/*cout << "********** 회원 현황 **********" << endl;
//	for (int i = 0; i < size(member); i++)
//	{
//		cout << "아이디: " << member[i].getId() << 
//			", 패스워드: " << member[i].getPassword() << endl;
//	}*/
//
//	//동적 객체 생성
//	Member* member = new Member[3]{
//		Member("flower", "f1234"),
//		Member("tree", "t1234"),
//		Member("bird", "b1234")
//	};
//
//	cout << "********** 회원 현황 **********" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "아이디: " << member[i].getId() <<
//			", 패스워드: " << member[i].getPassword() << endl;
//	}
//
//	delete[] member;
//
//	return 0;
//}