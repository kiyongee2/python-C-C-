//#include <iostream>
//#include <vector>
//using namespace std;
//
////거래 유형 열거형
//enum TransactionType {
//	입금,
//	출금
//};
//
//struct Transaction {
//	TransactionType type;
//	int amount;
//};
//
////은행 계좌 클래스
//class BankAccount {
//private:
//	int accountNumber;  //계좌번호
//	string owner;       //계좌주
//	int balance;        //잔고
//	vector<Transaction> transactions; //거래내역
//
//public:
//	BankAccount(int accountNumber, string owner, int balance) :
//		accountNumber(accountNumber), owner(owner), balance(balance){ }
//
//	void deposit(int amount);  //입금
//	void withdraw(int amount); //출금
//	void displayInfo();        //계좌 정보
//	void getTransactionHistory(); //거래내역 조회
//
//private:
//	void addTransaction(TransactionType type, int amount);
//};
//
//void BankAccount::deposit(int amount) {
//	if (amount < 0) {
//		cout << "유효한 금액을 입력하세요.\n";
//	}
//	else {
//		balance += amount;
//		cout << amount << "원이 입금되었습니다. 현재 잔액: " <<
//			balance << "원\n";
//	}
//
//	addTransaction(TransactionType::입금, amount);  //입금 거래
//}
//
//void BankAccount::withdraw(int amount) {
//	if (amount < 0 ) {
//		cout << "유효한 금액을 입력하세요.\n";
//	}
//	else if (amount > balance) {
//		cout << "잔액이 부족합니다. 다시 입력하세요\n";
//	}
//	else {
//		balance -= amount;
//		cout << amount << "원이 출금되었습니다. 현재 잔액: " <<
//			balance << "원\n";
//	}
//
//	addTransaction(TransactionType::출금, amount);  //출금 거래
//}
//
////계좌 정보
//void BankAccount::displayInfo() {
//	cout << "\n계좌 정보\n";
//	cout << "  계좌번호: " << accountNumber << endl;
//	cout << "  계좌주: " << owner << endl;
//	cout << "  잔액: " << balance << endl;
//}
//
////거래 추가
//void BankAccount::addTransaction(TransactionType type, int amount) {
//	Transaction trans;
//	trans.type = type;
//	trans.amount = amount;
//	transactions.push_back(trans); //트랜잭션 벡터에 1건 저장
//}
//
////거래 내역 조회
//void BankAccount::getTransactionHistory() {
//	cout << "\n[" << owner << "] 계좌 거래내역 (최근 " << transactions.size() << "건)\n";
//	if (transactions.empty()) {
//		cout << "  거래내역이 없습니다.\n";
//		return;
//	}
//
//	for (const auto& t : transactions) {
//		cout << " | " << (t.type == TransactionType::입금 ? "입금" : "출금");
//		cout << " | " << t.amount << "원\n";
//	}
//}
//
//int main()
//{
//	//계좌 3개 생성
//	BankAccount* accounts = new BankAccount[3]{
//		BankAccount(1001, "이우주", 10000),
//		BankAccount(1002, "정은하", 30000),
//		BankAccount(1003, "한강", 20000),
//	};
//
//	//입금
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//출금
//	accounts[1].withdraw(50000);  //잔액 부족
//	accounts[1].withdraw(20000);
//	
//	//계좌 정보
//	for (int i = 0; i < 3; i++) {
//		accounts[i].displayInfo();
//		accounts[i].getTransactionHistory();
//	}
//
//	delete[] accounts;  //객체 배열 메모리 해제
//
//	return 0;
//}