//#include <iostream>
//#include <string>
//#define MAX_ACCOUNTS 3
//
//using namespace std;
//
//class BankAccount {
//private:
//    string accountHolder;  //계좌주
//    int accountNumber;    //계좌 번호
//    int balance;          //잔고
//
//public:
//    // 생성자 1
//    /*BankAccount(string name, int number, int initialBalance)
//        : accountHolder(name), accountNumber(number), balance(initialBalance) {
//    }*/
//
//    // 생성자 2
//    /*BankAccount(string name, int number, int initialBalance) {
//        accountHolder = name;
//        accountNumber = number;
//        balance = initialBalance;
//    }*/
//
//    // 생성자 3
//    BankAccount(string accountHolder, int accountNumber, int balance) {
//        this->accountHolder = accountHolder;
//        this->accountNumber = accountNumber;
//        this->balance = balance;
//    }
//
//    // 잔액 조회
//    void displayBalance(){
//        cout << "계좌주: " << accountHolder << "\n";
//        cout << "계좌번호: " << accountNumber << "\n";
//        cout << "잔액" << balance << "\n";
//    }
//
//    // 입금
//    void deposit(int amount) {
//        if (amount > 0) {
//            balance += amount;
//            cout << "입금액" << amount << ". 현재 잔액: " << balance << "\n";
//        }
//        else {
//            cout << "유효하지 않은 입금액입니다.\n";
//        }
//    }
//
//    // 출금
//    void withdraw(int amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            cout << "출금액" << amount << ". 현재 잔액: " << balance << "\n";
//        }
//        else if (amount > balance) {
//            cout << "잔액이 부족합니다. 현재 잔액: " << balance << "\n";
//        }
//        else {
//            cout << "유효하지 않은 금액입니다.\n";
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
//        cout << "1. 계좌생성 | 2. 계좌목록 | 3. 예금 | 4. 출금 | 5. 종료" << endl;
//        cout << "========================================================" << endl;
//        cout << "선택> ";
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
//            cout << "지원되지 않는 기능입니다.";
//            break;
//        }
//    } //while
//    cout << "프로그램을 종료합니다.";
//
//    return 0;
//}