//#include <iostream>
//#include <vector>
//using namespace std;
//
////enum 자료형 - 거래 유형
//enum TransactionType {
//	입금,
//	출금
//};
//
////struct 자료형 - 거래
//struct Transaction {
//	TransactionType type;  //거래 유형
//	int amount;            //거래 금액
//};
//
////클래스 정의 - 은행 계정
//class BankAccount {
//private:
//	int accountNumber;  //계좌번호
//	string owner;       //계좌주
//	int balance;        //잔고
//	vector<Transaction> transaction; //거래 내역
//
//public:
//	BankAccount(int accountNumber, string owner, int balance) :
//		accountNumber(accountNumber), owner(owner), balance(balance) {
//	}
//
//	void deposit(int amount);  //입금
//	void withdraw(int amount); //출금
//	void displayInfo();        //계좌 정보 출력
//	void getTransactionHistory(); //거래 내역 조회
//
//private:
//	//트랜잭션 추가
//	void addTranscation(TransactionType type, int amount); 
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
//	addTranscation(TransactionType::입금, amount);
//}
//
//void BankAccount::withdraw(int amount) {
//	if (amount < 0) {
//		cout << "유효한 금액을 입력하세요.\n";
//	}
//	else if (amount > balance) {
//		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
//	}
//	else {
//		balance -= amount;
//		cout << amount << "원이 출금되었습니다. 현재 잔액: " <<
//			balance << "원\n";
//	}
//
//	addTranscation(TransactionType::출금, amount);
//}
//
////거래 내역 저장
//void BankAccount::addTranscation(TransactionType type, int amount) {
//	Transaction trans; //거래 1건 생성
//	trans.type = type;
//	trans.amount = amount;
//
//	//벡터에 거래 1건씩 저장
//	transaction.push_back(trans);
//}
//
////거래 내역 조회
//void BankAccount::getTransactionHistory() {
//	cout << "[" << owner << "] 계좌 거래 내역(최근 " << transaction.size() << "건)\n";
//	if (transaction.empty()) {
//		cout << "거래 내역이 없습니다.\n";
//		return;
//	}
//
//	for (Transaction trans : transaction) { //자료형 변수 : 객체 이름
//		cout << " |" << (trans.type == TransactionType::입금 ? "입금" : "출금");
//		cout << "| " << trans.amount << "원\n";
//
//	}
//}
//
////계좌 정보
//void BankAccount::displayInfo() {
//	cout << "\n*계좌 정보\n";
//	cout << "    계좌 번호: " << accountNumber << endl;
//	cout << "    계좌주: " << owner << endl;
//	cout << "    잔고: " << balance << endl;
//}
//
//int main()
//{
//	//동적 객체 - 계좌 3개 생성
//	/*BankAccount* accounts = new BankAccount[3]{
//		BankAccount(1001, "이우주", 10000),
//		BankAccount(1002, "정은하", 30000),
//		BankAccount(1003, "한강", 20000)
//	};
//
//	//입금
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//출금
//	//accounts[1].withdraw(50000);
//	accounts[1].withdraw(20000);
//
//
//	//계좌 정보
//	for (int i = 0; i < 3; i++) {
//		accounts[i].displayInfo();
//		accounts[i].getTransactionHistory();
//	}
//
//	delete[] accounts;*/
//
//	//vector 자료구조 사용
//	vector<BankAccount> accounts;
//
//	accounts.push_back(BankAccount(1001, "이우주", 10000));
//	accounts.push_back(BankAccount(1002, "정은하", 30000));
//	accounts.push_back(BankAccount(1003, "한강", 20000));
//
//	//입금
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//출금
//	accounts[1].withdraw(20000);
//	accounts[1].withdraw(50000);
//
//
//	//계좌 정보
//	for (BankAccount account : accounts) {
//		account.displayInfo();
//		account.getTransactionHistory();
//	}
//
//	system("pause");
//
//	return 0;
//}