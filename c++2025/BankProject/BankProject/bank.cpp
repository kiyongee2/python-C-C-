#include <iostream>
#include <vector>
using namespace std;

enum TransactionType {
	�Ա�,
	���
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

int main()
{
	//���� ��ü - ���� 3�� ����
	/*BankAccount* accounts = new BankAccount[3]{
		BankAccount(1001, "�̿���", 10000),
		BankAccount(1002, "������", 30000),
		BankAccount(1003, "�Ѱ�", 20000)
	};

	//�Ա�
	accounts[0].deposit(5000);
	accounts[1].deposit(10000);

	//���
	//accounts[1].withdraw(50000);
	accounts[1].withdraw(20000);


	//���� ����
	for (int i = 0; i < 3; i++) {
		accounts[i].displayInfo();
		accounts[i].getTransactionHistory();
	}

	delete[] accounts;*/

	//vector �ڷᱸ�� ���
	vector<BankAccount> accounts;

	accounts.push_back(BankAccount(1001, "�̿���", 10000));
	accounts.push_back(BankAccount(1002, "������", 30000));
	accounts.push_back(BankAccount(1003, "�Ѱ�", 20000));

	//�Ա�
	accounts[0].deposit(5000);
	accounts[1].deposit(10000);

	//���
	//accounts[1].withdraw(50000);
	accounts[1].withdraw(20000);


	//���� ����
	for (auto& account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	system("pause");

	return 0;
}