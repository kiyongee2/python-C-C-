#include <string>
#include "BankAccount.h"

vector<BankAccount> accounts; //���¸� ������ ���� ����
int nextAccountNumber = 1000; //���� ���� ��ȣ

//���� ����
void createAccount() {
	string name;
	cin.ignore();
	cout << "�����ָ� �Է��ϼ���: ";
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name); //�ű� ���� ����
	accounts.push_back(newAccount); //���Ϳ� ���� ����
	cout << "���°� ���������� �����Ǿ����ϴ�! (���¹�ȣ: " << 
		nextAccountNumber << ")\n";
	nextAccountNumber++;  //���¼� 1����
}

//���� �˻�
BankAccount* searchAccount(int accNum) { //������ ��ȯ �ڷ���(�ʼ�)
	for (auto& account : accounts) { //������(�ʼ�)
		//�̹� ��ϵ� ���¿� �Է��� ���°� ��ġ�ϸ�
		if (account.getAccountNumber() == accNum) {
			return &account; //���� �ּ� ��ȯ
		}
	}
	return nullptr;
}

void deposit() { //���� ���
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
			cin.ignore(1000, '\n'); //'\n'���� �ִ� 1000���� ���� �����
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		account->deposit(amount); //���� ��� ȣ��
	}
	else 
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

void withdraw() { //��� ���
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
		account->withdraw(amount); //��� ��� ȣ��
	}
	else
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
}

void displayAccount() { //���� ���� ���
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
	bool run = true; //���� ����
	int choice;  //�޴�
	
	while (run) {
	    cout << "========================================================\n";
	    cout << "1. ���»��� | 2. ���� | 3. ��� | 4. ���°˻� | 5. ����\n";
	    cout << "========================================================\n";
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

