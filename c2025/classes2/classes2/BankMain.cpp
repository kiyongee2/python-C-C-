//#include <iostream>
//#include <vector>
//#include "BankAccount.h"
//using namespace std;
//
//int main() {
//    vector<BankAccount> accounts;
//
//    accounts.push_back(BankAccount(1001, "이우주", 10000));
//    accounts.push_back(BankAccount(1002, "정은하", 30000));
//    accounts.push_back(BankAccount(1003, "한강", 20000));
//
//    // 입금
//    accounts[0].deposit(5000);
//    accounts[1].deposit(10000);
//
//    // 출금
//    accounts[1].withdraw(20000);
//    accounts[1].withdraw(50000); // 실패 예상
//
//    // 계좌 정보 및 거래 내역 출력
//    for (BankAccount account : accounts) {
//        account.displayInfo();
//        account.getTransactionHistory();
//    }
//
//    return 0;
//}
