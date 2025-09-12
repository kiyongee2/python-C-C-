
#include "BankAccount.h"

//Transaction ������ ���(�ʱ�ȭ)
Transaction::Transaction() : type(�Ա�), amount(0) {}

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {
}

//BankAccount ������ ���
BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance) {
}

//���¹�ȣ ��ȯ
int BankAccount::getAccountNumber() { return accountNumber; }

// �ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount); //�ŷ� 1�� ����
	transactions.push_back(transaction);  //���Ϳ� ����
}

// �ŷ� ���� ���
void BankAccount::getTransactionHistory() {
	cout << "\n[" << owner << "] ���� �ŷ� ���� (�� "
		<< transactions.size() << "��)\n";

	if (transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;
	}

	for (auto& transaction : transactions) {
		string typeStr = (transaction.type == �Ա� ? "�Ա�" : "���");
		cout << " | " << typeStr << " | " << transaction.amount << "��\n";
	}
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

