
#include "BankAccount.h"

//Transaction 생성자 목록(초기화)
Transaction::Transaction() : type(입금), amount(0) {}

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {
}

//BankAccount 생성자 목록
BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance) {
}

//계좌번호 반환
int BankAccount::getAccountNumber() { return accountNumber; }

// 거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount); //거래 1건 생성
	transactions.push_back(transaction);  //벡터에 저장
}

// 거래 내역 출력
void BankAccount::getTransactionHistory() {
	cout << "\n[" << owner << "] 계좌 거래 내역 (총 "
		<< transactions.size() << "건)\n";

	if (transactions.empty()) {
		cout << "거래 내역이 없습니다.\n";
		return;
	}

	for (auto& transaction : transactions) {
		string typeStr = (transaction.type == 입금 ? "입금" : "출금");
		cout << " | " << typeStr << " | " << transaction.amount << "원\n";
	}
}

//입금 기능
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액: "
			<< balance << "원\n";
		addTransaction(입금, amount);
	}
}

//출금 기능
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 출금되었습니다. 현재 잔액: "
			<< balance << "원\n";
		addTransaction(출금, amount);
	}
}

//계좌 정보 출력 
void BankAccount::displayInfo() {
	cout << "\n[계좌 정보]\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    예금주: " << owner << endl;
	cout << "    현재 잔고: " << balance << endl;
	cout << "----------------------------------------\n";
}

