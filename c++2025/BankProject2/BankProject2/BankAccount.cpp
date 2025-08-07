#include "BankAccount.h"

Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount){}

BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance){}

int BankAccount::getAccountNumber() { //���� ��ȣ ��ȯ
	return accountNumber;
}

void BankAccount::deposit(int amount) { //���� ���
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
		addTransaction(�Ա�, amount); //Ʈ����� �߰�
	}
}

void BankAccount::withdraw(int amount) { //��� ���
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
		addTransaction(���, amount);
	}
}

void BankAccount::displayInfo() { //���� ���� ���
	cout << "\n*���� ����\n";
	cout << "    ���� ��ȣ: " << accountNumber << endl;
	cout << "    ������: " << owner << endl;
	cout << "    �ܰ�: " << balance << endl;
}

//�ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount); //�ŷ� 1�� ����
	//���Ϳ� �ŷ� 1�Ǿ� ����
	transactions.push_back(transaction);
}

//�ŷ� ���� ��ȸ
void BankAccount::getTransactionHistory() {  
	cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� " << transactions.size() << "��)\n";
	if (transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;
	}

	int i = 1;  //�ŷ� ���� ��ȣ
	for (const auto& trans : transactions) {
		string typeStr = (trans.type == TransactionType::�Ա� ? "�Ա�" : "���");
		cout << i++ << " |" << typeStr << "| " << trans.amount << "��\n";
	}
}