#include "BankAccount.h"

vector<BankAccount> accounts; //���¸� ������ ���� ����
int nextAccountNumber = 1000;  //1000�� ���� ����

//���� �����ϴ�
void createAccount() {
	string name;
	cout << "�����ָ� �Է��ϼ���: ";
	cin >> name;

	BankAccount newAccount(nextAccountNumber, name); //�ű� ���� ����
	accounts.push_back(newAccount); //���Ϳ� ���� ����
	cout << "���°� ���������� �����Ǿ����ϴ�! (���¹�ȣ: " << 
		nextAccountNumber << ")\n";
	nextAccountNumber++;  //���¹�ȣ 1����
}

//���� �˻�
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		//�̹� ��ϵ� ���¿� �Է��� ���°� ��ġ�ϸ�
		if (account.getAccountNumber() == accNum) {
			return &account; //���� �ּ� ��ȯ
		}
	}
	return nullptr;
}

//�����ϴ�
void deposit() {
	int accNum;
	int amount;

	cout << "�Ա��� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum); //��ü ����
	if (account) {
		cout << "�Ա��� �ݾ��� �Է��ϼ���: ";
		cin >> amount;
		if (cin.fail()) { //���ڸ� �Է��� ��� ���� ó��
			cin.clear(); //�ʱ�ȭ
			//�ִ� 1000���� ���ڸ� �о '\n' ���� ������
			cin.ignore(1000, '\n'); 
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		account->deposit(amount);
	}
	else 
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

//����ϴ�
void withdraw() {
	int accNum;
	int amount;

	cout << "����� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "����� �ݾ��� �Է��ϼ���: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();  
			cin.ignore(1000, '\n'); 
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		account->withdraw(amount);
	}
	else
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

void displayAccount() {
	int accNum;
	cout << "��ȸ�� ���¹�ȣ�� �Է��ϼ���: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();  //���� ���� ���
		account->getTransactionHistory(); //�ŷ� ���� ���
	}
	else 
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

int main()
{
	int choice;  //�޴�
	bool run = true; //���� ����
	
	while (run) {
	    cout << "========================================================" << endl;
	    cout << "1. ���»��� | 2. ���� | 3. ��� | 4. ���°˻� | 5. ����   " << endl;
	    cout << "========================================================" << endl;
	    cout << "����> ";
	    cin >> choice;
	
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
	        run = false;
			cout << "���α׷��� �����մϴ�.";
	        break;
	    default:
	        cout << "�������� �ʴ� ����Դϴ�.\n";
	        break;
	    }
	} //while ����
	
	return 0;
}

