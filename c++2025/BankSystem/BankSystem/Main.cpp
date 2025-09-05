
#include "BankAccount.h"

int main() {

	const int SIZE = 3;

	BankAccount* accounts = new BankAccount[SIZE] {
		BankAccount(1001, "정우주"),
		BankAccount(1002, "박은하"),
		BankAccount(1003, "한강", 100000),
	};

	//입금
	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	//출금
	accounts[1].withdraw(20000);
	accounts[1].withdraw(50000);

	//출력
	for (int i = 0; i < SIZE; i++) {
		accounts[i].displayInfo();
		accounts[i].getTransactionHistory();
	}

	delete[] accounts;

	return 0;
}

