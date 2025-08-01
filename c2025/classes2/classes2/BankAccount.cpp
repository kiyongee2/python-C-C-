#include <iostream>
#include "BankAccount.h"

//Transaction의 생성자
Transaction::Transaction(TransactionType type, int amount) :
    type(type), amount(amount) {}

//BankAccount 생성자 목록
BankAccount::BankAccount(int accountNumber, string owner, int balance)
    : accountNumber(accountNumber), owner(owner), balance(balance) {
}

void BankAccount::deposit(int amount) { //예금 기능
    if (amount < 0) {
        cout << "유효한 금액을 입력하세요.\n";
    }
    else {
        balance += amount;
        cout << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
        //addTransaction(TransactionType::입금, amount);
        addTransaction(입금, amount);
    }
}
 

void BankAccount::withdraw(int amount) { //출금 기능
    if (amount < 0) {
        cout << "유효한 금액을 입력하세요.\n";
    }
    else if (amount > balance) {
        cout << "잔액이 부족합니다. 다시 입력하세요.\n";
    }
    else {
        balance -= amount;
        cout << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원\n";
        //addTransaction(TransactionType::출금, amount);
        addTransaction(출금, amount);
    }
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
    Transaction transaction(type, amount);  //거래 1건 생성
    transactions.push_back(transaction);    //거래를 벡터에 저장
}

//거래 내역 출력
void BankAccount::getTransactionHistory() {
    cout << "[" << owner << "] 계좌 거래 내역(최근 " << transactions.size() << "건)\n";
    if (transactions.empty()) {
        cout << "거래 내역이 없습니다.\n";
        return;
    }

    //거래 내역 출력
    for (Transaction& transaction : transactions) {
        cout << " |" << (transaction.type == 입금 ? "입금" : "출금");
        cout << "| " << transaction.amount << "원\n";
    }
    cout << "==================================\n";
}

void BankAccount::displayInfo() { //계좌 정보 출력
    cout << "\n[계좌 정보]\n";
    cout << "    계좌 번호: " << accountNumber << endl;
    cout << "    예금주: " << owner << endl;
    cout << "    현재 잔고: " << balance << endl;
    cout << "----------------------------------\n";
}
