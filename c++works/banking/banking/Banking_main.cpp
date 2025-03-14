//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class BankAccount {
//private:
//    string accountHolder;
//    int accountNumber;
//    double balance;
//
//public:
//    BankAccount() : accountHolder(""), accountNumber(0), balance(0.0) {}
//
//    BankAccount(string name, int number, double initialBalance)
//        : accountHolder(name), accountNumber(number), balance(initialBalance) {
//    }
//
//    void setAccount(string name, int number, double initialBalance) {
//        accountHolder = name;
//        accountNumber = number;
//        balance = initialBalance;
//    }
//
//    int getAccountNumber() {
//        return accountNumber;
//    }
//
//    void displayBalance(){
//        std::cout << "Account Holder: " << accountHolder << "\n";
//        std::cout << "Account Number: " << accountNumber << "\n";
//        std::cout << "Balance: $" << balance << "\n";
//    }
//
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance += amount;
//            std::cout << "Deposited $" << amount << " to account " << accountNumber << ".\n";
//        }
//        else {
//            std::cout << "Invalid deposit amount.\n";
//        }
//    }
//
//    void withdraw(double amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            std::cout << "Withdrew $" << amount << " from account " << accountNumber << ".\n";
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
//class Bank {
//private:
//    static const int MAX_ACCOUNTS = 10;
//    BankAccount accounts[MAX_ACCOUNTS];
//    int accountCount;
//
//public:
//    Bank() : accountCount(0) {}
//
//    void createAccount(const string& name, int accountNumber, double initialBalance) {
//        if (accountCount < MAX_ACCOUNTS) {
//            accounts[accountCount].setAccount(name, accountNumber, initialBalance);
//            accountCount++;
//            std::cout << "Account created for " << name << " with account number " << accountNumber << ".\n";
//        }
//        else {
//            std::cout << "Maximum account limit reached.\n";
//        }
//    }
//
//    BankAccount* findAccount(int accountNumber) {
//        for (int i = 0; i < accountCount; ++i) {
//            if (accounts[i].getAccountNumber() == accountNumber) {
//                return &accounts[i];
//            }
//        }
//        return nullptr;
//    }
//
//    void displayAllAccounts(){
//        cout << "All Accounts:\n";
//        for (int i = 0; i < accountCount; ++i) {
//            accounts[i].displayBalance();
//            std::cout << "----------------------\n";
//        }
//    }
//};
//
//int main() {
//    Bank bank;
//
//    // 계좌 생성
//    bank.createAccount("John Doe", 1001, 500.0);
//    bank.createAccount("Jane Smith", 1002, 1500.0);
//
//    // 특정 계좌에 입금 및 출금
//    BankAccount* account = bank.findAccount(1001);
//    if (account) {
//        account->deposit(300.0);
//        account->withdraw(200.0);
//    }
//    else {
//        std::cout << "Account not found.\n";
//    }
//
//    // 전체 계좌 상태 출력
//    bank.displayAllAccounts();
//
//    return 0;
//}
