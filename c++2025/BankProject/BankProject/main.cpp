//#include "banking.h"
//
//int main()
//{
//	//���� ��ü - ���� 3�� ����
//	/*BankAccount* accounts = new BankAccount[3]{
//		BankAccount(1001, "�̿���", 10000),
//		BankAccount(1002, "������", 30000),
//		BankAccount(1003, "�Ѱ�", 20000)
//	};
//
//	//�Ա�
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//���
//	//accounts[1].withdraw(50000);
//	accounts[1].withdraw(20000);
//
//
//	//���� ����
//	for (int i = 0; i < 3; i++) {
//		accounts[i].displayInfo();
//		accounts[i].getTransactionHistory();
//	}
//
//	delete[] accounts;*/
//
//	//vector �ڷᱸ�� ���
//	vector<BankAccount> accounts;
//
//	accounts.push_back(BankAccount(1001, "�̿���", 10000));
//	accounts.push_back(BankAccount(1002, "������", 30000));
//	accounts.push_back(BankAccount(1003, "�Ѱ�", 20000));
//
//	//�Ա�
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//���
//	//accounts[1].withdraw(50000);
//	accounts[1].withdraw(20000);
//
//
//	//���� ����
//	for (auto& account : accounts) {
//		account.displayInfo();
//		account.getTransactionHistory();
//	}
//
//	system("pause");
//
//	return 0;
//}