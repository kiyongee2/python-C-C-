
#include "BankAccount.h"

int main() {

	const int SIZE = 3;

	BankAccount accounts[SIZE] = {
		BankAccount(1001, "������"),
		BankAccount(1002, "������"),
		BankAccount(1003, "�Ѱ�", 100000),
	};

	//�Ա�
	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	//���
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	return 0;
}