//#include <iostream>
//#include <vector>
//using namespace std;
//
////�ŷ� ���� ������
//enum TransactionType {
//	�Ա�,
//	���
//};
//
//struct Transaction {
//	TransactionType type;
//	int amount;
//};
//
////���� ���� Ŭ����
//class BankAccount {
//private:
//	int accountNumber;  //���¹�ȣ
//	string owner;       //������
//	int balance;        //�ܰ�
//	vector<Transaction> transactions; //�ŷ�����
//
//public:
//	BankAccount(int accountNumber, string owner, int balance) :
//		accountNumber(accountNumber), owner(owner), balance(balance){ }
//
//	void deposit(int amount);  //�Ա�
//	void withdraw(int amount); //���
//	void displayInfo();        //���� ����
//	void getTransactionHistory(); //�ŷ����� ��ȸ
//
//private:
//	void addTransaction(TransactionType type, int amount);
//};
//
//void BankAccount::deposit(int amount) {
//	if (amount < 0) {
//		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
//	}
//	else {
//		balance += amount;
//		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " <<
//			balance << "��\n";
//	}
//
//	addTransaction(TransactionType::�Ա�, amount);  //�Ա� �ŷ�
//}
//
//void BankAccount::withdraw(int amount) {
//	if (amount < 0 ) {
//		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
//	}
//	else if (amount > balance) {
//		cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���\n";
//	}
//	else {
//		balance -= amount;
//		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " <<
//			balance << "��\n";
//	}
//
//	addTransaction(TransactionType::���, amount);  //��� �ŷ�
//}
//
////���� ����
//void BankAccount::displayInfo() {
//	cout << "\n���� ����\n";
//	cout << "  ���¹�ȣ: " << accountNumber << endl;
//	cout << "  ������: " << owner << endl;
//	cout << "  �ܾ�: " << balance << endl;
//}
//
////�ŷ� �߰�
//void BankAccount::addTransaction(TransactionType type, int amount) {
//	Transaction trans;
//	trans.type = type;
//	trans.amount = amount;
//	transactions.push_back(trans); //Ʈ����� ���Ϳ� 1�� ����
//}
//
////�ŷ� ���� ��ȸ
//void BankAccount::getTransactionHistory() {
//	cout << "\n[" << owner << "] ���� �ŷ����� (�ֱ� " << transactions.size() << "��)\n";
//	if (transactions.empty()) {
//		cout << "  �ŷ������� �����ϴ�.\n";
//		return;
//	}
//
//	for (const auto& t : transactions) {
//		cout << " | " << (t.type == TransactionType::�Ա� ? "�Ա�" : "���");
//		cout << " | " << t.amount << "��\n";
//	}
//}
//
//int main()
//{
//	//���� 3�� ����
//	BankAccount* accounts = new BankAccount[3]{
//		BankAccount(1001, "�̿���", 10000),
//		BankAccount(1002, "������", 30000),
//		BankAccount(1003, "�Ѱ�", 20000),
//	};
//
//	//�Ա�
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//���
//	accounts[1].withdraw(50000);  //�ܾ� ����
//	accounts[1].withdraw(20000);
//	
//	//���� ����
//	for (int i = 0; i < 3; i++) {
//		accounts[i].displayInfo();
//		accounts[i].getTransactionHistory();
//	}
//
//	delete[] accounts;  //��ü �迭 �޸� ����
//
//	return 0;
//}