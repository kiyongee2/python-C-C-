//#include <iostream>
//#include <string>
//#define MAX_ACCOUNTS 3
//
//using namespace std;
//
//class BankAccount {
//private:
//    string accountHolder;  //������
//    int accountNumber;    //���� ��ȣ
//    int balance;          //�ܰ�
//
//public:
//    // ������ 1
//    /*BankAccount(string name, int number, int initialBalance)
//        : accountHolder(name), accountNumber(number), balance(initialBalance) {
//    }*/
//
//    // ������ 2
//    /*BankAccount(string name, int number, int initialBalance) {
//        accountHolder = name;
//        accountNumber = number;
//        balance = initialBalance;
//    }*/
//
//    // ������ 3
//    BankAccount(string accountHolder, int accountNumber, int balance) {
//        this->accountHolder = accountHolder;
//        this->accountNumber = accountNumber;
//        this->balance = balance;
//    }
//
//    // �ܾ� ��ȸ
//    void displayBalance(){
//        cout << "������: " << accountHolder << "\n";
//        cout << "���¹�ȣ: " << accountNumber << "\n";
//        cout << "�ܾ�" << balance << "\n";
//    }
//
//    // �Ա�
//    void deposit(int amount) {
//        if (amount > 0) {
//            balance += amount;
//            cout << "�Աݾ�" << amount << ". ���� �ܾ�: " << balance << "\n";
//        }
//        else {
//            cout << "��ȿ���� ���� �Աݾ��Դϴ�.\n";
//        }
//    }
//
//    // ���
//    void withdraw(int amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            cout << "��ݾ�" << amount << ". ���� �ܾ�: " << balance << "\n";
//        }
//        else if (amount > balance) {
//            cout << "�ܾ��� �����մϴ�. ���� �ܾ�: " << balance << "\n";
//        }
//        else {
//            cout << "��ȿ���� ���� �ݾ��Դϴ�.\n";
//        }
//    }
//};
//
//int main() {
//
//    //BankAccount accounts = new BankAccount[MAX_ACCOUNTS];
//    
//    int choice;
//    bool run = true;
//
//    while (run) {
//        cout << "========================================================" << endl;
//        cout << "1. ���»��� | 2. ���¸�� | 3. ���� | 4. ��� | 5. ����" << endl;
//        cout << "========================================================" << endl;
//        cout << "����> ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            //createAccount();
//            break;
//        case 2:
//            //getAccountList();
//            break;
//        case 3:
//            //deposit();
//            break;
//        case 4:
//            //withdraw();
//            break;
//        case 5:
//            run = false;
//            break;
//        default:
//            cout << "�������� �ʴ� ����Դϴ�.";
//            break;
//        }
//    } //while
//    cout << "���α׷��� �����մϴ�.";
//
//    return 0;
//}