//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// ���� ���� Ŭ����
//class BankAccount {
//private:
//    int accountNumber;  // ���¹�ȣ
//    string owner;       // ���� ������
//    double balance;     // �ܾ�
//
//public:
//    // ������
//    BankAccount(int accNum, string name, double initialBalance = 0.0) {
//        accountNumber = accNum;
//        owner = name;
//        balance = initialBalance;
//    }
//
//    // ���� ���� ���
//    void displayInfo() const {
//        cout << "  ���� ����\n";
//        cout << "    ���¹�ȣ: " << accountNumber << endl;
//        cout << "    ������: " << owner << endl;
//        cout << "    �ܾ�: " << balance << "��" << endl;
//    }
//
//    // �Ա�
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance += amount;
//            cout << " " << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
//        }
//        else {
//            cout << " ��ȿ�� �ݾ��� �Է��ϼ���.\n";
//        }
//    }
//
//    // ���
//    void withdraw(double amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            cout << " " << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
//        }
//        else {
//            cout << " ����� �� �����ϴ�. (�ܾ� ���� �Ǵ� �߸��� �ݾ�)\n";
//        }
//    }
//};
//
//int main() {
//    // ���� ���� BankAccount ��ü�� ������ ���� ����
//    vector<BankAccount> accounts;
//
//    // ���� �߰�
//    accounts.push_back(BankAccount(12345, "��ö��", 10000));
//    accounts.push_back(BankAccount(67890, "�̿���", 50000));
//    accounts.push_back(BankAccount(54321, "�ڹμ�", 20000));
//
//    // auto&�� ����Ͽ� ������ �� ���� ���� ���
//    cout << "��� ���� ���� ���:\n";
//    for (auto& account : accounts) {
//        account.displayInfo();
//        cout << "-------------------\n";
//    }
//
//    // ù ��° ���¿� �Ա�
//    cout << "\nù ��° ���¿� 5000�� �Ա�:\n";
//    accounts[0].deposit(5000);
//    accounts[0].displayInfo();
//
//    // �� ��° ���¿��� ���
//    cout << "\n�� ��° ���¿��� 20000�� ���:\n";
//    accounts[1].withdraw(20000);
//    accounts[1].displayInfo();
//
//    return 0;
//}