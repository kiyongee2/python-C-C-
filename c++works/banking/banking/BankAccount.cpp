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
//    // 생성자
//    BankAccount(std::string name, int number, double initialBalance)
//        : accountHolder(name), accountNumber(number), balance(initialBalance) {
//    }
//
//    // 잔액 조회
//    void displayBalance() const {
//        std::cout << "Account Holder: " << accountHolder << "\n";
//        std::cout << "Account Number: " << accountNumber << "\n";
//        std::cout << "Balance: $" << balance << "\n";
//    }
//
//    // 입금
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
//    // 출금
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
//    // 계좌 생성
//    BankAccount account("John Doe", 12345, 1000.0);
//
//    // 기본 동작 테스트
//    account.displayBalance();
//
//    account.deposit(500.0);
//    account.withdraw(200.0);
//    account.withdraw(1500.0); // 잔액 부족 테스트
//
//    return 0;
//}
