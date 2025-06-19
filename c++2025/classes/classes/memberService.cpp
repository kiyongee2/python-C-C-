//#include <iostream>
//using namespace std;
//
////회원 서비스 클래스 정의
//class MemberService {
//public:
//	bool login(string id, string pwd); //로그인
//	void logout(); //로그아웃
//};
//
//bool MemberService::login(string id, string pwd) {
//	if (id.compare("hangang") == 0 && pwd.compare("k1234") == 0) {
//		return true;
//	}
//	return false;
//}
//
//void MemberService::logout() {
//	cout << "로그아웃 되었습니다.\n";
//}
//
//int main()
//{
//	MemberService service;
//
//	string userId = "hangang";
//	string password = "k1234";
//
//	//로그인 
//	bool result = service.login(userId, password);
//	if (result) {
//		cout << "로그인 되었습니다.\n";
//		cout << userId << "님 환영합니다.!\n";
//	}
//	else {
//		cout << "아이디나 비밀번호가 일치하지 않습니다.\n";
//	}
//	cout << "----------------------------------------\n";
//
//	//로그 아웃
//	service.logout();
//
//	return 0;
//}