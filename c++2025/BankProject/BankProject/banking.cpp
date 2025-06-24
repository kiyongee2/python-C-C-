#include "banking.h"

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " <<
			balance << "��\n";
	}

	addTranscation(TransactionType::�Ա�, amount);
}

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
	}

	addTranscation(TransactionType::���, amount);
}

//�ŷ� �߰�
void BankAccount::addTranscation(TransactionType type, int amount) {
	Transaction trans; //�ŷ� 1�� ����
	trans.type = type;
	trans.amount = amount;
	//���Ϳ� �ŷ� 1�Ǿ� ����
	transaction.push_back(trans);
}

//���� ����
void BankAccount::displayInfo() {
	cout << "\n*���� ����\n";
	cout << "    ���� ��ȣ: " << accountNumber << endl;
	cout << "    ������: " << owner << endl;
	cout << "    �ܰ�: " << balance << endl;
}

//�ŷ� ���� ��ȸ
void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� " << transaction.size() << "��)\n";
	if (transaction.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;
	}

	for (const auto& trans : transaction) {
		cout << " | " << (trans.type == TransactionType::�Ա� ? "�Ա�" : "���");
		cout << " | " << trans.amount << "��\n";

	}
}