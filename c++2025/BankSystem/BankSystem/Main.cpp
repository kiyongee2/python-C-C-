
#include "BankAccount.h"

int main() {

	const int SIZE = 3;

	BankAccount accounts[SIZE] = {
		BankAccount(1001, "정우주"),
		BankAccount(1002, "박은하"),
		BankAccount(1003, "한강", 100000),
	};

	//입금
	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	//출력
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	return 0;
}