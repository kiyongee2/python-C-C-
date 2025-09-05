#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

//emum 상수 정의
enum TransactionType { 
	입금,
	출금
};

//구조체 정의
struct Transaction { 
	TransactionType type;
	int amount;

	//생성자
	Transaction();
	Transaction(TransactionType type, int amount);
};

//클래스 정의
class BankAccount {
private:
	int accountNumber;  //계좌 번호
	string owner;       //예금주
	int balance;        //잔액
	Transaction transactions[10];  //거래
	int transactionCount = 0;

public:
	BankAccount(int accountNumber, string owner, int balance = 0);

	void deposit(int amount);
	void withdraw(int amount);
	void displayInfo();
	void getTransactionHistory();

private:
	void addTransaction(TransactionType type, int amount);
};
#endif 

