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