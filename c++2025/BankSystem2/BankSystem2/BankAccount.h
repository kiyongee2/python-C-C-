#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <vector>
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
	vector<Transaction> transactions; //거래 벡터

public:
	//생성자 선언
	BankAccount(int accountNumber, string owner, int balance = 0);

	int getAccountNumber();     //계좌번호 반환
	void deposit(int amount);   //예금 기능
	void withdraw(int amount);  //출금 기능
	void displayInfo();         //계좌 정보
	void getTransactionHistory(); //거래 내역

private:
	//거래 추가
	void addTransaction(TransactionType type, int amount);
};
#endif 


