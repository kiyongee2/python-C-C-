//#include <iostream>
//#include <vector>
//#include "BankAccount.h"
//using namespace std;
//
//int main() {
//    //벡터 자료구조 인스턴스 생성
//    vector<BankAccount> accounts;
//
//    //은행 계좌 인스턴스 생성 및 저장
//    accounts.push_back(BankAccount(1001, "이우주"));
//    accounts.push_back(BankAccount(1002, "정은하"));
//    accounts.push_back(BankAccount(1003, "한강", 100000));
//
//    // 입금
//    accounts[0].deposit(10000);
//    accounts[1].deposit(30000);
//
//    // 출금
//    accounts[1].withdraw(20000);
//    accounts[1].withdraw(50000); // 잔액 부족
//
//    // 계좌 정보 및 거래 내역 출력
//    for (BankAccount& account : accounts) {
//        account.displayInfo();
//        account.getTransactionHistory();
//    }
//
//    return 0;
//}
