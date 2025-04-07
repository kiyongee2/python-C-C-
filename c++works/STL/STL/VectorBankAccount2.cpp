//#include <iostream>
//#include <vector>
//using namespace std;
//
//class BankAccount {
//	int accountNumber; //���� ��ȣ
//	string owner;      //������
//	int balance;       //�ܾ�
//
//public:
//	BankAccount(int accountNumber, string owner, int balance) :
//		accountNumber(accountNumber), owner(owner), balance(balance) {}
//
//	void displayInfo();  //���� ����
//	void deposit(int amount);  //�Ա�
//	void withdraw(int amount); //���
//};
//
//void BankAccount::displayInfo() {
//	cout << "���� ����\n";
//	cout << "  ���� ��ȣ: " << accountNumber << endl;
//	cout << "  ������: " << owner << endl;
//	cout << "  �ܾ�: " << balance << "��" << endl;
//}
//
//void BankAccount::deposit(int amount) {
//	if (amount < 0) {
//		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
//	}else {
//		balance += amount;
//		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " 
//			<< balance << "��\n";
//	}
//}
//
//void BankAccount::withdraw(int amount) {
//	if (amount < 0 || amount >= balance ) {
//		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
//	}
//	else {
//		balance -= amount;
//		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " 
//			<< balance << "��\n";
//	}
//}
//
//int main()
//{
//	//���� ���¸� ������ ���� �����̳� ����
//	vector<BankAccount> accounts;
//
//	//���� ����
//	accounts.push_back(BankAccount(1000, "�̿���", 10000));
//	accounts.push_back(BankAccount(1001, "������", 50000));
//	accounts.push_back(BankAccount(1002, "�Ѱ�", 20000));
//
//	//accounts[0].displayInfo(); //ù��° ���� ����
//
//	accounts[0].deposit(15000);  //1000�� ���¿� �Ա�
//	accounts[1].withdraw(20000); //1001�� ���¿��� ���
//	
//	//��ü ���� ���� - ���1
//	/*for (int i = 0; i < size(accounts); i++) {
//		cout << "-----------------------------------------------\n";
//		accounts[i].displayInfo();
//	}
//
//	// ��� 2
//	for (BankAccount account : accounts) {
//		cout << "-----------------------------------------------\n";
//		account.displayInfo();
//	}*/
//
//	// ��� 3
//	for (auto& account : accounts) { //auto�� ������ BankAccount ��ü ����
//		cout << "-----------------------------------------------\n";
//		account.displayInfo();
//	}
//	cout << "-----------------------------------------------\n";
//
//	return 0;
//}
