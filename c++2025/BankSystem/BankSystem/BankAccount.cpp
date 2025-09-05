
#include "BankAccount.h"

//Transaction ������ ���(�ʱ�ȭ)
Transaction::Transaction() : type(�Ա�), amount(0) {}

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {}

//BankAccount ������ ���
BankAccount::BankAccount(int accountNumber, string owner, int balance) : 
	accountNumber(accountNumber), owner(owner), balance(balance){}

// �ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	if (transactionCount < 10) {
		transactions[transactionCount] = Transaction(type, amount);
		transactionCount++;
	}
	else {
		cout << "�ŷ� ���� ���� �ѵ�(10��)�� �ʰ��߽��ϴ�.\n";
	}
}

// �ŷ� ���� ���
void BankAccount::getTransactionHistory() {
	cout << "\n[" << owner << "] ���� �ŷ� ���� (�� " 
		<< transactionCount << "��)\n";

	if (transactionCount == 0) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;
	}

	for (int i = 0; i < transactionCount; i++) {
		string typeStr = (transactions[i].type == �Ա� ? "�Ա�" : "���");
		cout << " | " << typeStr << " | " << transactions[i].amount << "��\n";
	}
	cout << "========================================\n";
}

//�Ա� ���
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " 
			<< balance << "��\n";
		addTransaction(�Ա�, amount);
	}
}

//��� ���
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " 
			<< balance << "��\n";
		addTransaction(���, amount);
	}
}

//���� ���� ��� 
void BankAccount::displayInfo() {
	cout << "\n[���� ����]\n";
	cout << "    ���� ��ȣ: " << accountNumber << endl;
	cout << "    ������: " << owner << endl;
	cout << "    ���� �ܰ�: " << balance << endl;
	cout << "----------------------------------------\n";
}

