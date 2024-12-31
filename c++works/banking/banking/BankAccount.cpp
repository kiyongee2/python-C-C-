//#include <iostream>
//#include <string>
//
//class BankAccount {
//private:
//    std::string accountHolder;
//    int accountNumber;
//    double balance;
//
//public:
//    // ������
//    BankAccount(std::string name, int number, double initialBalance)
//        : accountHolder(name), accountNumber(number), balance(initialBalance) {
//    }
//
//    // �ܾ� ��ȸ
//    void displayBalance() const {
//        std::cout << "Account Holder: " << accountHolder << "\n";
//        std::cout << "Account Number: " << accountNumber << "\n";
//        std::cout << "Balance: $" << balance << "\n";
//    }
//
//    // �Ա�
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance += amount;
//            std::cout << "Deposited $" << amount << ". New Balance: $" << balance << "\n";
//        }
//        else {
//            std::cout << "Invalid deposit amount.\n";
//        }
//    }
//
//    // ���
//    void withdraw(double amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            std::cout << "Withdrew $" << amount << ". New Balance: $" << balance << "\n";
//        }
//        else if (amount > balance) {
//            std::cout << "Insufficient balance.\n";
//        }
//        else {
//            std::cout << "Invalid withdrawal amount.\n";
//        }
//    }
//};
//
//int main() {
//    // ���� ����
//    BankAccount account("John Doe", 12345, 1000.0);
//
//    // �⺻ ���� �׽�Ʈ
//    account.displayBalance();
//
//    account.deposit(500.0);
//    account.withdraw(200.0);
//    account.withdraw(1500.0); // �ܾ� ���� �׽�Ʈ
//
//    return 0;
//}
