#include <iostream>
#include <vector>
using namespace std;

enum TransactionType {
	입금,
	출금
};

struct Transaction {
	TransactionType type;
	int amount;
};

class BankAccount {
private:
	int accountNumber;
	string owner;
	int balance;
	vector<Transaction> transaction;

public:
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance) {
	}

	void deposit(int amount);
	void withdraw(int amount);
	void displayInfo();
	void getTransactionHistory();

private:
	void addTranscation(TransactionType type, int amount);
};

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액: " <<
			balance << "원\n";
	}

	addTranscation(TransactionType::입금, amount);
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 출금되었습니다. 현재 잔액: " <<
			balance << "원\n";
	}

	addTranscation(TransactionType::출금, amount);
}

//거래 추가
void BankAccount::addTranscation(TransactionType type, int amount) {
	Transaction trans; //거래 1건 생성
	trans.type = type;
	trans.amount = amount;
	//벡터에 거래 1건씩 저장
	transaction.push_back(trans);
}

//계좌 정보
void BankAccount::displayInfo() {
	cout << "\n*계좌 정보\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    계좌주: " << owner << endl;
	cout << "    잔고: " << balance << endl;
}

//거래 내역 조회
void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] 계좌 거래 내역(최근 " << transaction.size() << "건)\n";
	if (transaction.empty()) {
		cout << "거래 내역이 없습니다.\n";
		return;
	}

	for (const auto& trans : transaction) {
		cout << " | " << (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << " | " << trans.amount << "원\n";

	}
}

int main()
{
	//동적 객체 - 계좌 3개 생성
	/*BankAccount* accounts = new BankAccount[3]{
		BankAccount(1001, "이우주", 10000),
		BankAccount(1002, "정은하", 30000),
		BankAccount(1003, "한강", 20000)
	};

	//입금
	accounts[0].deposit(5000);
	accounts[1].deposit(10000);

	//출금
	//accounts[1].withdraw(50000);
	accounts[1].withdraw(20000);


	//계좌 정보
	for (int i = 0; i < 3; i++) {
		accounts[i].displayInfo();
		accounts[i].getTransactionHistory();
	}

	delete[] accounts;*/

	//vector 자료구조 사용
	vector<BankAccount> accounts;

	accounts.push_back(BankAccount(1001, "이우주", 10000));
	accounts.push_back(BankAccount(1002, "정은하", 30000));
	accounts.push_back(BankAccount(1003, "한강", 20000));

	//입금
	accounts[0].deposit(5000);
	accounts[1].deposit(10000);

	//출금
	//accounts[1].withdraw(50000);
	accounts[1].withdraw(20000);


	//계좌 정보
	for (auto& account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	system("pause");

	return 0;
}