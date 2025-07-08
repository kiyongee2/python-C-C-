//BankAccount.h

#include <iostream>
#include <vector>
using namespace std;

//enum �ڷ���
enum TransactionType {
	�Ա�,
	���
};

//����ü 
struct Transaction {
	TransactionType type;
	int amount;
};

//Ŭ����
class BankAccount {
private:
	int accountNumber;
	string owner;
	int balance;
	vector<Transaction> transactions;

public:
	BankAccount(int accountNumber, string owner, int balance = 0) :
		accountNumber(accountNumber), owner(owner), balance(balance) {
	}

	int getAccountNumber();
	void deposit(int amount);
	void withdraw(int amount);
	void displayInfo();
	void getTransactionHistory();

private:
	void addTransaction(TransactionType type, int amount);
};

