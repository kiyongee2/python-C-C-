//#include <iostream>
//#include <vector>
//using namespace std;
//
//class BankAccount {
//	int accountNumber; //계좌 번호
//	string owner;      //계좌주
//	int balance;       //잔액
//
//public:
//	BankAccount(int accountNumber, string owner, int balance) :
//		accountNumber(accountNumber), owner(owner), balance(balance) {}
//
//	void displayInfo();  //계좌 정보
//	void deposit(int amount);  //입금
//	void withdraw(int amount); //출금
//};
//
//void BankAccount::displayInfo() {
//	cout << "계좌 정보\n";
//	cout << "  계좌 번호: " << accountNumber << endl;
//	cout << "  계좌주: " << owner << endl;
//	cout << "  잔액: " << balance << "원" << endl;
//}
//
//void BankAccount::deposit(int amount) {
//	if (amount < 0) {
//		cout << "유효한 금액을 입력하세요.\n";
//	}else {
//		balance += amount;
//		cout << amount << "원이 입금되었습니다. 현재 잔액: " 
//			<< balance << "원\n";
//	}
//}
//
//void BankAccount::withdraw(int amount) {
//	if (amount < 0 || amount >= balance ) {
//		cout << "유효한 금액을 입력하세요.\n";
//	}
//	else {
//		balance -= amount;
//		cout << amount << "원이 출금되었습니다. 현재 잔액: " 
//			<< balance << "원\n";
//	}
//}
//
//int main()
//{
//	//은행 계좌를 저장할 벡터 컨테이너 생성
//	vector<BankAccount> accounts;
//
//	//계좌 생성
//	accounts.push_back(BankAccount(1000, "이우주", 10000));
//	accounts.push_back(BankAccount(1001, "정은하", 50000));
//	accounts.push_back(BankAccount(1002, "한강", 20000));
//
//	//accounts[0].displayInfo(); //첫번째 계좌 정보
//
//	accounts[0].deposit(15000);  //1000번 계좌에 입금
//	accounts[1].withdraw(20000); //1001번 계좌에서 출금
//	
//	//전체 계좌 정보 - 출력1
//	/*for (int i = 0; i < size(accounts); i++) {
//		cout << "-----------------------------------------------\n";
//		accounts[i].displayInfo();
//	}
//
//	// 출력 2
//	for (BankAccount account : accounts) {
//		cout << "-----------------------------------------------\n";
//		account.displayInfo();
//	}*/
//
//	// 출력 3
//	for (auto& account : accounts) { //auto는 각각의 BankAccount 객체 참조
//		cout << "-----------------------------------------------\n";
//		account.displayInfo();
//	}
//	cout << "-----------------------------------------------\n";
//
//	return 0;
//}
