
#include "BankAccount.h"

//Transaction 생성자 목록
Transaction::Transaction() {}

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {}

//BankAccount 생성자 목록
BankAccount::BankAccount(int accountNumber, string owner, int balance) : 
	accountNumber(accountNumber), owner(owner), balance(balance){}

// 거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	if (transactionCount < 10) {
		transactions[transactionCount] = Transaction(type, amount);
		transactionCount++;
	}
	else {
		cout << "거래 내역 저장 한도(10건)를 초과했습니다.\n";
	}
}

// 거래 내역 출력
void BankAccount::getTransactionHistory() {
	cout << "\n[" << owner << "] 계좌 거래 내역 (총 " << transactionCount << "건)\n";

	if (transactionCount == 0) {
		cout << "거래 내역이 없습니다.\n";
		return;
	}

	for (int i = 0; i < transactionCount; i++) {
		string typeStr = (transactions[i].type == 입금 ? "입금" : "출금");
		cout << " | " << typeStr << " | " << transactions[i].amount << "원\n";
	}
}



void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
		addTransaction(입금, amount);
	}
}


//계좌 정보 출력 
void BankAccount::displayInfo() {
	cout << "\n[계좌 정보]\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    예금주: " << owner << endl;
	cout << "    현재 잔고: " << balance << endl;
	cout << "-----------------------------\n";
}
