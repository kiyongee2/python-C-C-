#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
	int accountNumber;  // ���¹�ȣ
	string owner;       // ���� ������
	int balance;        // �ܾ�

public:
	//������
	BankAccount(int accNum, string name, int initBalance = 0) {
		accountNumber = accNum;
		owner = name;
		balance = initBalance;
	}

	//���� ����
	void displayInfo() {
		cout << "���� ����\n";
		cout << "  ���� ��ȣ: " << accountNumber << endl;
		cout << "  ������: " << owner << endl;
		cout << "  �ܾ�: " << balance << "��" << endl;
	}

	//�Ա�
	void deposit(int amount)
	{
		if (amount > 0){
			balance += amount;
			cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ� " << balance << "��\n";
		}
		else {
			cout << " ��ȿ�� �ݾ��� �Է��ϼ���.\n";
		}
	}

	//���
	void withdraw(int amount)
	{
		if (amount > 0 || amount < balance) {
			balance -= amount;
			cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ� " << balance << "��\n";
		}
		else {
			cout << " ��ȿ�� �ݾ��� �Է��ϼ���.\n";
		}
	}
};

int main()
{
	// ���� ���� BankAccount ��ü�� ������ ���� ����
	vector<BankAccount> accounts;

	//���� �߰�
	accounts.push_back(BankAccount(1000, "�̿���", 10000));
	accounts.push_back(BankAccount(1001, "������", 40000));
	accounts.push_back(BankAccount(1002, "�Ѱ�", 25000));

	//���� ���� ���(�ε����� ���)
	/*for (int i = 0; i < accounts.size(); i++)
	{
		accounts[i].displayInfo();
		cout << "--------------------\n";
	}*/

	/*for (BankAccount account : accounts) {
		account.displayInfo();
		cout << "--------------------\n";
	}*/

	// auto&�� ������ �� ���(BankAccount ��ü) ����
	for (auto& account : accounts) {
		account.displayInfo();
		cout << "--------------------\n";
	}

	// ù ��° ���¿� �Ա�
	accounts[0].deposit(5000);
	accounts[0].displayInfo();

	//�� ��° ���¿��� ���
	accounts[1].withdraw(10000);
	accounts[1].displayInfo();

	return 0;
}