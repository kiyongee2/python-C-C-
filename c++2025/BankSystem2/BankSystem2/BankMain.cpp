#include <string>
#include "BankAccount.h"

vector<BankAccount> accounts;  //���¸� ������ ���� ����
int nextAccountNumber = 1000;  //���� ���¹�ȣ

//���� ����
void createAccount() {
	string name;

	cout << "�����ָ� �Է��ϼ���: ";
	cin.ignore();
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name); //�ű� ����
	accounts.push_back(newAccount);
	cout << "���°� ���������� �����Ǿ����ϴ�. (���¹�ȣ: " <<
		nextAccountNumber << ")\n";
	nextAccountNumber++;
}

//���� �˻�
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		if (account.getAccountNumber() == accNum)
			return &account;  //���� �ּ� ��ȯ
	}
	return nullptr;
}

//���� �Է� ���� ó�� �Լ�
void inputValidNumber() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "���ڸ� �Է��ϼ���.\n";
		return;
	}
}

//����
void deposit() {
	int accNum;
	int amount;

	cout << "�Ա��� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "�Ա��� �ݾ��� �Է��ϼ���: ";
		cin >> amount;
		inputValidNumber(); //���� �Է� ���� ó�� �Լ� ȣ��
		account->deposit(amount); //���� �Լ� ȣ��
	}
	else
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

//���
void withdraw() {
	int accNum;
	int amount;

	cout << "����� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "����� �ݾ��� �Է��ϼ���: ";
		cin >> amount;
		inputValidNumber(); //���� �Է� ���� ó�� �Լ� ȣ��
		account->withdraw(amount); //���� �Լ� ȣ��
	}
	else
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

//���� �˻� �� ���� ���
void displayAccount() {
	int accNum;
	cout << "��ȸ�� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";

	//���� ���
	/*for (auto& account : accounts)
		account.displayInfo();*/
}

int main() {

	bool run = true; //���� ����
	int choice;  //�޴�

	while (run) {
		cout << "========================================================\n";
		cout << "1.���»��� | 2.���� | 3.��� | 4.���°˻� | 5.����\n";
		cout << "========================================================\n";
		cout << "����> ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "��ȿ�� ���ڸ� �Է��ϼ���.\n";
			return -1;
		}

		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			displayAccount();
			break;
		case 5:
			cout << "���α׷��� �����մϴ�.";
			run = false;
			break;
		default:
			cout << "�������� �ʴ� ����Դϴ�. �ٽ� �����ϼ���.\n";
			break;
		}
	} //while ����

	system("pause"); //exe ���Ͽ��� ������ ���� ����
	return 0;
}
