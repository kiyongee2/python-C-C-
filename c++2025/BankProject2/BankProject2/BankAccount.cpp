#include "BankAccount.h"

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount){}

BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance){}

int BankAccount::getAccountNumber() { //계좌 번호 반환
	return accountNumber;
}

void BankAccount::deposit(int amount) { //예금 기능
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
		addTransaction(입금, amount); //트랜잭션 추가
	}
}

void BankAccount::withdraw(int amount) { //출금 기능
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원\n";
		addTransaction(출금, amount);
	}
}

void BankAccount::displayInfo() { //계좌 정보 출력
	cout << "\n*계좌 정보\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    계좌주: " << owner << endl;
	cout << "    잔고: " << balance << endl;
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount); //거래 1건 생성
	//벡터에 거래 1건씩 저장
	transactions.push_back(transaction);
}

//거래 내역 조회
void BankAccount::getTransactionHistory() {  
	cout << "[" << owner << "] 계좌 거래 내역(최근 " << transactions.size() << "건)\n";
	if (transactions.empty()) {
		cout << "거래 내역이 없습니다.\n";
		return;
	}

	int i = 1;  //거래 내역 번호
	for (const auto& trans : transactions) {
		string typeStr = (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << i++ << " |" << typeStr << "| " << trans.amount << "원\n";
	}
}