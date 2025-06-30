#include "BankAccount.h"

//���� ��ȣ ��ȯ
int BankAccount::getAccountNumber() {
	return accountNumber;
}

//�Ա� 
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " <<
			balance << "��\n";
		addTransaction(TransactionType::�Ա�, amount);
	}
}

//���
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " <<
			balance << "��\n";
		addTransaction(TransactionType::���, amount);
	}
}

//�ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction trans; //�ŷ� 1�� ����
	trans.type = type;
	trans.amount = amount;
	//���Ϳ� �ŷ� 1�Ǿ� ����
	transactions.push_back(trans);
}

void BankAccount::getTransactionHistory() {  //�ŷ� ���� ��ȸ
	cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� " << transactions.size() << "��)\n";
	if (transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;
	}

	int i = 1;  //�ŷ� ���� ��ȣ
	for (const auto& trans : transactions) {
		cout << i++ << " | " << (trans.type == TransactionType::�Ա� ? "�Ա�" : "���");
		cout << " | " << trans.amount << "��\n";
	}
}

//���� ����
void BankAccount::displayInfo() {
	cout << "\n*���� ����\n";
	cout << "    ���� ��ȣ: " << accountNumber << endl;
	cout << "    ������: " << owner << endl;
	cout << "    �ܰ�: " << balance << endl;
}

