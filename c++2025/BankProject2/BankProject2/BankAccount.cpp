#include "BankAccount.h"

//계좌 번호 반환
int BankAccount::getAccountNumber() {
	return accountNumber;
}

//입금 
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액: " <<
			balance << "원\n";
		addTransaction(TransactionType::입금, amount);
	}
}

//출금
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
		addTransaction(TransactionType::출금, amount);
	}
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction trans; //거래 1건 생성
	trans.type = type;
	trans.amount = amount;
	//벡터에 거래 1건씩 저장
	transactions.push_back(trans);
}

void BankAccount::getTransactionHistory() {  //거래 내역 조회
	cout << "[" << owner << "] 계좌 거래 내역(최근 " << transactions.size() << "건)\n";
	if (transactions.empty()) {
		cout << "거래 내역이 없습니다.\n";
		return;
	}

	int i = 1;  //거래 내역 번호
	for (const auto& trans : transactions) {
		cout << i++ << " | " << (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << " | " << trans.amount << "원\n";
	}
}

//계좌 정보
void BankAccount::displayInfo() {
	cout << "\n*계좌 정보\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    계좌주: " << owner << endl;
	cout << "    잔고: " << balance << endl;
}

