//#include <iostream>
//using namespace std;
//
////ȸ�� ���� Ŭ���� ����
//class MemberService {
//public:
//	bool login(string id, string pwd); //�α���
//	void logout(); //�α׾ƿ�
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
//	cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
//}
//
//int main()
//{
//	MemberService service;
//
//	string userId = "hangang";
//	string password = "k1234";
//
//	//�α��� 
//	bool result = service.login(userId, password);
//	if (result) {
//		cout << "�α��� �Ǿ����ϴ�.\n";
//		cout << userId << "�� ȯ���մϴ�.!\n";
//	}
//	else {
//		cout << "���̵� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n";
//	}
//	cout << "----------------------------------------\n";
//
//	//�α� �ƿ�
//	service.logout();
//
//	return 0;
//}