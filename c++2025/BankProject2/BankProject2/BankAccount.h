#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <vector>
using namespace std;

//enum 자료형
enum TransactionType {
	입금,
	출금
};

//구조체 
struct Transaction {
	TransactionType type; //거래 유형
	int amount;           //거래 금액

	Transaction(TransactionType type, int amount);
};

//클래스
class BankAccount {
private:
	int accountNumber;  //계좌번호
	string owner;       //예금주
	int balance;        //잔고
	vector<Transaction> transactions; //거래 벡터

public:
	//생성자 선언
	BankAccount(int accountNumber, string owner, int balance = 0);

	int getAccountNumber();   //계좌 번호 반환
	void deposit(int amount); //예금
	void withdraw(int amount); //출금
	void displayInfo();        //계좌 정보
	void getTransactionHistory(); //거래 내역

private:
	void addTransaction(TransactionType type, int amount); //거래 추가
};

#endif 
